#include "awtk.h"
#include "jsengine.h"

class async_callback_info_t {
public:
  void *ctx;
  Nan::CopyablePersistentTraits<v8::Function>::CopyablePersistent fn;

  async_callback_info_t(jsvalue_t &cb, void *ctx) {
    this->ctx = ctx;
    this->fn = Nan::Persistent<v8::Function>(cb.As<v8::Function>());
  }

  ~async_callback_info_t() { this->fn.Reset(); }

  ret_t call(const void *data) {
    ret_t ret = RET_OK;
    v8::Local<v8::Value> argv[1];
    argv[0] = Nan::New((double)((int64_t)(data)));
    v8::Local<v8::Value> jret = Nan::MakeCallback(
        Nan::GetCurrentContext()->Global(), Nan::New(this->fn), 1, argv);
    ret = (ret_t)(jret->Int32Value());

    return ret;
  }
};

static async_callback_info_t *async_callback_info_create(jsvalue_t cb,
                                                         void *ctx) {
  return new async_callback_info_t(cb, ctx);
}

static ret_t async_callback_info_call(void *ctx, const void *data) {
  async_callback_info_t *info = (async_callback_info_t *)ctx;

  return info->call(data);
}

static ret_t async_callback_info_destroy(void *ctx) {
  async_callback_info_t *info = (async_callback_info_t *)ctx;
  delete info;

  return RET_OK;
}

static ret_t call_on_timer(const timer_info_t *timer) {
  return async_callback_info_call(timer->ctx, timer);
}

static ret_t call_on_idle(const idle_info_t *idle) {
  return async_callback_info_call(idle->ctx, idle);
}

static ret_t call_on_data(void *ctx, const void *data) {
  return async_callback_info_call(ctx, data);
}

static ret_t call_on_event(void *ctx, event_t *e) {
  return async_callback_info_call(ctx, e);
}

static ret_t emitter_item_on_destroy(void *data) {
  emitter_item_t *item = (emitter_item_t *)data;

  async_callback_info_destroy((item->ctx));

  return RET_OK;
}

static ret_t timer_info_on_destroy(void *data) {
  timer_info_t *item = (timer_info_t *)data;

  async_callback_info_destroy((item->ctx));

  return RET_OK;
}

static ret_t idle_info_on_destroy(void *data) {
  idle_info_t *item = (idle_info_t *)data;

  async_callback_info_destroy((item->ctx));

  return RET_OK;
}

static void wrap_timer_add(const Nan::FunctionCallbackInfo<v8::Value> &argv) {
  uint32_t ret = 0;
  uint32_t argc = argv.Length();

  if (argc >= 3) {
    auto cb = v8::Local<v8::Function>::Cast(argv[0]);
    void *ctx = jsvalue_get_pointer(NULL, argv[1], NULL);
    uint32_t duration = jsvalue_get_int_value(NULL, argv[2]);
    async_callback_info_t *info = async_callback_info_create(cb, ctx);

    ret = timer_add(call_on_timer, info, duration);
    if (ret == TK_INVALID_ID) {
      async_callback_info_destroy(info);
    } else {
      timer_set_on_destroy(ret, timer_info_on_destroy, NULL);
    }
  }

  v8::Local<v8::Int32> jret = Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
}

static void wrap_idle_add(const Nan::FunctionCallbackInfo<v8::Value> &argv) {
  uint32_t ret = 0;
  uint32_t argc = argv.Length();

  if (argc >= 2) {
    auto cb = v8::Local<v8::Function>::Cast(argv[0]);
    void *ctx = jsvalue_get_pointer(NULL, argv[1], NULL);
    async_callback_info_t *info = async_callback_info_create(cb, ctx);

    ret = idle_add(call_on_idle, info);
    if (ret == TK_INVALID_ID) {
      async_callback_info_destroy(info);
    } else {
      idle_set_on_destroy(ret, idle_info_on_destroy, NULL);
    }
  }

  v8::Local<v8::Int32> jret = Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
}

static void
wrap_widget_foreach(const Nan::FunctionCallbackInfo<v8::Value> &argv) {
  uint32_t ret = 0;
  uint32_t argc = argv.Length();

  log_debug("wrap_widget_foreach\n");
  if (argc >= 2) {
    void *ctx = NULL;
    widget_t *widget = WIDGET(jsvalue_get_pointer(NULL, argv[0], NULL));
    auto cb = v8::Local<v8::Function>::Cast(argv[1]);
    if (argc > 2) {
      ctx = jsvalue_get_pointer(NULL, argv[2], NULL);
    }
    async_callback_info_t *info = async_callback_info_create(cb, ctx);
    ret = widget_foreach(widget, call_on_data, info);
    log_debug("widget=%p %s\n", widget, widget->name);
    async_callback_info_destroy(info);
  }

  v8::Local<v8::Int32> jret = Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
}

static void wrap_widget_on(const Nan::FunctionCallbackInfo<v8::Value> &argv) {
  uint32_t ret = 0;
  uint32_t argc = argv.Length();

  if (argc >= 4) {
    widget_t *widget = WIDGET(jsvalue_get_pointer(NULL, argv[0], NULL));
    uint32_t type = jsvalue_get_int_value(NULL, argv[1]);
    auto cb = v8::Local<v8::Function>::Cast(argv[2]);
    void *ctx = jsvalue_get_pointer(NULL, argv[3], NULL);
    async_callback_info_t *info = async_callback_info_create(cb, ctx);

    ret = widget_on(widget, type, call_on_event, info);
    if (ret == TK_INVALID_ID) {
      async_callback_info_destroy(info);
    } else {
      emitter_set_on_destroy(widget->emitter, ret, emitter_item_on_destroy,
                             NULL);
    }
  }

  v8::Local<v8::Int32> jret = Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
}

static void wrap_emitter_on(const Nan::FunctionCallbackInfo<v8::Value> &argv) {
  uint32_t ret = 0;
  uint32_t argc = argv.Length();

  if (argc >= 4) {
    emitter_t *emitter = EMITTER(jsvalue_get_pointer(NULL, argv[0], NULL));
    uint32_t type = jsvalue_get_int_value(NULL, argv[1]);
    auto cb = v8::Local<v8::Function>::Cast(argv[2]);
    void *ctx = jsvalue_get_pointer(NULL, argv[3], NULL);
    async_callback_info_t *info = async_callback_info_create(cb, ctx);

    ret = emitter_on(emitter, type, call_on_event, info);
    if (ret == TK_INVALID_ID) {
      async_callback_info_destroy(info);
    } else {
      emitter_set_on_destroy(emitter, ret, emitter_item_on_destroy,
                             NULL);
    }
  }

  v8::Local<v8::Int32> jret = Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
}

extern "C" ret_t assets_init(void);

static void wrap_awtk_init(const Nan::FunctionCallbackInfo<v8::Value> &argv) {
  JSContext *ctx = NULL;
  uint32_t argc = argv.Length();
  if (argc >= 3) {
    ret_t ret = (ret_t)0;
    wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[0]);
    wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[1]);
    const char *app_name = (const char *)jsvalue_get_utf8_string(ctx, argv[3]);

    ret = (ret_t)tk_init(w, h, APP_SIMULATOR, app_name, NULL);
    assets_init();
    tk_ext_widgets_init();
    system_info_set_default_font(system_info(), "default_full");

    jsvalue_free_str(ctx, app_name);

    v8::Local<v8::Int32> jret = Nan::New((int32_t)(ret));
    argv.GetReturnValue().Set(jret);
  }

  (void)argc;
  (void)ctx;
}

static void
wrap_awtk_main_loop_step(const Nan::FunctionCallbackInfo<v8::Value> &argv) {
  bool_t ret = FALSE;
  main_loop_t *loop = main_loop();

  loop->running = TRUE;
  if (loop != NULL) {
    main_loop_step(loop);

    ret = !(loop->app_quited);
    if (loop->app_quited) {
      tk_exit();
    }
  }

  argv.GetReturnValue().Set(ret);
}
