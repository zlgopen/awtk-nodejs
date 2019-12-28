/*XXX: GENERATED CODE, DONT EDIT IT.*/
#include "tkc/utf8.h"
#include "tkc/mem.h"
#include "nan.h"
#include "tkc/event.h"
#include "tkc/rect.h"
#include "tkc/emitter.h"
#include "base/bitmap.h"
#include "tkc/value.h"
#include "tkc/object.h"
#include "src/awtk_global.h"
#include "base/dialog.h"
#include "base/events.h"
#include "base/font_manager.h"
#include "base/font.h"
#include "base/idle.h"
#include "base/image_manager.h"
#include "base/input_method.h"
#include "base/keys.h"
#include "base/locale_info.h"
#include "base/style.h"
#include "base/theme.h"
#include "base/timer.h"
#include "base/types_def.h"
#include "base/vgcanvas.h"
#include "base/widget_consts.h"
#include "base/widget.h"
#include "tkc/types_def.h"
#include "tkc/timer_manager.h"
#include "tkc/time_now.h"
#include "base/canvas.h"
#include "tkc/named_value.h"
#include "tkc/mime_types.h"
#include "tkc/idle_manager.h"
#include "slide_view/slide_indicator.h"
#include "base/clip_board.h"
#include "tkc/easing.h"
#include "tkc/date_time.h"
#include "tkc/color.h"
#include "tkc/asset_info.h"
#include "base/assets_manager.h"
#include "canvas_widget/canvas_widget.h"
#include "time_clock/time_clock.h"
#include "text_selector/text_selector.h"
#include "switch/switch.h"
#include "slide_view/slide_view.h"
#include "slide_menu/slide_menu.h"
#include "scroll_view/scroll_view.h"
#include "scroll_view/scroll_bar.h"
#include "scroll_view/list_view.h"
#include "scroll_view/list_view_h.h"
#include "scroll_view/list_item.h"
#include "scroll_label/hscroll_label.h"
#include "rich_text/rich_text.h"
#include "progress_circle/progress_circle.h"
#include "mledit/mledit.h"
#include "mledit/line_number.h"
#include "image_value/image_value.h"
#include "image_animation/image_animation.h"
#include "guage/guage.h"
#include "guage/guage_pointer.h"
#include "features/draggable.h"
#include "color_picker/color_picker.h"
#include "color_picker/color_component.h"
#include "base/window_manager.h"
#include "base/window_base.h"
#include "base/style_mutable.h"
#include "base/image_base.h"
#include "widgets/app_bar.h"
#include "widgets/button_group.h"
#include "widgets/button.h"
#include "widgets/check_button.h"
#include "widgets/clip_view.h"
#include "widgets/color_tile.h"
#include "widgets/column.h"
#include "widgets/combo_box_item.h"
#include "widgets/combo_box.h"
#include "widgets/dialog_client.h"
#include "widgets/dialog_title.h"
#include "widgets/digit_clock.h"
#include "widgets/dragger.h"
#include "widgets/edit.h"
#include "widgets/grid_item.h"
#include "widgets/grid.h"
#include "widgets/group_box.h"
#include "widgets/label.h"
#include "widgets/overlay.h"
#include "widgets/pages.h"
#include "widgets/progress_bar.h"
#include "widgets/row.h"
#include "widgets/slider.h"
#include "widgets/tab_button_group.h"
#include "widgets/tab_button.h"
#include "widgets/tab_control.h"
#include "widgets/view.h"
#include "tkc/idle_info.h"
#include "mutable_image/mutable_image.h"
#include "tkc/object_array.h"
#include "gif_image/gif_image.h"
#include "tkc/object_default.h"
#include "widgets/image.h"
#include "combo_box_ex/combo_box_ex.h"
#include "widgets/calibration_win.h"
#include "widgets/popup.h"
#include "svg_image/svg_image.h"
#include "tkc/timer_info.h"
#include "widgets/spin_box.h"
#include "widgets/system_bar.h"
#include "base/window.h"
#include "keyboard/keyboard.h"
#include "custom.c"

static void wrap_event_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (event_t*)event_cast(event);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_event_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  event_t* ret = NULL;
  uint32_t type = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
  ret = (event_t*)event_create(type);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_event_t_get_prop_type(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  event_t* obj = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->type));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_event_t_get_prop_time(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  event_t* obj = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->time));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_event_t_get_prop_target(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  event_t* obj = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(obj->target)));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t event_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("event_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_event_cast)->GetFunction());
  ctx->Set(Nan::New("event_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_event_create)->GetFunction());
  ctx->Set(Nan::New("event_t_get_prop_type").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_event_t_get_prop_type)->GetFunction());
  ctx->Set(Nan::New("event_t_get_prop_time").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_event_t_get_prop_time)->GetFunction());
  ctx->Set(Nan::New("event_t_get_prop_target").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_event_t_get_prop_target)->GetFunction());

 return RET_OK;
}

static void wrap_rect_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 4) {
  rect_t* ret = NULL;
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[0]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (rect_t*)rect_create(x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_rect_set(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  rect_t* ret = NULL;
  rect_t* rect = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (rect_t*)rect_set(rect, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_rect_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  rect_t* ret = NULL;
  rect_t* rect = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");
  ret = (rect_t*)rect_cast(rect);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_rect_t_get_prop_x(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  rect_t* obj = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->x));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_rect_t_get_prop_y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  rect_t* obj = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->y));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_rect_t_get_prop_w(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  rect_t* obj = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->w));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_rect_t_get_prop_h(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  rect_t* obj = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->h));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t rect_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("rect_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_rect_create)->GetFunction());
  ctx->Set(Nan::New("rect_set").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_rect_set)->GetFunction());
  ctx->Set(Nan::New("rect_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_rect_cast)->GetFunction());
  ctx->Set(Nan::New("rect_t_get_prop_x").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_rect_t_get_prop_x)->GetFunction());
  ctx->Set(Nan::New("rect_t_get_prop_y").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_rect_t_get_prop_y)->GetFunction());
  ctx->Set(Nan::New("rect_t_get_prop_w").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_rect_t_get_prop_w)->GetFunction());
  ctx->Set(Nan::New("rect_t_get_prop_h").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_rect_t_get_prop_h)->GetFunction());

 return RET_OK;
}

ret_t pointf_t_init(v8::Local<v8::Object> ctx) {

 return RET_OK;
}

ret_t point_t_init(v8::Local<v8::Object> ctx) {

 return RET_OK;
}

static void wrap_emitter_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  emitter_t* ret = NULL;
  ret = (emitter_t*)emitter_create();

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_emitter_dispatch(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
  event_t* e = (event_t*)jsvalue_get_pointer(ctx, argv[1], "event_t*");
  ret = (ret_t)emitter_dispatch(emitter, e);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_emitter_dispatch_simple_event(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
  event_type_t type = (event_type_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)emitter_dispatch_simple_event(emitter, type);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_emitter_off(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
  uint32_t id = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)emitter_off(emitter, id);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_emitter_enable(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
  ret = (ret_t)emitter_enable(emitter);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_emitter_disable(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
  ret = (ret_t)emitter_disable(emitter);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_emitter_size(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  uint32_t ret = (uint32_t)0;
  emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
  ret = (uint32_t)emitter_size(emitter);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_emitter_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  emitter_t* ret = NULL;
  emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
  ret = (emitter_t*)emitter_cast(emitter);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t emitter_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("emitter_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_emitter_create)->GetFunction());
  ctx->Set(Nan::New("emitter_dispatch").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_emitter_dispatch)->GetFunction());
  ctx->Set(Nan::New("emitter_dispatch_simple_event").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_emitter_dispatch_simple_event)->GetFunction());
  ctx->Set(Nan::New("emitter_on").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_emitter_on)->GetFunction());
  ctx->Set(Nan::New("emitter_off").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_emitter_off)->GetFunction());
  ctx->Set(Nan::New("emitter_enable").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_emitter_enable)->GetFunction());
  ctx->Set(Nan::New("emitter_disable").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_emitter_disable)->GetFunction());
  ctx->Set(Nan::New("emitter_size").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_emitter_size)->GetFunction());
  ctx->Set(Nan::New("emitter_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_emitter_cast)->GetFunction());

 return RET_OK;
}

static void wrap_bitmap_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  bitmap_t* ret = NULL;
  ret = (bitmap_t*)bitmap_create();

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_bitmap_create_ex(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 4) {
  bitmap_t* ret = NULL;
  uint32_t w = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
  uint32_t h = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  uint32_t line_length = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
  bitmap_format_t format = (bitmap_format_t)jsvalue_get_number_value(ctx, argv[3]);
  ret = (bitmap_t*)bitmap_create_ex(w, h, line_length, format);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_bitmap_get_bpp(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  uint32_t ret = (uint32_t)0;
  bitmap_t* bitmap = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");
  ret = (uint32_t)bitmap_get_bpp(bitmap);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_bitmap_t_get_prop_w(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->w));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_bitmap_t_get_prop_h(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->h));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_bitmap_t_get_prop_line_length(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->line_length));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_bitmap_t_get_prop_flags(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->flags));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_bitmap_t_get_prop_format(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->format));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_bitmap_t_get_prop_name(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  const char* str_temp = obj->name;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t bitmap_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("bitmap_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_bitmap_create)->GetFunction());
  ctx->Set(Nan::New("bitmap_create_ex").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_bitmap_create_ex)->GetFunction());
  ctx->Set(Nan::New("bitmap_get_bpp").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_bitmap_get_bpp)->GetFunction());
  ctx->Set(Nan::New("bitmap_t_get_prop_w").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_bitmap_t_get_prop_w)->GetFunction());
  ctx->Set(Nan::New("bitmap_t_get_prop_h").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_bitmap_t_get_prop_h)->GetFunction());
  ctx->Set(Nan::New("bitmap_t_get_prop_line_length").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_bitmap_t_get_prop_line_length)->GetFunction());
  ctx->Set(Nan::New("bitmap_t_get_prop_flags").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_bitmap_t_get_prop_flags)->GetFunction());
  ctx->Set(Nan::New("bitmap_t_get_prop_format").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_bitmap_t_get_prop_format)->GetFunction());
  ctx->Set(Nan::New("bitmap_t_get_prop_name").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_bitmap_t_get_prop_name)->GetFunction());

 return RET_OK;
}

static void wrap_value_set_bool(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  bool_t value = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (value_t*)value_set_bool(v, value);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_bool(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  bool_t ret = (bool_t)0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (bool_t)value_bool(v);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_set_int8(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  int8_t value = (int8_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_int8(v, value);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_int8(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  int8_t ret = (int8_t)0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (int8_t)value_int8(v);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_set_uint8(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  uint8_t value = (uint8_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_uint8(v, value);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_uint8(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  int8_t ret = (int8_t)0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (int8_t)value_uint8(v);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_set_int16(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  int16_t value = (int16_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_int16(v, value);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_int16(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  int16_t ret = (int16_t)0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (int16_t)value_int16(v);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_set_uint16(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  uint16_t value = (uint16_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_uint16(v, value);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_uint16(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  uint16_t ret = (uint16_t)0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (uint16_t)value_uint16(v);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_set_int32(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_int32(v, value);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_int32(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  int32_t ret = (int32_t)0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (int32_t)value_int32(v);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_set_uint32(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_uint32(v, value);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_set_int64(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  int64_t value = (int64_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_int64(v, value);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_int64(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  int64_t ret = (int64_t)0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (int64_t)value_int64(v);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_set_uint64(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  uint64_t value = (uint64_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_uint64(v, value);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_uint64(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  uint64_t ret = (uint64_t)0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (uint64_t)value_uint64(v);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_set_float(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (value_t*)value_set_float(v, value);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_float32(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  float ret = (float)0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (float)value_float32(v);

  v8::Local<v8::Number> jret= Nan::New((double)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_set_double(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  double value = (double)jsvalue_get_number_value(ctx, argv[1]);
  ret = (value_t*)value_set_double(v, value);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_double(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  double ret = (double)0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (double)value_double(v);

  v8::Local<v8::Number> jret= Nan::New((double)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_dup_str(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  const char* value = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (value_t*)value_dup_str(v, value);
  jsvalue_free_str(ctx, value);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_str(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  const char* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (const char*)value_str(v);

  const char* str_temp = ret;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_is_null(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  bool_t ret = (bool_t)0;
  value_t* value = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (bool_t)value_is_null(value);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_set_int(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_int(v, value);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_set_object(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  object_t* value = (object_t*)jsvalue_get_pointer(ctx, argv[1], "object_t*");
  ret = (value_t*)value_set_object(v, value);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_object(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  object_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (object_t*)value_object(v);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_set_token(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_token(v, value);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_token(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  uint32_t ret = (uint32_t)0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (uint32_t)value_token(v);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  value_t* ret = NULL;
  ret = (value_t*)value_create();

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_reset(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (ret_t)value_reset(v);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_value_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  value_t* ret = NULL;
  value_t* value = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (value_t*)value_cast(value);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t value_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("value_set_bool").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_set_bool)->GetFunction());
  ctx->Set(Nan::New("value_bool").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_bool)->GetFunction());
  ctx->Set(Nan::New("value_set_int8").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_set_int8)->GetFunction());
  ctx->Set(Nan::New("value_int8").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_int8)->GetFunction());
  ctx->Set(Nan::New("value_set_uint8").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_set_uint8)->GetFunction());
  ctx->Set(Nan::New("value_uint8").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_uint8)->GetFunction());
  ctx->Set(Nan::New("value_set_int16").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_set_int16)->GetFunction());
  ctx->Set(Nan::New("value_int16").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_int16)->GetFunction());
  ctx->Set(Nan::New("value_set_uint16").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_set_uint16)->GetFunction());
  ctx->Set(Nan::New("value_uint16").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_uint16)->GetFunction());
  ctx->Set(Nan::New("value_set_int32").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_set_int32)->GetFunction());
  ctx->Set(Nan::New("value_int32").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_int32)->GetFunction());
  ctx->Set(Nan::New("value_set_uint32").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_set_uint32)->GetFunction());
  ctx->Set(Nan::New("value_set_int64").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_set_int64)->GetFunction());
  ctx->Set(Nan::New("value_int64").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_int64)->GetFunction());
  ctx->Set(Nan::New("value_set_uint64").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_set_uint64)->GetFunction());
  ctx->Set(Nan::New("value_uint64").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_uint64)->GetFunction());
  ctx->Set(Nan::New("value_set_float").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_set_float)->GetFunction());
  ctx->Set(Nan::New("value_float32").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_float32)->GetFunction());
  ctx->Set(Nan::New("value_set_double").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_set_double)->GetFunction());
  ctx->Set(Nan::New("value_double").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_double)->GetFunction());
  ctx->Set(Nan::New("value_dup_str").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_dup_str)->GetFunction());
  ctx->Set(Nan::New("value_str").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_str)->GetFunction());
  ctx->Set(Nan::New("value_is_null").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_is_null)->GetFunction());
  ctx->Set(Nan::New("value_set_int").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_set_int)->GetFunction());
  ctx->Set(Nan::New("value_set_object").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_set_object)->GetFunction());
  ctx->Set(Nan::New("value_object").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_object)->GetFunction());
  ctx->Set(Nan::New("value_set_token").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_set_token)->GetFunction());
  ctx->Set(Nan::New("value_token").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_token)->GetFunction());
  ctx->Set(Nan::New("value_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_create)->GetFunction());
  ctx->Set(Nan::New("value_reset").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_reset)->GetFunction());
  ctx->Set(Nan::New("value_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_value_cast)->GetFunction());

 return RET_OK;
}

static void wrap_object_ref(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  object_t* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (object_t*)object_ref(obj);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_get_type(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  const char* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (const char*)object_get_type(obj);

  const char* str_temp = ret;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_get_desc(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  const char* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (const char*)object_get_desc(obj);

  const char* str_temp = ret;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_get_size(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  uint32_t ret = (uint32_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (uint32_t)object_get_size(obj);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_is_collection(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  bool_t ret = (bool_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (bool_t)object_is_collection(obj);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_set_name(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)object_set_name(obj, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_compare(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  int ret = (int)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  object_t* other = (object_t*)jsvalue_get_pointer(ctx, argv[1], "object_t*");
  ret = (int)object_compare(obj, other);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_get_prop(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[2], "value_t*");
  ret = (ret_t)object_get_prop(obj, name, v);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_get_prop_str(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  const char* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (const char*)object_get_prop_str(obj, name);
  jsvalue_free_str(ctx, name);

  const char* str_temp = ret;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_get_prop_pointer(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  void* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (void*)object_get_prop_pointer(obj, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_get_prop_object(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  object_t* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (object_t*)object_get_prop_object(obj, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_get_prop_int(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  int32_t ret = (int32_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  int32_t defval = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (int32_t)object_get_prop_int(obj, name, defval);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_get_prop_bool(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  bool_t ret = (bool_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bool_t defval = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (bool_t)object_get_prop_bool(obj, name, defval);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_get_prop_float(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  float_t ret = (float_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  float_t defval = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (float_t)object_get_prop_float(obj, name, defval);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Number> jret= Nan::New((double)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_remove_prop(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)object_remove_prop(obj, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_set_prop(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  value_t* value = (value_t*)jsvalue_get_pointer(ctx, argv[2], "value_t*");
  ret = (ret_t)object_set_prop(obj, name, value);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_set_prop_str(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* value = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)object_set_prop_str(obj, name, value);
  jsvalue_free_str(ctx, name);
  jsvalue_free_str(ctx, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_set_prop_object(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  object_t* value = (object_t*)jsvalue_get_pointer(ctx, argv[2], "object_t*");
  ret = (ret_t)object_set_prop_object(obj, name, value);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_set_prop_int(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)object_set_prop_int(obj, name, value);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_set_prop_bool(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bool_t value = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (ret_t)object_set_prop_bool(obj, name, value);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_set_prop_float(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  float_t value = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)object_set_prop_float(obj, name, value);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_copy_prop(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  object_t* src = (object_t*)jsvalue_get_pointer(ctx, argv[1], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)object_copy_prop(obj, src, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_has_prop(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  bool_t ret = (bool_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (bool_t)object_has_prop(obj, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_eval(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* expr = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[2], "value_t*");
  ret = (ret_t)object_eval(obj, expr, v);
  jsvalue_free_str(ctx, expr);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_can_exec(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  bool_t ret = (bool_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* args = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (bool_t)object_can_exec(obj, name, args);
  jsvalue_free_str(ctx, name);
  jsvalue_free_str(ctx, args);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_exec(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* args = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)object_exec(obj, name, args);
  jsvalue_free_str(ctx, name);
  jsvalue_free_str(ctx, args);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_notify_changed(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (ret_t)object_notify_changed(obj);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_get_prop_str_by_path(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  const char* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (const char*)object_get_prop_str_by_path(obj, path);
  jsvalue_free_str(ctx, path);

  const char* str_temp = ret;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_get_prop_pointer_by_path(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  void* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (void*)object_get_prop_pointer_by_path(obj, path);
  jsvalue_free_str(ctx, path);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_get_prop_object_by_path(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  object_t* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (object_t*)object_get_prop_object_by_path(obj, path);
  jsvalue_free_str(ctx, path);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_get_prop_int_by_path(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  int32_t ret = (int32_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  int32_t defval = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (int32_t)object_get_prop_int_by_path(obj, path, defval);
  jsvalue_free_str(ctx, path);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_get_prop_bool_by_path(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  bool_t ret = (bool_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bool_t defval = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (bool_t)object_get_prop_bool_by_path(obj, path, defval);
  jsvalue_free_str(ctx, path);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_get_prop_float_by_path(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  float_t ret = (float_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  float_t defval = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (float_t)object_get_prop_float_by_path(obj, path, defval);
  jsvalue_free_str(ctx, path);

  v8::Local<v8::Number> jret= Nan::New((double)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_t_get_prop_ref_count(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->ref_count));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_object_t_get_prop_name(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");

  const char* str_temp = obj->name;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t object_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("object_ref").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_ref)->GetFunction());
  ctx->Set(Nan::New("object_get_type").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_get_type)->GetFunction());
  ctx->Set(Nan::New("object_get_desc").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_get_desc)->GetFunction());
  ctx->Set(Nan::New("object_get_size").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_get_size)->GetFunction());
  ctx->Set(Nan::New("object_is_collection").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_is_collection)->GetFunction());
  ctx->Set(Nan::New("object_set_name").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_set_name)->GetFunction());
  ctx->Set(Nan::New("object_compare").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_compare)->GetFunction());
  ctx->Set(Nan::New("object_get_prop").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_get_prop)->GetFunction());
  ctx->Set(Nan::New("object_get_prop_str").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_get_prop_str)->GetFunction());
  ctx->Set(Nan::New("object_get_prop_pointer").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_get_prop_pointer)->GetFunction());
  ctx->Set(Nan::New("object_get_prop_object").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_get_prop_object)->GetFunction());
  ctx->Set(Nan::New("object_get_prop_int").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_get_prop_int)->GetFunction());
  ctx->Set(Nan::New("object_get_prop_bool").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_get_prop_bool)->GetFunction());
  ctx->Set(Nan::New("object_get_prop_float").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_get_prop_float)->GetFunction());
  ctx->Set(Nan::New("object_remove_prop").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_remove_prop)->GetFunction());
  ctx->Set(Nan::New("object_set_prop").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_set_prop)->GetFunction());
  ctx->Set(Nan::New("object_set_prop_str").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_set_prop_str)->GetFunction());
  ctx->Set(Nan::New("object_set_prop_object").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_set_prop_object)->GetFunction());
  ctx->Set(Nan::New("object_set_prop_int").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_set_prop_int)->GetFunction());
  ctx->Set(Nan::New("object_set_prop_bool").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_set_prop_bool)->GetFunction());
  ctx->Set(Nan::New("object_set_prop_float").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_set_prop_float)->GetFunction());
  ctx->Set(Nan::New("object_copy_prop").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_copy_prop)->GetFunction());
  ctx->Set(Nan::New("object_has_prop").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_has_prop)->GetFunction());
  ctx->Set(Nan::New("object_eval").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_eval)->GetFunction());
  ctx->Set(Nan::New("object_can_exec").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_can_exec)->GetFunction());
  ctx->Set(Nan::New("object_exec").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_exec)->GetFunction());
  ctx->Set(Nan::New("object_notify_changed").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_notify_changed)->GetFunction());
  ctx->Set(Nan::New("object_get_prop_str_by_path").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_get_prop_str_by_path)->GetFunction());
  ctx->Set(Nan::New("object_get_prop_pointer_by_path").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_get_prop_pointer_by_path)->GetFunction());
  ctx->Set(Nan::New("object_get_prop_object_by_path").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_get_prop_object_by_path)->GetFunction());
  ctx->Set(Nan::New("object_get_prop_int_by_path").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_get_prop_int_by_path)->GetFunction());
  ctx->Set(Nan::New("object_get_prop_bool_by_path").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_get_prop_bool_by_path)->GetFunction());
  ctx->Set(Nan::New("object_get_prop_float_by_path").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_get_prop_float_by_path)->GetFunction());
  ctx->Set(Nan::New("object_t_get_prop_ref_count").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_t_get_prop_ref_count)->GetFunction());
  ctx->Set(Nan::New("object_t_get_prop_name").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_t_get_prop_name)->GetFunction());

 return RET_OK;
}

static void wrap_tk_init(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  ret_t ret = (ret_t)0;
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[0]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[1]);
  app_type_t app_type = (app_type_t)jsvalue_get_number_value(ctx, argv[2]);
  const char* app_name = (const char*)jsvalue_get_utf8_string(ctx, argv[3]);
  const char* app_root = (const char*)jsvalue_get_utf8_string(ctx, argv[4]);
  ret = (ret_t)tk_init(w, h, app_type, app_name, app_root);
  jsvalue_free_str(ctx, app_name);
  jsvalue_free_str(ctx, app_root);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_tk_run(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  ret_t ret = (ret_t)0;
  ret = (ret_t)tk_run();

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_tk_quit(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  ret_t ret = (ret_t)0;
  ret = (ret_t)tk_quit();

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_tk_get_pointer_x(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  int32_t ret = (int32_t)0;
  ret = (int32_t)tk_get_pointer_x();

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_tk_get_pointer_y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  int32_t ret = (int32_t)0;
  ret = (int32_t)tk_get_pointer_y();

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_tk_is_pointer_pressed(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  bool_t ret = (bool_t)0;
  ret = (bool_t)tk_is_pointer_pressed();

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t global_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("tk_init").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tk_init)->GetFunction());
  ctx->Set(Nan::New("tk_run").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tk_run)->GetFunction());
  ctx->Set(Nan::New("tk_quit").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tk_quit)->GetFunction());
  ctx->Set(Nan::New("tk_get_pointer_x").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tk_get_pointer_x)->GetFunction());
  ctx->Set(Nan::New("tk_get_pointer_y").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tk_get_pointer_y)->GetFunction());
  ctx->Set(Nan::New("tk_is_pointer_pressed").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tk_is_pointer_pressed)->GetFunction());

 return RET_OK;
}

static void get_DIALOG_QUIT_NONE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)DIALOG_QUIT_NONE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_DIALOG_QUIT_OK(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)DIALOG_QUIT_OK);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_DIALOG_QUIT_YES(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)DIALOG_QUIT_YES);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_DIALOG_QUIT_CANCEL(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)DIALOG_QUIT_CANCEL);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_DIALOG_QUIT_NO(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)DIALOG_QUIT_NO);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_DIALOG_QUIT_OTHER(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)DIALOG_QUIT_OTHER);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t dialog_quit_code_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("DIALOG_QUIT_NONE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_DIALOG_QUIT_NONE)->GetFunction());
  ctx->Set(Nan::New("DIALOG_QUIT_OK").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_DIALOG_QUIT_OK)->GetFunction());
  ctx->Set(Nan::New("DIALOG_QUIT_YES").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_DIALOG_QUIT_YES)->GetFunction());
  ctx->Set(Nan::New("DIALOG_QUIT_CANCEL").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_DIALOG_QUIT_CANCEL)->GetFunction());
  ctx->Set(Nan::New("DIALOG_QUIT_NO").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_DIALOG_QUIT_NO)->GetFunction());
  ctx->Set(Nan::New("DIALOG_QUIT_OTHER").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_DIALOG_QUIT_OTHER)->GetFunction());

 return RET_OK;
}

static void get_EVT_POINTER_DOWN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_POINTER_DOWN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_POINTER_DOWN_BEFORE_CHILDREN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_POINTER_DOWN_BEFORE_CHILDREN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_POINTER_MOVE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_POINTER_MOVE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_POINTER_MOVE_BEFORE_CHILDREN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_POINTER_MOVE_BEFORE_CHILDREN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_POINTER_UP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_POINTER_UP);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_POINTER_UP_BEFORE_CHILDREN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_POINTER_UP_BEFORE_CHILDREN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_WHEEL(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_WHEEL);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_WHEEL_BEFORE_CHILDREN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_WHEEL_BEFORE_CHILDREN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_POINTER_DOWN_ABORT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_POINTER_DOWN_ABORT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_CONTEXT_MENU(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_CONTEXT_MENU);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_POINTER_ENTER(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_POINTER_ENTER);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_POINTER_LEAVE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_POINTER_LEAVE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_LONG_PRESS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_LONG_PRESS);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_CLICK(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_CLICK);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_FOCUS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_FOCUS);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_BLUR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_BLUR);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_KEY_DOWN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_KEY_DOWN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_KEY_DOWN_BEFORE_CHILDREN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_KEY_DOWN_BEFORE_CHILDREN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_KEY_REPEAT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_KEY_REPEAT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_KEY_UP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_KEY_UP);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_KEY_UP_BEFORE_CHILDREN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_KEY_UP_BEFORE_CHILDREN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_WILL_MOVE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_WILL_MOVE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_MOVE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_MOVE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_WILL_RESIZE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_WILL_RESIZE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_RESIZE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_RESIZE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_WILL_MOVE_RESIZE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_WILL_MOVE_RESIZE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_MOVE_RESIZE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_MOVE_RESIZE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_VALUE_WILL_CHANGE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_VALUE_WILL_CHANGE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_VALUE_CHANGED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_VALUE_CHANGED);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_VALUE_CHANGING(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_VALUE_CHANGING);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_PAINT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_PAINT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_BEFORE_PAINT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_BEFORE_PAINT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_AFTER_PAINT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_AFTER_PAINT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_PAINT_DONE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_PAINT_DONE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_LOCALE_CHANGED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_LOCALE_CHANGED);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_ANIM_START(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_ANIM_START);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_ANIM_STOP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_ANIM_STOP);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_ANIM_PAUSE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_ANIM_PAUSE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_ANIM_ONCE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_ANIM_ONCE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_ANIM_END(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_ANIM_END);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_WINDOW_LOAD(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_WINDOW_LOAD);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_WIDGET_LOAD(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_WIDGET_LOAD);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_WINDOW_WILL_OPEN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_WINDOW_WILL_OPEN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_WINDOW_OPEN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_WINDOW_OPEN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_WINDOW_TO_BACKGROUND(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_WINDOW_TO_BACKGROUND);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_WINDOW_TO_FOREGROUND(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_WINDOW_TO_FOREGROUND);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_WINDOW_CLOSE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_WINDOW_CLOSE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_REQUEST_CLOSE_WINDOW(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_REQUEST_CLOSE_WINDOW);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_TOP_WINDOW_CHANGED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_TOP_WINDOW_CHANGED);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_IM_COMMIT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_IM_COMMIT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_IM_SHOW_CANDIDATES(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_IM_SHOW_CANDIDATES);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_IM_ACTION(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_IM_ACTION);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_IM_ACTION_INFO(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_IM_ACTION_INFO);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_DRAG_START(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_DRAG_START);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_DRAG(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_DRAG);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_DRAG_END(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_DRAG_END);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_SCREEN_SAVER(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_SCREEN_SAVER);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_LOW_MEMORY(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_LOW_MEMORY);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_OUT_OF_MEMORY(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_OUT_OF_MEMORY);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_ORIENTATION_WILL_CHANGED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_ORIENTATION_WILL_CHANGED);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_ORIENTATION_CHANGED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_ORIENTATION_CHANGED);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_WIDGET_CREATED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_WIDGET_CREATED);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_REQUEST_QUIT_APP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_REQUEST_QUIT_APP);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_THEME_CHANGED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_THEME_CHANGED);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_WIDGET_ADD_CHILD(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_WIDGET_ADD_CHILD);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_WIDGET_REMOVE_CHILD(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_WIDGET_REMOVE_CHILD);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_REQ_START(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_REQ_START);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_USER_START(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_USER_START);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_NONE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_NONE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_PROP_WILL_CHANGE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_PROP_WILL_CHANGE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_PROP_CHANGED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_PROP_CHANGED);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_ITEMS_WILL_CHANGE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_ITEMS_WILL_CHANGE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_ITEMS_CHANGED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_ITEMS_CHANGED);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_PROPS_CHANGED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_PROPS_CHANGED);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_PROGRESS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_PROGRESS);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EVT_DESTROY(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_DESTROY);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t event_type_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("EVT_POINTER_DOWN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_POINTER_DOWN)->GetFunction());
  ctx->Set(Nan::New("EVT_POINTER_DOWN_BEFORE_CHILDREN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_POINTER_DOWN_BEFORE_CHILDREN)->GetFunction());
  ctx->Set(Nan::New("EVT_POINTER_MOVE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_POINTER_MOVE)->GetFunction());
  ctx->Set(Nan::New("EVT_POINTER_MOVE_BEFORE_CHILDREN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_POINTER_MOVE_BEFORE_CHILDREN)->GetFunction());
  ctx->Set(Nan::New("EVT_POINTER_UP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_POINTER_UP)->GetFunction());
  ctx->Set(Nan::New("EVT_POINTER_UP_BEFORE_CHILDREN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_POINTER_UP_BEFORE_CHILDREN)->GetFunction());
  ctx->Set(Nan::New("EVT_WHEEL").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_WHEEL)->GetFunction());
  ctx->Set(Nan::New("EVT_WHEEL_BEFORE_CHILDREN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_WHEEL_BEFORE_CHILDREN)->GetFunction());
  ctx->Set(Nan::New("EVT_POINTER_DOWN_ABORT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_POINTER_DOWN_ABORT)->GetFunction());
  ctx->Set(Nan::New("EVT_CONTEXT_MENU").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_CONTEXT_MENU)->GetFunction());
  ctx->Set(Nan::New("EVT_POINTER_ENTER").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_POINTER_ENTER)->GetFunction());
  ctx->Set(Nan::New("EVT_POINTER_LEAVE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_POINTER_LEAVE)->GetFunction());
  ctx->Set(Nan::New("EVT_LONG_PRESS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_LONG_PRESS)->GetFunction());
  ctx->Set(Nan::New("EVT_CLICK").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_CLICK)->GetFunction());
  ctx->Set(Nan::New("EVT_FOCUS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_FOCUS)->GetFunction());
  ctx->Set(Nan::New("EVT_BLUR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_BLUR)->GetFunction());
  ctx->Set(Nan::New("EVT_KEY_DOWN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_KEY_DOWN)->GetFunction());
  ctx->Set(Nan::New("EVT_KEY_DOWN_BEFORE_CHILDREN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_KEY_DOWN_BEFORE_CHILDREN)->GetFunction());
  ctx->Set(Nan::New("EVT_KEY_REPEAT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_KEY_REPEAT)->GetFunction());
  ctx->Set(Nan::New("EVT_KEY_UP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_KEY_UP)->GetFunction());
  ctx->Set(Nan::New("EVT_KEY_UP_BEFORE_CHILDREN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_KEY_UP_BEFORE_CHILDREN)->GetFunction());
  ctx->Set(Nan::New("EVT_WILL_MOVE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_WILL_MOVE)->GetFunction());
  ctx->Set(Nan::New("EVT_MOVE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_MOVE)->GetFunction());
  ctx->Set(Nan::New("EVT_WILL_RESIZE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_WILL_RESIZE)->GetFunction());
  ctx->Set(Nan::New("EVT_RESIZE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_RESIZE)->GetFunction());
  ctx->Set(Nan::New("EVT_WILL_MOVE_RESIZE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_WILL_MOVE_RESIZE)->GetFunction());
  ctx->Set(Nan::New("EVT_MOVE_RESIZE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_MOVE_RESIZE)->GetFunction());
  ctx->Set(Nan::New("EVT_VALUE_WILL_CHANGE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_VALUE_WILL_CHANGE)->GetFunction());
  ctx->Set(Nan::New("EVT_VALUE_CHANGED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_VALUE_CHANGED)->GetFunction());
  ctx->Set(Nan::New("EVT_VALUE_CHANGING").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_VALUE_CHANGING)->GetFunction());
  ctx->Set(Nan::New("EVT_PAINT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_PAINT)->GetFunction());
  ctx->Set(Nan::New("EVT_BEFORE_PAINT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_BEFORE_PAINT)->GetFunction());
  ctx->Set(Nan::New("EVT_AFTER_PAINT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_AFTER_PAINT)->GetFunction());
  ctx->Set(Nan::New("EVT_PAINT_DONE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_PAINT_DONE)->GetFunction());
  ctx->Set(Nan::New("EVT_LOCALE_CHANGED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_LOCALE_CHANGED)->GetFunction());
  ctx->Set(Nan::New("EVT_ANIM_START").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_ANIM_START)->GetFunction());
  ctx->Set(Nan::New("EVT_ANIM_STOP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_ANIM_STOP)->GetFunction());
  ctx->Set(Nan::New("EVT_ANIM_PAUSE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_ANIM_PAUSE)->GetFunction());
  ctx->Set(Nan::New("EVT_ANIM_ONCE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_ANIM_ONCE)->GetFunction());
  ctx->Set(Nan::New("EVT_ANIM_END").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_ANIM_END)->GetFunction());
  ctx->Set(Nan::New("EVT_WINDOW_LOAD").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_WINDOW_LOAD)->GetFunction());
  ctx->Set(Nan::New("EVT_WIDGET_LOAD").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_WIDGET_LOAD)->GetFunction());
  ctx->Set(Nan::New("EVT_WINDOW_WILL_OPEN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_WINDOW_WILL_OPEN)->GetFunction());
  ctx->Set(Nan::New("EVT_WINDOW_OPEN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_WINDOW_OPEN)->GetFunction());
  ctx->Set(Nan::New("EVT_WINDOW_TO_BACKGROUND").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_WINDOW_TO_BACKGROUND)->GetFunction());
  ctx->Set(Nan::New("EVT_WINDOW_TO_FOREGROUND").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_WINDOW_TO_FOREGROUND)->GetFunction());
  ctx->Set(Nan::New("EVT_WINDOW_CLOSE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_WINDOW_CLOSE)->GetFunction());
  ctx->Set(Nan::New("EVT_REQUEST_CLOSE_WINDOW").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_REQUEST_CLOSE_WINDOW)->GetFunction());
  ctx->Set(Nan::New("EVT_TOP_WINDOW_CHANGED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_TOP_WINDOW_CHANGED)->GetFunction());
  ctx->Set(Nan::New("EVT_IM_COMMIT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_IM_COMMIT)->GetFunction());
  ctx->Set(Nan::New("EVT_IM_SHOW_CANDIDATES").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_IM_SHOW_CANDIDATES)->GetFunction());
  ctx->Set(Nan::New("EVT_IM_ACTION").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_IM_ACTION)->GetFunction());
  ctx->Set(Nan::New("EVT_IM_ACTION_INFO").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_IM_ACTION_INFO)->GetFunction());
  ctx->Set(Nan::New("EVT_DRAG_START").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_DRAG_START)->GetFunction());
  ctx->Set(Nan::New("EVT_DRAG").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_DRAG)->GetFunction());
  ctx->Set(Nan::New("EVT_DRAG_END").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_DRAG_END)->GetFunction());
  ctx->Set(Nan::New("EVT_SCREEN_SAVER").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_SCREEN_SAVER)->GetFunction());
  ctx->Set(Nan::New("EVT_LOW_MEMORY").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_LOW_MEMORY)->GetFunction());
  ctx->Set(Nan::New("EVT_OUT_OF_MEMORY").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_OUT_OF_MEMORY)->GetFunction());
  ctx->Set(Nan::New("EVT_ORIENTATION_WILL_CHANGED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_ORIENTATION_WILL_CHANGED)->GetFunction());
  ctx->Set(Nan::New("EVT_ORIENTATION_CHANGED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_ORIENTATION_CHANGED)->GetFunction());
  ctx->Set(Nan::New("EVT_WIDGET_CREATED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_WIDGET_CREATED)->GetFunction());
  ctx->Set(Nan::New("EVT_REQUEST_QUIT_APP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_REQUEST_QUIT_APP)->GetFunction());
  ctx->Set(Nan::New("EVT_THEME_CHANGED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_THEME_CHANGED)->GetFunction());
  ctx->Set(Nan::New("EVT_WIDGET_ADD_CHILD").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_WIDGET_ADD_CHILD)->GetFunction());
  ctx->Set(Nan::New("EVT_WIDGET_REMOVE_CHILD").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_WIDGET_REMOVE_CHILD)->GetFunction());
  ctx->Set(Nan::New("EVT_REQ_START").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_REQ_START)->GetFunction());
  ctx->Set(Nan::New("EVT_USER_START").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_USER_START)->GetFunction());
  ctx->Set(Nan::New("EVT_NONE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_NONE)->GetFunction());
  ctx->Set(Nan::New("EVT_PROP_WILL_CHANGE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_PROP_WILL_CHANGE)->GetFunction());
  ctx->Set(Nan::New("EVT_PROP_CHANGED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_PROP_CHANGED)->GetFunction());
  ctx->Set(Nan::New("EVT_ITEMS_WILL_CHANGE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_ITEMS_WILL_CHANGE)->GetFunction());
  ctx->Set(Nan::New("EVT_ITEMS_CHANGED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_ITEMS_CHANGED)->GetFunction());
  ctx->Set(Nan::New("EVT_PROPS_CHANGED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_PROPS_CHANGED)->GetFunction());
  ctx->Set(Nan::New("EVT_PROGRESS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_PROGRESS)->GetFunction());
  ctx->Set(Nan::New("EVT_DESTROY").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EVT_DESTROY)->GetFunction());

 return RET_OK;
}

static void wrap_font_manager_unload_font(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  font_manager_t* fm = (font_manager_t*)jsvalue_get_pointer(ctx, argv[0], "font_manager_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  font_size_t size = (font_size_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)font_manager_unload_font(fm, name, size);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_font_manager_unload_all(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  font_manager_t* fm = (font_manager_t*)jsvalue_get_pointer(ctx, argv[0], "font_manager_t*");
  ret = (ret_t)font_manager_unload_all(fm);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t font_manager_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("font_manager_unload_font").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_font_manager_unload_font)->GetFunction());
  ctx->Set(Nan::New("font_manager_unload_all").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_font_manager_unload_all)->GetFunction());

 return RET_OK;
}

static void get_GLYPH_FMT_ALPHA(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)GLYPH_FMT_ALPHA);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_GLYPH_FMT_MONO(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)GLYPH_FMT_MONO);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_GLYPH_FMT_RGBA(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)GLYPH_FMT_RGBA);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t glyph_format_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("GLYPH_FMT_ALPHA").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_GLYPH_FMT_ALPHA)->GetFunction());
  ctx->Set(Nan::New("GLYPH_FMT_MONO").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_GLYPH_FMT_MONO)->GetFunction());
  ctx->Set(Nan::New("GLYPH_FMT_RGBA").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_GLYPH_FMT_RGBA)->GetFunction());

 return RET_OK;
}

static void wrap_idle_remove(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  uint32_t idle_id = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
  ret = (ret_t)idle_remove(idle_id);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t idle_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("idle_add").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_idle_add)->GetFunction());
  ctx->Set(Nan::New("idle_remove").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_idle_remove)->GetFunction());

 return RET_OK;
}

static void wrap_image_manager(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  image_manager_t* ret = NULL;
  ret = (image_manager_t*)image_manager();

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_manager_get_bitmap(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  image_manager_t* imm = (image_manager_t*)jsvalue_get_pointer(ctx, argv[0], "image_manager_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bitmap_t* image = (bitmap_t*)jsvalue_get_pointer(ctx, argv[2], "bitmap_t*");
  ret = (ret_t)image_manager_get_bitmap(imm, name, image);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t image_manager_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("image_manager").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_manager)->GetFunction());
  ctx->Set(Nan::New("image_manager_get_bitmap").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_manager_get_bitmap)->GetFunction());

 return RET_OK;
}

static void get_INPUT_TEXT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)INPUT_TEXT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_INPUT_INT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)INPUT_INT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_INPUT_UINT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)INPUT_UINT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_INPUT_HEX(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)INPUT_HEX);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_INPUT_FLOAT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)INPUT_FLOAT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_INPUT_UFLOAT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)INPUT_UFLOAT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_INPUT_EMAIL(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)INPUT_EMAIL);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_INPUT_PASSWORD(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)INPUT_PASSWORD);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_INPUT_PHONE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)INPUT_PHONE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_INPUT_CUSTOM(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)INPUT_CUSTOM);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_INPUT_CUSTOM_PASSWORD(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)INPUT_CUSTOM_PASSWORD);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t input_type_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("INPUT_TEXT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_INPUT_TEXT)->GetFunction());
  ctx->Set(Nan::New("INPUT_INT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_INPUT_INT)->GetFunction());
  ctx->Set(Nan::New("INPUT_UINT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_INPUT_UINT)->GetFunction());
  ctx->Set(Nan::New("INPUT_HEX").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_INPUT_HEX)->GetFunction());
  ctx->Set(Nan::New("INPUT_FLOAT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_INPUT_FLOAT)->GetFunction());
  ctx->Set(Nan::New("INPUT_UFLOAT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_INPUT_UFLOAT)->GetFunction());
  ctx->Set(Nan::New("INPUT_EMAIL").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_INPUT_EMAIL)->GetFunction());
  ctx->Set(Nan::New("INPUT_PASSWORD").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_INPUT_PASSWORD)->GetFunction());
  ctx->Set(Nan::New("INPUT_PHONE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_INPUT_PHONE)->GetFunction());
  ctx->Set(Nan::New("INPUT_CUSTOM").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_INPUT_CUSTOM)->GetFunction());
  ctx->Set(Nan::New("INPUT_CUSTOM_PASSWORD").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_INPUT_CUSTOM_PASSWORD)->GetFunction());

 return RET_OK;
}

static void get_VALUE_TYPE_INVALID(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)VALUE_TYPE_INVALID);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_VALUE_TYPE_BOOL(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)VALUE_TYPE_BOOL);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_VALUE_TYPE_INT8(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)VALUE_TYPE_INT8);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_VALUE_TYPE_UINT8(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)VALUE_TYPE_UINT8);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_VALUE_TYPE_INT16(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)VALUE_TYPE_INT16);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_VALUE_TYPE_UINT16(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)VALUE_TYPE_UINT16);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_VALUE_TYPE_INT32(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)VALUE_TYPE_INT32);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_VALUE_TYPE_UINT32(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)VALUE_TYPE_UINT32);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_VALUE_TYPE_INT64(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)VALUE_TYPE_INT64);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_VALUE_TYPE_UINT64(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)VALUE_TYPE_UINT64);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_VALUE_TYPE_POINTER(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)VALUE_TYPE_POINTER);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_VALUE_TYPE_FLOAT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)VALUE_TYPE_FLOAT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_VALUE_TYPE_FLOAT32(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)VALUE_TYPE_FLOAT32);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_VALUE_TYPE_DOUBLE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)VALUE_TYPE_DOUBLE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_VALUE_TYPE_STRING(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)VALUE_TYPE_STRING);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_VALUE_TYPE_WSTRING(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)VALUE_TYPE_WSTRING);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_VALUE_TYPE_OBJECT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)VALUE_TYPE_OBJECT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_VALUE_TYPE_SIZED_STRING(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)VALUE_TYPE_SIZED_STRING);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_VALUE_TYPE_BINARY(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)VALUE_TYPE_BINARY);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_VALUE_TYPE_UBJSON(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)VALUE_TYPE_UBJSON);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_VALUE_TYPE_TOKEN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)VALUE_TYPE_TOKEN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t value_type_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("VALUE_TYPE_INVALID").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_VALUE_TYPE_INVALID)->GetFunction());
  ctx->Set(Nan::New("VALUE_TYPE_BOOL").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_VALUE_TYPE_BOOL)->GetFunction());
  ctx->Set(Nan::New("VALUE_TYPE_INT8").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_VALUE_TYPE_INT8)->GetFunction());
  ctx->Set(Nan::New("VALUE_TYPE_UINT8").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_VALUE_TYPE_UINT8)->GetFunction());
  ctx->Set(Nan::New("VALUE_TYPE_INT16").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_VALUE_TYPE_INT16)->GetFunction());
  ctx->Set(Nan::New("VALUE_TYPE_UINT16").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_VALUE_TYPE_UINT16)->GetFunction());
  ctx->Set(Nan::New("VALUE_TYPE_INT32").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_VALUE_TYPE_INT32)->GetFunction());
  ctx->Set(Nan::New("VALUE_TYPE_UINT32").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_VALUE_TYPE_UINT32)->GetFunction());
  ctx->Set(Nan::New("VALUE_TYPE_INT64").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_VALUE_TYPE_INT64)->GetFunction());
  ctx->Set(Nan::New("VALUE_TYPE_UINT64").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_VALUE_TYPE_UINT64)->GetFunction());
  ctx->Set(Nan::New("VALUE_TYPE_POINTER").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_VALUE_TYPE_POINTER)->GetFunction());
  ctx->Set(Nan::New("VALUE_TYPE_FLOAT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_VALUE_TYPE_FLOAT)->GetFunction());
  ctx->Set(Nan::New("VALUE_TYPE_FLOAT32").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_VALUE_TYPE_FLOAT32)->GetFunction());
  ctx->Set(Nan::New("VALUE_TYPE_DOUBLE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_VALUE_TYPE_DOUBLE)->GetFunction());
  ctx->Set(Nan::New("VALUE_TYPE_STRING").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_VALUE_TYPE_STRING)->GetFunction());
  ctx->Set(Nan::New("VALUE_TYPE_WSTRING").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_VALUE_TYPE_WSTRING)->GetFunction());
  ctx->Set(Nan::New("VALUE_TYPE_OBJECT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_VALUE_TYPE_OBJECT)->GetFunction());
  ctx->Set(Nan::New("VALUE_TYPE_SIZED_STRING").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_VALUE_TYPE_SIZED_STRING)->GetFunction());
  ctx->Set(Nan::New("VALUE_TYPE_BINARY").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_VALUE_TYPE_BINARY)->GetFunction());
  ctx->Set(Nan::New("VALUE_TYPE_UBJSON").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_VALUE_TYPE_UBJSON)->GetFunction());
  ctx->Set(Nan::New("VALUE_TYPE_TOKEN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_VALUE_TYPE_TOKEN)->GetFunction());

 return RET_OK;
}

static void wrap_input_method_commit_text(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  input_method_t* im = (input_method_t*)jsvalue_get_pointer(ctx, argv[0], "input_method_t*");
  char* text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)input_method_commit_text(im, text);
  jsvalue_free_str(ctx, text);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_input_method_dispatch_key(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  input_method_t* im = (input_method_t*)jsvalue_get_pointer(ctx, argv[0], "input_method_t*");
  uint32_t key = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)input_method_dispatch_key(im, key);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_input_method(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  input_method_t* ret = NULL;
  ret = (input_method_t*)input_method();

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t input_method_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("input_method_commit_text").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_input_method_commit_text)->GetFunction());
  ctx->Set(Nan::New("input_method_dispatch_key").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_input_method_dispatch_key)->GetFunction());
  ctx->Set(Nan::New("input_method").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_input_method)->GetFunction());

 return RET_OK;
}

static void get_TK_KEY_RETURN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_RETURN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_ESCAPE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_ESCAPE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_BACKSPACE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_BACKSPACE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_TAB(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_TAB);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_SPACE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_SPACE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_EXCLAIM(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_EXCLAIM);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_QUOTEDBL(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_QUOTEDBL);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_HASH(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_HASH);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_PERCENT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_PERCENT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_DOLLAR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_DOLLAR);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_AMPERSAND(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_AMPERSAND);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_QUOTE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_QUOTE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_LEFTPAREN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_LEFTPAREN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_RIGHTPAREN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_RIGHTPAREN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_ASTERISK(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_ASTERISK);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_PLUS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_PLUS);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_COMMA(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_COMMA);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_MINUS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_MINUS);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_PERIOD(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_PERIOD);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_SLASH(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_SLASH);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_0(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_0);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_1(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_1);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_2(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_2);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_3(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_3);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_4(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_4);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_5(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_5);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_6(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_6);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_7(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_7);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_8(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_8);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_9(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_9);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_COLON(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_COLON);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_SEMICOLON(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_SEMICOLON);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_LESS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_LESS);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_EQUAL(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_EQUAL);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_GREATER(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_GREATER);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_QUESTION(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_QUESTION);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_AT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_AT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_LEFTBRACKET(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_LEFTBRACKET);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_BACKSLASH(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_BACKSLASH);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_RIGHTBRACKET(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_RIGHTBRACKET);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_CARET(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_CARET);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_UNDERSCORE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_UNDERSCORE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_BACKQUOTE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_BACKQUOTE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_a(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_a);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_b(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_b);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_c(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_c);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_d(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_d);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_e(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_e);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_f(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_f);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_g(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_g);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_h(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_h);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_i(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_i);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_j(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_j);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_k(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_k);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_l(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_l);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_m(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_m);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_n(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_n);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_o(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_o);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_p(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_p);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_q(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_q);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_r(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_r);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_s(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_s);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_t(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_t);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_u(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_u);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_v(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_v);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_w(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_w);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_x(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_x);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_y);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_z(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_z);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_A(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_A);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_B(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_B);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_C(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_C);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_D(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_D);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_E(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_E);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_F(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_F);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_G(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_G);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_H(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_H);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_I(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_I);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_J(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_J);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_K(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_K);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_L(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_L);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_M(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_M);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_N(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_N);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_O(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_O);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_P(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_P);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_Q(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_Q);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_R(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_R);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_S(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_S);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_T(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_T);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_U(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_U);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_V(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_V);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_W(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_W);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_X(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_X);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_Y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_Y);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_Z(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_Z);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_DOT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_DOT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_DELETE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_DELETE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_LEFTBRACE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_LEFTBRACE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_RIGHTBRACE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_RIGHTBRACE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_LSHIFT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_LSHIFT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_RSHIFT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_RSHIFT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_LCTRL(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_LCTRL);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_RCTRL(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_RCTRL);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_LALT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_LALT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_RALT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_RALT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_CAPSLOCK(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_CAPSLOCK);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_HOME(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_HOME);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_END(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_END);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_INSERT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_INSERT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_UP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_UP);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_DOWN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_DOWN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_LEFT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_LEFT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_RIGHT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_RIGHT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_PAGEUP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_PAGEUP);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_PAGEDOWN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_PAGEDOWN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_F1(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_F1);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_F2(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_F2);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_F3(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_F3);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_F4(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_F4);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_F5(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_F5);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_F6(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_F6);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_F7(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_F7);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_F8(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_F8);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_F9(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_F9);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_F10(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_F10);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_F11(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_F11);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_F12(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_F12);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_MENU(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_MENU);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_COMMAND(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_COMMAND);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_BACK(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_BACK);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_TK_KEY_CANCEL(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)TK_KEY_CANCEL);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t key_code_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("TK_KEY_RETURN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_RETURN)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_ESCAPE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_ESCAPE)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_BACKSPACE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_BACKSPACE)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_TAB").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_TAB)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_SPACE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_SPACE)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_EXCLAIM").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_EXCLAIM)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_QUOTEDBL").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_QUOTEDBL)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_HASH").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_HASH)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_PERCENT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_PERCENT)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_DOLLAR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_DOLLAR)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_AMPERSAND").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_AMPERSAND)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_QUOTE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_QUOTE)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_LEFTPAREN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_LEFTPAREN)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_RIGHTPAREN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_RIGHTPAREN)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_ASTERISK").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_ASTERISK)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_PLUS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_PLUS)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_COMMA").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_COMMA)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_MINUS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_MINUS)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_PERIOD").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_PERIOD)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_SLASH").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_SLASH)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_0").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_0)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_1").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_1)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_2").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_2)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_3").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_3)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_4").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_4)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_5").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_5)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_6").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_6)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_7").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_7)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_8").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_8)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_9").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_9)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_COLON").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_COLON)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_SEMICOLON").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_SEMICOLON)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_LESS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_LESS)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_EQUAL").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_EQUAL)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_GREATER").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_GREATER)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_QUESTION").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_QUESTION)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_AT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_AT)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_LEFTBRACKET").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_LEFTBRACKET)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_BACKSLASH").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_BACKSLASH)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_RIGHTBRACKET").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_RIGHTBRACKET)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_CARET").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_CARET)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_UNDERSCORE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_UNDERSCORE)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_BACKQUOTE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_BACKQUOTE)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_a").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_a)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_b").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_b)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_c").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_c)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_d").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_d)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_e").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_e)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_f").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_f)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_g").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_g)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_h").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_h)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_i").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_i)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_j").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_j)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_k").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_k)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_l").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_l)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_m").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_m)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_n").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_n)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_o").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_o)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_p").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_p)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_q").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_q)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_r").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_r)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_s").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_s)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_t").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_t)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_u").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_u)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_v").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_v)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_w").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_w)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_x").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_x)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_y").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_y)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_z").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_z)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_A").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_A)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_B").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_B)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_C").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_C)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_D").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_D)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_E").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_E)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_F").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_F)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_G").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_G)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_H").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_H)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_I").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_I)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_J").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_J)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_K").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_K)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_L").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_L)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_M").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_M)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_N").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_N)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_O").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_O)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_P").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_P)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_Q").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_Q)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_R").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_R)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_S").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_S)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_T").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_T)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_U").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_U)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_V").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_V)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_W").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_W)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_X").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_X)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_Y").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_Y)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_Z").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_Z)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_DOT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_DOT)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_DELETE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_DELETE)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_LEFTBRACE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_LEFTBRACE)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_RIGHTBRACE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_RIGHTBRACE)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_LSHIFT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_LSHIFT)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_RSHIFT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_RSHIFT)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_LCTRL").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_LCTRL)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_RCTRL").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_RCTRL)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_LALT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_LALT)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_RALT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_RALT)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_CAPSLOCK").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_CAPSLOCK)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_HOME").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_HOME)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_END").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_END)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_INSERT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_INSERT)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_UP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_UP)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_DOWN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_DOWN)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_LEFT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_LEFT)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_RIGHT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_RIGHT)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_PAGEUP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_PAGEUP)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_PAGEDOWN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_PAGEDOWN)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_F1").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_F1)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_F2").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_F2)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_F3").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_F3)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_F4").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_F4)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_F5").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_F5)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_F6").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_F6)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_F7").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_F7)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_F8").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_F8)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_F9").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_F9)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_F10").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_F10)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_F11").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_F11)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_F12").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_F12)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_MENU").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_MENU)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_COMMAND").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_COMMAND)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_BACK").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_BACK)->GetFunction());
  ctx->Set(Nan::New("TK_KEY_CANCEL").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_TK_KEY_CANCEL)->GetFunction());

 return RET_OK;
}

static void wrap_locale_info(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  locale_info_t* ret = NULL;
  ret = (locale_info_t*)locale_info();

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_locale_info_tr(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  const char* ret = NULL;
  locale_info_t* locale_info = (locale_info_t*)jsvalue_get_pointer(ctx, argv[0], "locale_info_t*");
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (const char*)locale_info_tr(locale_info, text);
  jsvalue_free_str(ctx, text);

  const char* str_temp = ret;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_locale_info_change(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  locale_info_t* locale_info = (locale_info_t*)jsvalue_get_pointer(ctx, argv[0], "locale_info_t*");
  char* language = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  char* country = (char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)locale_info_change(locale_info, language, country);
  jsvalue_free_str(ctx, language);
  jsvalue_free_str(ctx, country);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_locale_info_off(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  locale_info_t* locale_info = (locale_info_t*)jsvalue_get_pointer(ctx, argv[0], "locale_info_t*");
  uint32_t id = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)locale_info_off(locale_info, id);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t locale_info_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("locale_info").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_locale_info)->GetFunction());
  ctx->Set(Nan::New("locale_info_tr").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_locale_info_tr)->GetFunction());
  ctx->Set(Nan::New("locale_info_change").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_locale_info_change)->GetFunction());
  ctx->Set(Nan::New("locale_info_off").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_locale_info_off)->GetFunction());

 return RET_OK;
}

static void get_STYLE_ID_BG_COLOR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_BG_COLOR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_FG_COLOR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_FG_COLOR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_MASK_COLOR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_MASK_COLOR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_FONT_NAME(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_FONT_NAME).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_FONT_SIZE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_FONT_SIZE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_FONT_STYLE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_FONT_STYLE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_TEXT_COLOR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_TEXT_COLOR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_TIPS_TEXT_COLOR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_TIPS_TEXT_COLOR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_TEXT_ALIGN_H(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_TEXT_ALIGN_H).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_TEXT_ALIGN_V(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_TEXT_ALIGN_V).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_BORDER_COLOR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_BORDER_COLOR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_BORDER_WIDTH(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_BORDER_WIDTH).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_BORDER(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_BORDER).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_BG_IMAGE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_BG_IMAGE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_BG_IMAGE_DRAW_TYPE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_BG_IMAGE_DRAW_TYPE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_ICON(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_ICON).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_FG_IMAGE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_FG_IMAGE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_FG_IMAGE_DRAW_TYPE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_FG_IMAGE_DRAW_TYPE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_SPACER(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_SPACER).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_MARGIN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_MARGIN).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_MARGIN_LEFT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_MARGIN_LEFT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_MARGIN_RIGHT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_MARGIN_RIGHT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_MARGIN_TOP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_MARGIN_TOP).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_MARGIN_BOTTOM(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_MARGIN_BOTTOM).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_ICON_AT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_ICON_AT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_ACTIVE_ICON(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_ACTIVE_ICON).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_X_OFFSET(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_X_OFFSET).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_Y_OFFSET(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_Y_OFFSET).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_SELECTED_BG_COLOR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_SELECTED_BG_COLOR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_SELECTED_FG_COLOR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_SELECTED_FG_COLOR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_SELECTED_TEXT_COLOR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_SELECTED_TEXT_COLOR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_ROUND_RADIUS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_ROUND_RADIUS).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_CHILDREN_LAYOUT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_CHILDREN_LAYOUT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_STYLE_ID_SELF_LAYOUT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)STYLE_ID_SELF_LAYOUT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t style_id_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("STYLE_ID_BG_COLOR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_BG_COLOR)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_FG_COLOR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_FG_COLOR)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_MASK_COLOR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_MASK_COLOR)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_FONT_NAME").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_FONT_NAME)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_FONT_SIZE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_FONT_SIZE)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_FONT_STYLE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_FONT_STYLE)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_TEXT_COLOR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_TEXT_COLOR)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_TIPS_TEXT_COLOR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_TIPS_TEXT_COLOR)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_TEXT_ALIGN_H").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_TEXT_ALIGN_H)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_TEXT_ALIGN_V").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_TEXT_ALIGN_V)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_BORDER_COLOR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_BORDER_COLOR)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_BORDER_WIDTH").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_BORDER_WIDTH)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_BORDER").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_BORDER)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_BG_IMAGE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_BG_IMAGE)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_BG_IMAGE_DRAW_TYPE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_BG_IMAGE_DRAW_TYPE)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_ICON").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_ICON)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_FG_IMAGE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_FG_IMAGE)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_FG_IMAGE_DRAW_TYPE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_FG_IMAGE_DRAW_TYPE)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_SPACER").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_SPACER)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_MARGIN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_MARGIN)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_MARGIN_LEFT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_MARGIN_LEFT)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_MARGIN_RIGHT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_MARGIN_RIGHT)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_MARGIN_TOP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_MARGIN_TOP)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_MARGIN_BOTTOM").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_MARGIN_BOTTOM)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_ICON_AT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_ICON_AT)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_ACTIVE_ICON").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_ACTIVE_ICON)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_X_OFFSET").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_X_OFFSET)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_Y_OFFSET").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_Y_OFFSET)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_SELECTED_BG_COLOR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_SELECTED_BG_COLOR)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_SELECTED_FG_COLOR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_SELECTED_FG_COLOR)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_SELECTED_TEXT_COLOR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_SELECTED_TEXT_COLOR)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_ROUND_RADIUS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_ROUND_RADIUS)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_CHILDREN_LAYOUT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_CHILDREN_LAYOUT)->GetFunction());
  ctx->Set(Nan::New("STYLE_ID_SELF_LAYOUT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_STYLE_ID_SELF_LAYOUT)->GetFunction());

 return RET_OK;
}

static void wrap_style_notify_widget_state_changed(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
  ret = (ret_t)style_notify_widget_state_changed(s, widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_style_is_valid(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  bool_t ret = (bool_t)0;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  ret = (bool_t)style_is_valid(s);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_style_get_int(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  int32_t ret = (int32_t)0;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  int32_t defval = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (int32_t)style_get_int(s, name, defval);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_style_get_str(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  const char* ret = NULL;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* defval = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (const char*)style_get_str(s, name, defval);
  jsvalue_free_str(ctx, name);
  jsvalue_free_str(ctx, defval);

  const char* str_temp = ret;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_style_set(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 4) {
  ret_t ret = (ret_t)0;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  const char* state = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  const value_t* value = (const value_t*)jsvalue_get_pointer(ctx, argv[3], "const value_t*");
  ret = (ret_t)style_set(s, state, name, value);
  jsvalue_free_str(ctx, state);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_style_is_mutable(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  bool_t ret = (bool_t)0;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  ret = (bool_t)style_is_mutable(s);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t style_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("style_notify_widget_state_changed").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_style_notify_widget_state_changed)->GetFunction());
  ctx->Set(Nan::New("style_is_valid").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_style_is_valid)->GetFunction());
  ctx->Set(Nan::New("style_get_int").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_style_get_int)->GetFunction());
  ctx->Set(Nan::New("style_get_str").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_style_get_str)->GetFunction());
  ctx->Set(Nan::New("style_set").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_style_set)->GetFunction());
  ctx->Set(Nan::New("style_is_mutable").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_style_is_mutable)->GetFunction());

 return RET_OK;
}

static void wrap_theme(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  theme_t* ret = NULL;
  ret = (theme_t*)theme();

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t theme_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("theme").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_theme)->GetFunction());

 return RET_OK;
}

static void wrap_timer_remove(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  uint32_t timer_id = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
  ret = (ret_t)timer_remove(timer_id);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_timer_reset(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  uint32_t timer_id = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
  ret = (ret_t)timer_reset(timer_id);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_timer_modify(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  uint32_t timer_id = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
  uint32_t duration = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)timer_modify(timer_id, duration);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t timer_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("timer_add").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_timer_add)->GetFunction());
  ctx->Set(Nan::New("timer_remove").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_timer_remove)->GetFunction());
  ctx->Set(Nan::New("timer_reset").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_timer_reset)->GetFunction());
  ctx->Set(Nan::New("timer_modify").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_timer_modify)->GetFunction());

 return RET_OK;
}

static void get_ALIGN_V_NONE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)ALIGN_V_NONE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_ALIGN_V_MIDDLE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)ALIGN_V_MIDDLE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_ALIGN_V_TOP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)ALIGN_V_TOP);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_ALIGN_V_BOTTOM(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)ALIGN_V_BOTTOM);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t align_v_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("ALIGN_V_NONE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_ALIGN_V_NONE)->GetFunction());
  ctx->Set(Nan::New("ALIGN_V_MIDDLE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_ALIGN_V_MIDDLE)->GetFunction());
  ctx->Set(Nan::New("ALIGN_V_TOP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_ALIGN_V_TOP)->GetFunction());
  ctx->Set(Nan::New("ALIGN_V_BOTTOM").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_ALIGN_V_BOTTOM)->GetFunction());

 return RET_OK;
}

static void get_ALIGN_H_NONE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)ALIGN_H_NONE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_ALIGN_H_CENTER(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)ALIGN_H_CENTER);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_ALIGN_H_LEFT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)ALIGN_H_LEFT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_ALIGN_H_RIGHT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)ALIGN_H_RIGHT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t align_h_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("ALIGN_H_NONE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_ALIGN_H_NONE)->GetFunction());
  ctx->Set(Nan::New("ALIGN_H_CENTER").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_ALIGN_H_CENTER)->GetFunction());
  ctx->Set(Nan::New("ALIGN_H_LEFT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_ALIGN_H_LEFT)->GetFunction());
  ctx->Set(Nan::New("ALIGN_H_RIGHT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_ALIGN_H_RIGHT)->GetFunction());

 return RET_OK;
}

static void get_APP_MOBILE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)APP_MOBILE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_APP_SIMULATOR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)APP_SIMULATOR);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_APP_DESKTOP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)APP_DESKTOP);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t app_type_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("APP_MOBILE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_APP_MOBILE)->GetFunction());
  ctx->Set(Nan::New("APP_SIMULATOR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_APP_SIMULATOR)->GetFunction());
  ctx->Set(Nan::New("APP_DESKTOP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_APP_DESKTOP)->GetFunction());

 return RET_OK;
}

static void get_BITMAP_FMT_NONE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)BITMAP_FMT_NONE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_BITMAP_FMT_RGBA8888(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)BITMAP_FMT_RGBA8888);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_BITMAP_FMT_ABGR8888(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)BITMAP_FMT_ABGR8888);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_BITMAP_FMT_BGRA8888(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)BITMAP_FMT_BGRA8888);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_BITMAP_FMT_ARGB8888(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)BITMAP_FMT_ARGB8888);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_BITMAP_FMT_RGB565(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)BITMAP_FMT_RGB565);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_BITMAP_FMT_BGR565(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)BITMAP_FMT_BGR565);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_BITMAP_FMT_RGB888(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)BITMAP_FMT_RGB888);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_BITMAP_FMT_BGR888(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)BITMAP_FMT_BGR888);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_BITMAP_FMT_GRAY(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)BITMAP_FMT_GRAY);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_BITMAP_FMT_MONO(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)BITMAP_FMT_MONO);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t bitmap_format_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("BITMAP_FMT_NONE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_BITMAP_FMT_NONE)->GetFunction());
  ctx->Set(Nan::New("BITMAP_FMT_RGBA8888").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_BITMAP_FMT_RGBA8888)->GetFunction());
  ctx->Set(Nan::New("BITMAP_FMT_ABGR8888").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_BITMAP_FMT_ABGR8888)->GetFunction());
  ctx->Set(Nan::New("BITMAP_FMT_BGRA8888").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_BITMAP_FMT_BGRA8888)->GetFunction());
  ctx->Set(Nan::New("BITMAP_FMT_ARGB8888").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_BITMAP_FMT_ARGB8888)->GetFunction());
  ctx->Set(Nan::New("BITMAP_FMT_RGB565").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_BITMAP_FMT_RGB565)->GetFunction());
  ctx->Set(Nan::New("BITMAP_FMT_BGR565").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_BITMAP_FMT_BGR565)->GetFunction());
  ctx->Set(Nan::New("BITMAP_FMT_RGB888").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_BITMAP_FMT_RGB888)->GetFunction());
  ctx->Set(Nan::New("BITMAP_FMT_BGR888").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_BITMAP_FMT_BGR888)->GetFunction());
  ctx->Set(Nan::New("BITMAP_FMT_GRAY").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_BITMAP_FMT_GRAY)->GetFunction());
  ctx->Set(Nan::New("BITMAP_FMT_MONO").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_BITMAP_FMT_MONO)->GetFunction());

 return RET_OK;
}

static void get_BITMAP_FLAG_NONE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)BITMAP_FLAG_NONE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_BITMAP_FLAG_OPAQUE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)BITMAP_FLAG_OPAQUE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_BITMAP_FLAG_IMMUTABLE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)BITMAP_FLAG_IMMUTABLE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_BITMAP_FLAG_TEXTURE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)BITMAP_FLAG_TEXTURE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_BITMAP_FLAG_CHANGED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)BITMAP_FLAG_CHANGED);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_BITMAP_FLAG_PREMULTI_ALPHA(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)BITMAP_FLAG_PREMULTI_ALPHA);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t bitmap_flag_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("BITMAP_FLAG_NONE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_BITMAP_FLAG_NONE)->GetFunction());
  ctx->Set(Nan::New("BITMAP_FLAG_OPAQUE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_BITMAP_FLAG_OPAQUE)->GetFunction());
  ctx->Set(Nan::New("BITMAP_FLAG_IMMUTABLE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_BITMAP_FLAG_IMMUTABLE)->GetFunction());
  ctx->Set(Nan::New("BITMAP_FLAG_TEXTURE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_BITMAP_FLAG_TEXTURE)->GetFunction());
  ctx->Set(Nan::New("BITMAP_FLAG_CHANGED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_BITMAP_FLAG_CHANGED)->GetFunction());
  ctx->Set(Nan::New("BITMAP_FLAG_PREMULTI_ALPHA").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_BITMAP_FLAG_PREMULTI_ALPHA)->GetFunction());

 return RET_OK;
}

static void wrap_vgcanvas_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  vgcanvas_t* ret = NULL;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (vgcanvas_t*)vgcanvas_cast(vg);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_flush(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (ret_t)vgcanvas_flush(vg);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_begin_path(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (ret_t)vgcanvas_begin_path(vg);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_move_to(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)vgcanvas_move_to(vg, x, y);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_line_to(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)vgcanvas_line_to(vg, x, y);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_quad_to(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t cpx = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t cpy = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  ret = (ret_t)vgcanvas_quad_to(vg, cpx, cpy, x, y);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_bezier_to(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 7) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t cp1x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t cp1y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t cp2x = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t cp2y = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[6]);
  ret = (ret_t)vgcanvas_bezier_to(vg, cp1x, cp1y, cp2x, cp2y, x, y);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_arc_to(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 6) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x1 = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y1 = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t x2 = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t y2 = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t r = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  ret = (ret_t)vgcanvas_arc_to(vg, x1, y1, x2, y2, r);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_arc(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 7) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t r = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t start_angle = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t end_angle = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  bool_t ccw = (bool_t)jsvalue_get_boolean_value(ctx, argv[6]);
  ret = (ret_t)vgcanvas_arc(vg, x, y, r, start_angle, end_angle, ccw);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_is_point_in_path(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  bool_t ret = (bool_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (bool_t)vgcanvas_is_point_in_path(vg, x, y);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_rect(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t w = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t h = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  ret = (ret_t)vgcanvas_rect(vg, x, y, w, h);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_rounded_rect(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 6) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t w = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t h = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t r = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  ret = (ret_t)vgcanvas_rounded_rect(vg, x, y, w, h, r);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_ellipse(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t rx = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t ry = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  ret = (ret_t)vgcanvas_ellipse(vg, x, y, rx, ry);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_close_path(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (ret_t)vgcanvas_close_path(vg);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_path_winding(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  bool_t dir = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)vgcanvas_path_winding(vg, dir);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_rotate(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t rad = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)vgcanvas_rotate(vg, rad);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_scale(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)vgcanvas_scale(vg, x, y);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_translate(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)vgcanvas_translate(vg, x, y);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_transform(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 7) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t a = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t b = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t c = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t d = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t e = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  float_t f = (float_t)jsvalue_get_number_value(ctx, argv[6]);
  ret = (ret_t)vgcanvas_transform(vg, a, b, c, d, e, f);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_set_transform(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 7) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t a = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t b = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t c = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t d = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t e = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  float_t f = (float_t)jsvalue_get_number_value(ctx, argv[6]);
  ret = (ret_t)vgcanvas_set_transform(vg, a, b, c, d, e, f);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_clip_rect(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t w = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t h = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  ret = (ret_t)vgcanvas_clip_rect(vg, x, y, w, h);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_fill(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (ret_t)vgcanvas_fill(vg);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_stroke(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (ret_t)vgcanvas_stroke(vg);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_paint(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  bool_t stroke = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[2], "bitmap_t*");
  ret = (ret_t)vgcanvas_paint(vg, stroke, img);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_set_font(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  char* font = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_font(vg, font);
  jsvalue_free_str(ctx, font);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_set_font_size(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t font = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_font_size(vg, font);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_set_text_align(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  char* value = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_text_align(vg, value);
  jsvalue_free_str(ctx, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_set_text_baseline(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  char* value = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_text_baseline(vg, value);
  jsvalue_free_str(ctx, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_fill_text(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  char* text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t max_width = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  ret = (ret_t)vgcanvas_fill_text(vg, text, x, y, max_width);
  jsvalue_free_str(ctx, text);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_measure_text(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  float_t ret = (float_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  char* text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (float_t)vgcanvas_measure_text(vg, text);
  jsvalue_free_str(ctx, text);

  v8::Local<v8::Number> jret= Nan::New((double)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_draw_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 10) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
  float_t sx = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t sy = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t sw = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t sh = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  float_t dx = (float_t)jsvalue_get_number_value(ctx, argv[6]);
  float_t dy = (float_t)jsvalue_get_number_value(ctx, argv[7]);
  float_t dw = (float_t)jsvalue_get_number_value(ctx, argv[8]);
  float_t dh = (float_t)jsvalue_get_number_value(ctx, argv[9]);
  ret = (ret_t)vgcanvas_draw_image(vg, img, sx, sy, sw, sh, dx, dy, dw, dh);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_draw_icon(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 10) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
  float_t sx = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t sy = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t sw = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t sh = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  float_t dx = (float_t)jsvalue_get_number_value(ctx, argv[6]);
  float_t dy = (float_t)jsvalue_get_number_value(ctx, argv[7]);
  float_t dw = (float_t)jsvalue_get_number_value(ctx, argv[8]);
  float_t dh = (float_t)jsvalue_get_number_value(ctx, argv[9]);
  ret = (ret_t)vgcanvas_draw_icon(vg, img, sx, sy, sw, sh, dx, dy, dw, dh);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_set_antialias(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  bool_t value = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_antialias(vg, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_set_global_alpha(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t alpha = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_global_alpha(vg, alpha);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_set_line_width(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_line_width(vg, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_set_fill_color_str(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_fill_color_str(vg, color);
  jsvalue_free_str(ctx, color);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_set_stroke_color_str(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_stroke_color_str(vg, color);
  jsvalue_free_str(ctx, color);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_set_line_cap(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  char* value = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_line_cap(vg, value);
  jsvalue_free_str(ctx, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_set_line_join(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  char* value = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_line_join(vg, value);
  jsvalue_free_str(ctx, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_set_miter_limit(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_miter_limit(vg, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_save(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (ret_t)vgcanvas_save(vg);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_restore(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (ret_t)vgcanvas_restore(vg);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_t_get_prop_w(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->w));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_t_get_prop_h(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->h));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_t_get_prop_stride(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->stride));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_t_get_prop_ratio(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->ratio));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_t_get_prop_anti_alias(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->anti_alias));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_t_get_prop_line_width(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->line_width));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_t_get_prop_global_alpha(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->global_alpha));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_t_get_prop_miter_limit(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->miter_limit));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_t_get_prop_line_cap(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  const char* str_temp = obj->line_cap;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_t_get_prop_line_join(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  const char* str_temp = obj->line_join;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_t_get_prop_font(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  const char* str_temp = obj->font;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_t_get_prop_font_size(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->font_size));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_t_get_prop_text_align(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  const char* str_temp = obj->text_align;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_t_get_prop_text_baseline(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  const char* str_temp = obj->text_baseline;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t vgcanvas_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("vgcanvas_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_cast)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_flush").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_flush)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_begin_path").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_begin_path)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_move_to").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_move_to)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_line_to").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_line_to)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_quad_to").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_quad_to)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_bezier_to").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_bezier_to)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_arc_to").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_arc_to)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_arc").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_arc)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_is_point_in_path").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_is_point_in_path)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_rect").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_rect)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_rounded_rect").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_rounded_rect)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_ellipse").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_ellipse)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_close_path").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_close_path)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_path_winding").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_path_winding)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_rotate").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_rotate)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_scale").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_scale)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_translate").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_translate)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_transform").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_transform)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_set_transform").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_set_transform)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_clip_rect").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_clip_rect)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_fill").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_fill)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_stroke").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_stroke)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_paint").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_paint)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_set_font").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_set_font)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_set_font_size").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_set_font_size)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_set_text_align").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_set_text_align)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_set_text_baseline").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_set_text_baseline)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_fill_text").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_fill_text)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_measure_text").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_measure_text)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_draw_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_draw_image)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_draw_icon").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_draw_icon)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_set_antialias").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_set_antialias)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_set_global_alpha").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_set_global_alpha)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_set_line_width").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_set_line_width)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_set_fill_color_str").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_set_fill_color_str)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_set_stroke_color_str").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_set_stroke_color_str)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_set_line_cap").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_set_line_cap)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_set_line_join").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_set_line_join)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_set_miter_limit").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_set_miter_limit)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_save").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_save)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_restore").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_restore)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_t_get_prop_w").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_t_get_prop_w)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_t_get_prop_h").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_t_get_prop_h)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_t_get_prop_stride").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_t_get_prop_stride)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_t_get_prop_ratio").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_t_get_prop_ratio)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_t_get_prop_anti_alias").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_t_get_prop_anti_alias)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_t_get_prop_line_width").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_t_get_prop_line_width)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_t_get_prop_global_alpha").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_t_get_prop_global_alpha)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_t_get_prop_miter_limit").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_t_get_prop_miter_limit)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_t_get_prop_line_cap").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_t_get_prop_line_cap)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_t_get_prop_line_join").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_t_get_prop_line_join)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_t_get_prop_font").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_t_get_prop_font)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_t_get_prop_font_size").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_t_get_prop_font_size)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_t_get_prop_text_align").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_t_get_prop_text_align)->GetFunction());
  ctx->Set(Nan::New("vgcanvas_t_get_prop_text_baseline").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_vgcanvas_t_get_prop_text_baseline)->GetFunction());

 return RET_OK;
}

static void get_WIDGET_PROP_EXEC(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_EXEC).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_X(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_X).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_Y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_Y).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_W(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_W).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_H(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_H).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_CANVAS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_CANVAS).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_LOCALIZE_OPTIONS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_LOCALIZE_OPTIONS).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_NATIVE_WINDOW(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_NATIVE_WINDOW).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_HIGHLIGHT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_HIGHLIGHT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_BAR_SIZE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_BAR_SIZE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_OPACITY(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_OPACITY).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_MIN_W(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_MIN_W).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_MAX_W(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_MAX_W).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_CHILDREN_LAYOUT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_CHILDREN_LAYOUT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_LAYOUT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_LAYOUT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_SELF_LAYOUT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_SELF_LAYOUT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_LAYOUT_W(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_LAYOUT_W).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_LAYOUT_H(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_LAYOUT_H).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_VIRTUAL_W(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_VIRTUAL_W).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_VIRTUAL_H(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_VIRTUAL_H).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_NAME(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_NAME).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_TYPE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_TYPE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_CLOSABLE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_CLOSABLE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_CURSOR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_CURSOR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_VALUE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_VALUE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_LENGTH(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_LENGTH).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_TEXT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_TEXT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_TR_TEXT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_TR_TEXT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_STYLE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_STYLE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_ENABLE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_ENABLE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_FEEDBACK(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_FEEDBACK).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_FLOATING(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_FLOATING).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_MARGIN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_MARGIN).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_SPACING(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_SPACING).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_LEFT_MARGIN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_LEFT_MARGIN).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_RIGHT_MARGIN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_RIGHT_MARGIN).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_TOP_MARGIN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_TOP_MARGIN).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_BOTTOM_MARGIN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_BOTTOM_MARGIN).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_STEP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_STEP).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_VISIBLE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_VISIBLE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_SENSITIVE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_SENSITIVE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_ANIMATION(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_ANIMATION).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_ANIM_HINT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_ANIM_HINT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_FULLSCREEN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_FULLSCREEN).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_OPEN_ANIM_HINT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_OPEN_ANIM_HINT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_CLOSE_ANIM_HINT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_CLOSE_ANIM_HINT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_MIN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_MIN).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_TIPS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_TIPS).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_INPUT_TYPE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_INPUT_TYPE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_READONLY(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_READONLY).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_PASSWORD_VISIBLE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_PASSWORD_VISIBLE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_ACTIVE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_ACTIVE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_VERTICAL(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_VERTICAL).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_SHOW_TEXT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_SHOW_TEXT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_XOFFSET(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_XOFFSET).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_YOFFSET(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_YOFFSET).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_ALIGN_V(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_ALIGN_V).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_ALIGN_H(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_ALIGN_H).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_AUTO_PLAY(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_AUTO_PLAY).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_LOOP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_LOOP).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_AUTO_FIX(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_AUTO_FIX).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_OPEN_IM_WHEN_FOCUSED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_OPEN_IM_WHEN_FOCUSED).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_X_MIN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_X_MIN).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_X_MAX(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_X_MAX).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_Y_MIN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_Y_MIN).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_Y_MAX(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_Y_MAX).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_MAX(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_MAX).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_GRAB_KEYS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_GRAB_KEYS).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_ROW(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_ROW).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_STATE_FOR_STYLE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_STATE_FOR_STYLE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_THEME(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_THEME).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_STAGE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_STAGE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_IMAGE_MANAGER(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_IMAGE_MANAGER).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_ASSETS_MANAGER(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_ASSETS_MANAGER).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_LOCALE_INFO(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_LOCALE_INFO).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_FONT_MANAGER(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_FONT_MANAGER).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_THEME_OBJ(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_THEME_OBJ).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_DEFAULT_THEME_OBJ(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_DEFAULT_THEME_OBJ).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_ITEM_WIDTH(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_ITEM_WIDTH).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_ITEM_HEIGHT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_ITEM_HEIGHT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_DEFAULT_ITEM_HEIGHT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_DEFAULT_ITEM_HEIGHT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_XSLIDABLE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_XSLIDABLE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_YSLIDABLE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_YSLIDABLE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_REPEAT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_REPEAT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_ENABLE_LONG_PRESS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_ENABLE_LONG_PRESS).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_ANIMATABLE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_ANIMATABLE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_AUTO_HIDE_SCROLL_BAR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_AUTO_HIDE_SCROLL_BAR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_IMAGE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_IMAGE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_FORMAT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_FORMAT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_DRAW_TYPE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_DRAW_TYPE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_SELECTABLE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_SELECTABLE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_CLICKABLE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_CLICKABLE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_SCALE_X(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_SCALE_X).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_SCALE_Y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_SCALE_Y).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_ANCHOR_X(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_ANCHOR_X).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_ANCHOR_Y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_ANCHOR_Y).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_ROTATION(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_ROTATION).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_COMPACT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_COMPACT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_SCROLLABLE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_SCROLLABLE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_ICON(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_ICON).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_OPTIONS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_OPTIONS).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_SELECTED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_SELECTED).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_CHECKED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_CHECKED).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_ACTIVE_ICON(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_ACTIVE_ICON).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_LOAD_UI(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_LOAD_UI).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_OPEN_WINDOW(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_OPEN_WINDOW).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_SELECTED_INDEX(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_SELECTED_INDEX).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_CLOSE_WHEN_CLICK(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_CLOSE_WHEN_CLICK).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_LINE_GAP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_LINE_GAP).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_BG_COLOR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_BG_COLOR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_BORDER_COLOR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_BORDER_COLOR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_DELAY(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_DELAY).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_IS_KEYBOARD(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_IS_KEYBOARD).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_FOCUSED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_FOCUSED).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_FOCUS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_FOCUS).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_FOCUSABLE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_FOCUSABLE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_WITH_FOCUS_STATE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_WITH_FOCUS_STATE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_MOVE_FOCUS_PREV_KEY(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_MOVE_FOCUS_PREV_KEY).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_MOVE_FOCUS_NEXT_KEY(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_MOVE_FOCUS_NEXT_KEY).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_MOVE_FOCUS_UP_KEY(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_MOVE_FOCUS_UP_KEY).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_MOVE_FOCUS_DOWN_KEY(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_MOVE_FOCUS_DOWN_KEY).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_MOVE_FOCUS_LEFT_KEY(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_MOVE_FOCUS_LEFT_KEY).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t widget_prop_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("WIDGET_PROP_EXEC").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_EXEC)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_X").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_X)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_Y").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_Y)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_W").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_W)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_H").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_H)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_CANVAS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_CANVAS)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_LOCALIZE_OPTIONS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_LOCALIZE_OPTIONS)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_NATIVE_WINDOW").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_NATIVE_WINDOW)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_HIGHLIGHT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_HIGHLIGHT)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_BAR_SIZE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_BAR_SIZE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_OPACITY").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_OPACITY)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_MIN_W").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_MIN_W)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_MAX_W").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_MAX_W)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_CHILDREN_LAYOUT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_CHILDREN_LAYOUT)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_LAYOUT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_LAYOUT)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_SELF_LAYOUT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_SELF_LAYOUT)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_LAYOUT_W").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_LAYOUT_W)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_LAYOUT_H").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_LAYOUT_H)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_VIRTUAL_W").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_VIRTUAL_W)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_VIRTUAL_H").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_VIRTUAL_H)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_NAME").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_NAME)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_TYPE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_TYPE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_CLOSABLE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_CLOSABLE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_CURSOR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_CURSOR)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_VALUE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_VALUE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_LENGTH").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_LENGTH)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_TEXT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_TEXT)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_TR_TEXT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_TR_TEXT)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_STYLE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_STYLE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_ENABLE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_ENABLE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_FEEDBACK").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_FEEDBACK)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_FLOATING").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_FLOATING)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_MARGIN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_MARGIN)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_SPACING").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_SPACING)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_LEFT_MARGIN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_LEFT_MARGIN)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_RIGHT_MARGIN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_RIGHT_MARGIN)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_TOP_MARGIN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_TOP_MARGIN)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_BOTTOM_MARGIN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_BOTTOM_MARGIN)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_STEP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_STEP)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_VISIBLE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_VISIBLE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_SENSITIVE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_SENSITIVE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_ANIMATION").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_ANIMATION)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_ANIM_HINT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_ANIM_HINT)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_FULLSCREEN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_FULLSCREEN)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_OPEN_ANIM_HINT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_OPEN_ANIM_HINT)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_CLOSE_ANIM_HINT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_CLOSE_ANIM_HINT)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_MIN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_MIN)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_TIPS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_TIPS)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_INPUT_TYPE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_INPUT_TYPE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_READONLY").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_READONLY)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_PASSWORD_VISIBLE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_PASSWORD_VISIBLE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_ACTIVE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_ACTIVE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_VERTICAL").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_VERTICAL)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_SHOW_TEXT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_SHOW_TEXT)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_XOFFSET").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_XOFFSET)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_YOFFSET").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_YOFFSET)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_ALIGN_V").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_ALIGN_V)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_ALIGN_H").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_ALIGN_H)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_AUTO_PLAY").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_AUTO_PLAY)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_LOOP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_LOOP)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_AUTO_FIX").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_AUTO_FIX)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_OPEN_IM_WHEN_FOCUSED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_OPEN_IM_WHEN_FOCUSED)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_X_MIN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_X_MIN)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_X_MAX").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_X_MAX)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_Y_MIN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_Y_MIN)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_Y_MAX").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_Y_MAX)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_MAX").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_MAX)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_GRAB_KEYS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_GRAB_KEYS)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_ROW").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_ROW)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_STATE_FOR_STYLE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_STATE_FOR_STYLE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_THEME").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_THEME)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_STAGE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_STAGE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_IMAGE_MANAGER").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_IMAGE_MANAGER)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_ASSETS_MANAGER").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_ASSETS_MANAGER)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_LOCALE_INFO").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_LOCALE_INFO)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_FONT_MANAGER").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_FONT_MANAGER)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_THEME_OBJ").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_THEME_OBJ)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_DEFAULT_THEME_OBJ").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_DEFAULT_THEME_OBJ)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_ITEM_WIDTH").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_ITEM_WIDTH)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_ITEM_HEIGHT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_ITEM_HEIGHT)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_DEFAULT_ITEM_HEIGHT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_DEFAULT_ITEM_HEIGHT)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_XSLIDABLE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_XSLIDABLE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_YSLIDABLE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_YSLIDABLE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_REPEAT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_REPEAT)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_ENABLE_LONG_PRESS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_ENABLE_LONG_PRESS)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_ANIMATABLE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_ANIMATABLE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_AUTO_HIDE_SCROLL_BAR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_AUTO_HIDE_SCROLL_BAR)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_IMAGE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_IMAGE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_FORMAT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_FORMAT)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_DRAW_TYPE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_DRAW_TYPE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_SELECTABLE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_SELECTABLE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_CLICKABLE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_CLICKABLE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_SCALE_X").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_SCALE_X)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_SCALE_Y").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_SCALE_Y)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_ANCHOR_X").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_ANCHOR_X)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_ANCHOR_Y").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_ANCHOR_Y)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_ROTATION").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_ROTATION)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_COMPACT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_COMPACT)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_SCROLLABLE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_SCROLLABLE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_ICON").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_ICON)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_OPTIONS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_OPTIONS)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_SELECTED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_SELECTED)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_CHECKED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_CHECKED)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_ACTIVE_ICON").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_ACTIVE_ICON)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_LOAD_UI").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_LOAD_UI)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_OPEN_WINDOW").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_OPEN_WINDOW)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_SELECTED_INDEX").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_SELECTED_INDEX)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_CLOSE_WHEN_CLICK").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_CLOSE_WHEN_CLICK)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_LINE_GAP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_LINE_GAP)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_BG_COLOR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_BG_COLOR)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_BORDER_COLOR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_BORDER_COLOR)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_DELAY").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_DELAY)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_IS_KEYBOARD").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_IS_KEYBOARD)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_FOCUSED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_FOCUSED)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_FOCUS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_FOCUS)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_FOCUSABLE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_FOCUSABLE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_WITH_FOCUS_STATE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_WITH_FOCUS_STATE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_MOVE_FOCUS_PREV_KEY").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_MOVE_FOCUS_PREV_KEY)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_MOVE_FOCUS_NEXT_KEY").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_MOVE_FOCUS_NEXT_KEY)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_MOVE_FOCUS_UP_KEY").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_MOVE_FOCUS_UP_KEY)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_MOVE_FOCUS_DOWN_KEY").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_MOVE_FOCUS_DOWN_KEY)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_MOVE_FOCUS_LEFT_KEY").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_MOVE_FOCUS_LEFT_KEY)->GetFunction());
  ctx->Set(Nan::New("WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY)->GetFunction());

 return RET_OK;
}

static void get_WIDGET_TYPE_NONE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_NONE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_WINDOW_MANAGER(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_WINDOW_MANAGER).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_NORMAL_WINDOW(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_NORMAL_WINDOW).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_OVERLAY(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_OVERLAY).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_TOOL_BAR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_TOOL_BAR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_DIALOG(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_DIALOG).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_POPUP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_POPUP).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_SYSTEM_BAR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_SYSTEM_BAR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_SYSTEM_BAR_BOTTOM(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_SYSTEM_BAR_BOTTOM).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_SPRITE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_SPRITE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_KEYBOARD(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_KEYBOARD).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_DND(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_DND).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_LABEL(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_LABEL).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_BUTTON(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_BUTTON).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_IMAGE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_IMAGE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_EDIT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_EDIT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_PROGRESS_BAR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_PROGRESS_BAR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_GROUP_BOX(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_GROUP_BOX).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_CHECK_BUTTON(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_CHECK_BUTTON).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_RADIO_BUTTON(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_RADIO_BUTTON).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_DIALOG_TITLE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_DIALOG_TITLE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_DIALOG_CLIENT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_DIALOG_CLIENT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_SLIDER(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_SLIDER).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_VIEW(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_VIEW).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_COMBO_BOX(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_COMBO_BOX).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_COMBO_BOX_ITEM(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_COMBO_BOX_ITEM).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_SLIDE_VIEW(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_SLIDE_VIEW).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_SLIDE_INDICATOR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_SLIDE_INDICATOR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_SLIDE_INDICATOR_ARC(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_SLIDE_INDICATOR_ARC).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_PAGES(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_PAGES).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_TAB_BUTTON(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_TAB_BUTTON).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_TAB_CONTROL(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_TAB_CONTROL).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_TAB_BUTTON_GROUP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_TAB_BUTTON_GROUP).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_BUTTON_GROUP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_BUTTON_GROUP).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_CANDIDATES(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_CANDIDATES).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_SPIN_BOX(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_SPIN_BOX).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_DRAGGER(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_DRAGGER).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_SCROLL_BAR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_SCROLL_BAR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_SCROLL_BAR_DESKTOP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_SCROLL_BAR_DESKTOP).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_SCROLL_BAR_MOBILE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_SCROLL_BAR_MOBILE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_SCROLL_VIEW(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_SCROLL_VIEW).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_LIST_VIEW(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_LIST_VIEW).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_LIST_VIEW_H(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_LIST_VIEW_H).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_LIST_ITEM(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_LIST_ITEM).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_COLOR_PICKER(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_COLOR_PICKER).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_COLOR_COMPONENT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_COLOR_COMPONENT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_COLOR_TILE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_COLOR_TILE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_CLIP_VIEW(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_CLIP_VIEW).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_RICH_TEXT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_RICH_TEXT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_APP_BAR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_APP_BAR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_GRID(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_GRID).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_GRID_ITEM(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_GRID_ITEM).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_ROW(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_ROW).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_COLUMN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_COLUMN).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_TYPE_CALIBRATION_WIN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_TYPE_CALIBRATION_WIN).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t widget_type_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("WIDGET_TYPE_NONE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_NONE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_WINDOW_MANAGER").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_WINDOW_MANAGER)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_NORMAL_WINDOW").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_NORMAL_WINDOW)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_OVERLAY").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_OVERLAY)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_TOOL_BAR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_TOOL_BAR)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_DIALOG").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_DIALOG)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_POPUP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_POPUP)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_SYSTEM_BAR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_SYSTEM_BAR)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_SYSTEM_BAR_BOTTOM").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_SYSTEM_BAR_BOTTOM)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_SPRITE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_SPRITE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_KEYBOARD").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_KEYBOARD)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_DND").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_DND)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_LABEL").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_LABEL)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_BUTTON").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_BUTTON)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_IMAGE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_IMAGE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_EDIT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_EDIT)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_PROGRESS_BAR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_PROGRESS_BAR)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_GROUP_BOX").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_GROUP_BOX)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_CHECK_BUTTON").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_CHECK_BUTTON)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_RADIO_BUTTON").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_RADIO_BUTTON)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_DIALOG_TITLE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_DIALOG_TITLE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_DIALOG_CLIENT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_DIALOG_CLIENT)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_SLIDER").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_SLIDER)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_VIEW").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_VIEW)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_COMBO_BOX").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_COMBO_BOX)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_COMBO_BOX_ITEM").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_COMBO_BOX_ITEM)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_SLIDE_VIEW").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_SLIDE_VIEW)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_SLIDE_INDICATOR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_SLIDE_INDICATOR)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_SLIDE_INDICATOR_ARC").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_SLIDE_INDICATOR_ARC)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_PAGES").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_PAGES)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_TAB_BUTTON").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_TAB_BUTTON)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_TAB_CONTROL").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_TAB_CONTROL)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_TAB_BUTTON_GROUP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_TAB_BUTTON_GROUP)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_BUTTON_GROUP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_BUTTON_GROUP)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_CANDIDATES").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_CANDIDATES)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_SPIN_BOX").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_SPIN_BOX)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_DRAGGER").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_DRAGGER)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_SCROLL_BAR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_SCROLL_BAR)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_SCROLL_BAR_DESKTOP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_SCROLL_BAR_DESKTOP)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_SCROLL_BAR_MOBILE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_SCROLL_BAR_MOBILE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_SCROLL_VIEW").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_SCROLL_VIEW)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_LIST_VIEW").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_LIST_VIEW)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_LIST_VIEW_H").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_LIST_VIEW_H)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_LIST_ITEM").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_LIST_ITEM)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_COLOR_PICKER").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_COLOR_PICKER)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_COLOR_COMPONENT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_COLOR_COMPONENT)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_COLOR_TILE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_COLOR_TILE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_CLIP_VIEW").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_CLIP_VIEW)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_RICH_TEXT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_RICH_TEXT)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_APP_BAR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_APP_BAR)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_GRID").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_GRID)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_GRID_ITEM").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_GRID_ITEM)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_ROW").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_ROW)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_COLUMN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_COLUMN)->GetFunction());
  ctx->Set(Nan::New("WIDGET_TYPE_CALIBRATION_WIN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_TYPE_CALIBRATION_WIN)->GetFunction());

 return RET_OK;
}

static void get_WINDOW_STAGE_NONE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)WINDOW_STAGE_NONE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WINDOW_STAGE_CREATED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)WINDOW_STAGE_CREATED);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WINDOW_STAGE_OPENED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)WINDOW_STAGE_OPENED);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WINDOW_STAGE_CLOSED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)WINDOW_STAGE_CLOSED);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t window_stage_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("WINDOW_STAGE_NONE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WINDOW_STAGE_NONE)->GetFunction());
  ctx->Set(Nan::New("WINDOW_STAGE_CREATED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WINDOW_STAGE_CREATED)->GetFunction());
  ctx->Set(Nan::New("WINDOW_STAGE_OPENED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WINDOW_STAGE_OPENED)->GetFunction());
  ctx->Set(Nan::New("WINDOW_STAGE_CLOSED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WINDOW_STAGE_CLOSED)->GetFunction());

 return RET_OK;
}

static void get_WINDOW_CLOSABLE_YES(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)WINDOW_CLOSABLE_YES);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WINDOW_CLOSABLE_NO(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)WINDOW_CLOSABLE_NO);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WINDOW_CLOSABLE_CONFIRM(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)WINDOW_CLOSABLE_CONFIRM);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t window_closable_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("WINDOW_CLOSABLE_YES").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WINDOW_CLOSABLE_YES)->GetFunction());
  ctx->Set(Nan::New("WINDOW_CLOSABLE_NO").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WINDOW_CLOSABLE_NO)->GetFunction());
  ctx->Set(Nan::New("WINDOW_CLOSABLE_CONFIRM").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WINDOW_CLOSABLE_CONFIRM)->GetFunction());

 return RET_OK;
}

static void get_WIDGET_STATE_NONE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_STATE_NONE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_STATE_NORMAL(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_STATE_NORMAL).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_STATE_PRESSED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_STATE_PRESSED).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_STATE_OVER(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_STATE_OVER).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_STATE_DISABLE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_STATE_DISABLE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_STATE_FOCUSED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_STATE_FOCUSED).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_STATE_CHECKED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_STATE_CHECKED).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_STATE_UNCHECKED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_STATE_UNCHECKED).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_STATE_EMPTY(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_STATE_EMPTY).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_STATE_EMPTY_FOCUS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_STATE_EMPTY_FOCUS).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_STATE_ERROR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_STATE_ERROR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_STATE_SELECTED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_STATE_SELECTED).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_STATE_NORMAL_OF_CHECKED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_STATE_NORMAL_OF_CHECKED).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_STATE_PRESSED_OF_CHECKED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_STATE_PRESSED_OF_CHECKED).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_STATE_OVER_OF_CHECKED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_STATE_OVER_OF_CHECKED).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_STATE_FOCUSED_OF_CHECKED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_STATE_FOCUSED_OF_CHECKED).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_STATE_NORMAL_OF_ACTIVE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_STATE_NORMAL_OF_ACTIVE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_STATE_PRESSED_OF_ACTIVE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_STATE_PRESSED_OF_ACTIVE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_STATE_OVER_OF_ACTIVE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_STATE_OVER_OF_ACTIVE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_WIDGET_STATE_FOCUSED_OF_ACTIVE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_STATE_FOCUSED_OF_ACTIVE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t widget_state_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("WIDGET_STATE_NONE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_STATE_NONE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_STATE_NORMAL").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_STATE_NORMAL)->GetFunction());
  ctx->Set(Nan::New("WIDGET_STATE_PRESSED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_STATE_PRESSED)->GetFunction());
  ctx->Set(Nan::New("WIDGET_STATE_OVER").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_STATE_OVER)->GetFunction());
  ctx->Set(Nan::New("WIDGET_STATE_DISABLE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_STATE_DISABLE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_STATE_FOCUSED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_STATE_FOCUSED)->GetFunction());
  ctx->Set(Nan::New("WIDGET_STATE_CHECKED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_STATE_CHECKED)->GetFunction());
  ctx->Set(Nan::New("WIDGET_STATE_UNCHECKED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_STATE_UNCHECKED)->GetFunction());
  ctx->Set(Nan::New("WIDGET_STATE_EMPTY").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_STATE_EMPTY)->GetFunction());
  ctx->Set(Nan::New("WIDGET_STATE_EMPTY_FOCUS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_STATE_EMPTY_FOCUS)->GetFunction());
  ctx->Set(Nan::New("WIDGET_STATE_ERROR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_STATE_ERROR)->GetFunction());
  ctx->Set(Nan::New("WIDGET_STATE_SELECTED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_STATE_SELECTED)->GetFunction());
  ctx->Set(Nan::New("WIDGET_STATE_NORMAL_OF_CHECKED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_STATE_NORMAL_OF_CHECKED)->GetFunction());
  ctx->Set(Nan::New("WIDGET_STATE_PRESSED_OF_CHECKED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_STATE_PRESSED_OF_CHECKED)->GetFunction());
  ctx->Set(Nan::New("WIDGET_STATE_OVER_OF_CHECKED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_STATE_OVER_OF_CHECKED)->GetFunction());
  ctx->Set(Nan::New("WIDGET_STATE_FOCUSED_OF_CHECKED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_STATE_FOCUSED_OF_CHECKED)->GetFunction());
  ctx->Set(Nan::New("WIDGET_STATE_NORMAL_OF_ACTIVE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_STATE_NORMAL_OF_ACTIVE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_STATE_PRESSED_OF_ACTIVE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_STATE_PRESSED_OF_ACTIVE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_STATE_OVER_OF_ACTIVE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_STATE_OVER_OF_ACTIVE)->GetFunction());
  ctx->Set(Nan::New("WIDGET_STATE_FOCUSED_OF_ACTIVE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_WIDGET_STATE_FOCUSED_OF_ACTIVE)->GetFunction());

 return RET_OK;
}

static void wrap_widget_count_children(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  int32_t ret = (int32_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)widget_count_children(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_get_child(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t index = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (widget_t*)widget_get_child(widget, index);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_index_of(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  int32_t ret = (int32_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)widget_index_of(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_close_window(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)widget_close_window(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_move(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)widget_move(widget, x, y);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_resize(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[1]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)widget_resize(widget, w, h);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_move_resize(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (ret_t)widget_move_resize(widget, x, y, w, h);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)widget_set_value(widget, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_animate_value_to(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  uint32_t duration = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)widget_animate_value_to(widget, value, duration);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_add_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t delta = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)widget_add_value(widget, delta);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_use_style(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* style = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_use_style(widget, style);
  jsvalue_free_str(ctx, style);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_text_utf8(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_text_utf8(widget, text);
  jsvalue_free_str(ctx, text);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_tr_text(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_tr_text(widget, text);
  jsvalue_free_str(ctx, text);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_get_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  int32_t ret = (int32_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)widget_get_value(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_get_text(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  const wchar_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (const wchar_t*)widget_get_text(widget);

  str_t str;
  str_init(&str, 0);
  str_from_wstr(&str, ret);
  v8::Local<v8::String> jret= Nan::New((const char*)(str.str)).ToLocalChecked();
  str_reset(&str);
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_name(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_name(widget, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_theme(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_theme(widget, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_pointer_cursor(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* cursor = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_pointer_cursor(widget, cursor);
  jsvalue_free_str(ctx, cursor);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_animation(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* animation = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_animation(widget, animation);
  jsvalue_free_str(ctx, animation);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_create_animator(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* animation = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_create_animator(widget, animation);
  jsvalue_free_str(ctx, animation);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_start_animator(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_start_animator(widget, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_animator_time_scale(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  float_t time_scale = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)widget_set_animator_time_scale(widget, name, time_scale);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_pause_animator(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_pause_animator(widget, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_stop_animator(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_stop_animator(widget, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_destroy_animator(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_destroy_animator(widget, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_enable(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t enable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)widget_set_enable(widget, enable);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_feedback(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t feedback = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)widget_set_feedback(widget, feedback);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_floating(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t floating = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)widget_set_floating(widget, floating);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_focused(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t focused = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)widget_set_focused(widget, focused);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_focusable(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t focusable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)widget_set_focusable(widget, focusable);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_state(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* state = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_state(widget, state);
  jsvalue_free_str(ctx, state);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_opacity(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint8_t opacity = (uint8_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)widget_set_opacity(widget, opacity);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_destroy_children(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)widget_destroy_children(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_add_child(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  widget_t* child = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
  ret = (ret_t)widget_add_child(widget, child);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_remove_child(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  widget_t* child = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
  ret = (ret_t)widget_remove_child(widget, child);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_insert_child(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  widget_t* child = (widget_t*)jsvalue_get_pointer(ctx, argv[2], "widget_t*");
  ret = (ret_t)widget_insert_child(widget, index, child);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_restack(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)widget_restack(widget, index);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_child(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (widget_t*)widget_child(widget, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_lookup(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bool_t recursive = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (widget_t*)widget_lookup(widget, name, recursive);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_lookup_by_type(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* type = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bool_t recursive = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (widget_t*)widget_lookup_by_type(widget, type, recursive);
  jsvalue_free_str(ctx, type);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_visible(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t visible = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  bool_t recursive = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (ret_t)widget_set_visible(widget, visible, recursive);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_visible_only(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t visible = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)widget_set_visible_only(widget, visible);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_sensitive(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t sensitive = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)widget_set_sensitive(widget, sensitive);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_off(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t id = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)widget_off(widget, id);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_invalidate_force(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  rect_t* r = (rect_t*)jsvalue_get_pointer(ctx, argv[1], "rect_t*");
  ret = (ret_t)widget_invalidate_force(widget, r);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_prop_str(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* v = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)widget_set_prop_str(widget, name, v);
  jsvalue_free_str(ctx, name);
  jsvalue_free_str(ctx, v);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_get_prop_str(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  const char* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* defval = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (const char*)widget_get_prop_str(widget, name, defval);
  jsvalue_free_str(ctx, name);
  jsvalue_free_str(ctx, defval);

  const char* str_temp = ret;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_prop_int(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  int32_t v = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)widget_set_prop_int(widget, name, v);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_get_prop_int(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  int32_t ret = (int32_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  int32_t defval = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (int32_t)widget_get_prop_int(widget, name, defval);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_prop_bool(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bool_t v = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (ret_t)widget_set_prop_bool(widget, name, v);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_get_prop_bool(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  bool_t ret = (bool_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bool_t defval = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (bool_t)widget_get_prop_bool(widget, name, defval);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_is_window_opened(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  bool_t ret = (bool_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)widget_is_window_opened(widget);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_is_window(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  bool_t ret = (bool_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)widget_is_window(widget);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_is_designing_window(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  bool_t ret = (bool_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)widget_is_designing_window(widget);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_is_window_manager(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  bool_t ret = (bool_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)widget_is_window_manager(widget);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_get_window(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)widget_get_window(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_get_window_manager(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)widget_get_window_manager(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_get_type(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  const char* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (const char*)widget_get_type(widget);

  const char* str_temp = ret;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_clone(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
  ret = (widget_t*)widget_clone(widget, parent);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_equal(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  bool_t ret = (bool_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  widget_t* other = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
  ret = (bool_t)widget_equal(widget, other);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)widget_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_destroy(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)widget_destroy(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_unref(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)widget_unref(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_is_system_bar(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  bool_t ret = (bool_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)widget_is_system_bar(widget);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_is_normal_window(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  bool_t ret = (bool_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)widget_is_normal_window(widget);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_is_dialog(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  bool_t ret = (bool_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)widget_is_dialog(widget);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_is_popup(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  bool_t ret = (bool_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)widget_is_popup(widget);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_layout(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)widget_layout(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_self_layout(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* params = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_self_layout(widget, params);
  jsvalue_free_str(ctx, params);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_children_layout(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* params = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_children_layout(widget, params);
  jsvalue_free_str(ctx, params);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_self_layout_params(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  const char* w = (const char*)jsvalue_get_utf8_string(ctx, argv[3]);
  const char* h = (const char*)jsvalue_get_utf8_string(ctx, argv[4]);
  ret = (ret_t)widget_set_self_layout_params(widget, x, y, w, h);
  jsvalue_free_str(ctx, x);
  jsvalue_free_str(ctx, y);
  jsvalue_free_str(ctx, w);
  jsvalue_free_str(ctx, h);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_style_int(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* state_and_name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)widget_set_style_int(widget, state_and_name, value);
  jsvalue_free_str(ctx, state_and_name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_style_str(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* state_and_name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* value = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)widget_set_style_str(widget, state_and_name, value);
  jsvalue_free_str(ctx, state_and_name);
  jsvalue_free_str(ctx, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_set_style_color(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* state_and_name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)widget_set_style_color(widget, state_and_name, value);
  jsvalue_free_str(ctx, state_and_name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_widget_t_get_prop_x(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->x));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_widget_t_get_prop_y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->y));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_widget_t_get_prop_w(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->w));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_widget_t_get_prop_h(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->h));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_widget_t_get_prop_name(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  const char* str_temp = obj->name;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_widget_t_get_prop_tr_text(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  const char* str_temp = obj->tr_text;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_widget_t_get_prop_style(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  const char* str_temp = obj->style;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_widget_t_get_prop_animation(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  const char* str_temp = obj->animation;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_widget_t_get_prop_enable(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->enable));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_widget_t_get_prop_feedback(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->feedback));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_widget_t_set_prop_visible(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t visible = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  obj->visible = visible;

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->visible));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
};

static void wrap_widget_t_get_prop_visible(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->visible));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_widget_t_set_prop_sensitive(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t sensitive = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  obj->sensitive = sensitive;

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->sensitive));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
};

static void wrap_widget_t_get_prop_sensitive(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->sensitive));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_widget_t_set_prop_focusable(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t focusable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  obj->focusable = focusable;

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->focusable));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
};

static void wrap_widget_t_get_prop_focusable(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->focusable));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_widget_t_set_prop_with_focus_state(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t with_focus_state = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  obj->with_focus_state = with_focus_state;

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->with_focus_state));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
};

static void wrap_widget_t_get_prop_with_focus_state(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->with_focus_state));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_widget_t_get_prop_floating(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->floating));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_widget_t_get_prop_parent(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(obj->parent)));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t widget_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("widget_count_children").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_count_children)->GetFunction());
  ctx->Set(Nan::New("widget_get_child").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_get_child)->GetFunction());
  ctx->Set(Nan::New("widget_index_of").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_index_of)->GetFunction());
  ctx->Set(Nan::New("widget_close_window").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_close_window)->GetFunction());
  ctx->Set(Nan::New("widget_move").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_move)->GetFunction());
  ctx->Set(Nan::New("widget_resize").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_resize)->GetFunction());
  ctx->Set(Nan::New("widget_move_resize").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_move_resize)->GetFunction());
  ctx->Set(Nan::New("widget_set_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_value)->GetFunction());
  ctx->Set(Nan::New("widget_animate_value_to").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_animate_value_to)->GetFunction());
  ctx->Set(Nan::New("widget_add_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_add_value)->GetFunction());
  ctx->Set(Nan::New("widget_use_style").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_use_style)->GetFunction());
  ctx->Set(Nan::New("widget_set_text_utf8").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_text_utf8)->GetFunction());
  ctx->Set(Nan::New("widget_set_tr_text").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_tr_text)->GetFunction());
  ctx->Set(Nan::New("widget_get_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_get_value)->GetFunction());
  ctx->Set(Nan::New("widget_get_text").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_get_text)->GetFunction());
  ctx->Set(Nan::New("widget_set_name").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_name)->GetFunction());
  ctx->Set(Nan::New("widget_set_theme").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_theme)->GetFunction());
  ctx->Set(Nan::New("widget_set_pointer_cursor").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_pointer_cursor)->GetFunction());
  ctx->Set(Nan::New("widget_set_animation").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_animation)->GetFunction());
  ctx->Set(Nan::New("widget_create_animator").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_create_animator)->GetFunction());
  ctx->Set(Nan::New("widget_start_animator").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_start_animator)->GetFunction());
  ctx->Set(Nan::New("widget_set_animator_time_scale").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_animator_time_scale)->GetFunction());
  ctx->Set(Nan::New("widget_pause_animator").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_pause_animator)->GetFunction());
  ctx->Set(Nan::New("widget_stop_animator").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_stop_animator)->GetFunction());
  ctx->Set(Nan::New("widget_destroy_animator").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_destroy_animator)->GetFunction());
  ctx->Set(Nan::New("widget_set_enable").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_enable)->GetFunction());
  ctx->Set(Nan::New("widget_set_feedback").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_feedback)->GetFunction());
  ctx->Set(Nan::New("widget_set_floating").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_floating)->GetFunction());
  ctx->Set(Nan::New("widget_set_focused").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_focused)->GetFunction());
  ctx->Set(Nan::New("widget_set_focusable").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_focusable)->GetFunction());
  ctx->Set(Nan::New("widget_set_state").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_state)->GetFunction());
  ctx->Set(Nan::New("widget_set_opacity").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_opacity)->GetFunction());
  ctx->Set(Nan::New("widget_destroy_children").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_destroy_children)->GetFunction());
  ctx->Set(Nan::New("widget_add_child").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_add_child)->GetFunction());
  ctx->Set(Nan::New("widget_remove_child").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_remove_child)->GetFunction());
  ctx->Set(Nan::New("widget_insert_child").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_insert_child)->GetFunction());
  ctx->Set(Nan::New("widget_restack").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_restack)->GetFunction());
  ctx->Set(Nan::New("widget_child").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_child)->GetFunction());
  ctx->Set(Nan::New("widget_lookup").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_lookup)->GetFunction());
  ctx->Set(Nan::New("widget_lookup_by_type").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_lookup_by_type)->GetFunction());
  ctx->Set(Nan::New("widget_set_visible").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_visible)->GetFunction());
  ctx->Set(Nan::New("widget_set_visible_only").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_visible_only)->GetFunction());
  ctx->Set(Nan::New("widget_set_sensitive").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_sensitive)->GetFunction());
  ctx->Set(Nan::New("widget_on").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_on)->GetFunction());
  ctx->Set(Nan::New("widget_off").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_off)->GetFunction());
  ctx->Set(Nan::New("widget_invalidate_force").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_invalidate_force)->GetFunction());
  ctx->Set(Nan::New("widget_set_prop_str").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_prop_str)->GetFunction());
  ctx->Set(Nan::New("widget_get_prop_str").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_get_prop_str)->GetFunction());
  ctx->Set(Nan::New("widget_set_prop_int").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_prop_int)->GetFunction());
  ctx->Set(Nan::New("widget_get_prop_int").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_get_prop_int)->GetFunction());
  ctx->Set(Nan::New("widget_set_prop_bool").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_prop_bool)->GetFunction());
  ctx->Set(Nan::New("widget_get_prop_bool").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_get_prop_bool)->GetFunction());
  ctx->Set(Nan::New("widget_is_window_opened").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_is_window_opened)->GetFunction());
  ctx->Set(Nan::New("widget_is_window").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_is_window)->GetFunction());
  ctx->Set(Nan::New("widget_is_designing_window").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_is_designing_window)->GetFunction());
  ctx->Set(Nan::New("widget_is_window_manager").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_is_window_manager)->GetFunction());
  ctx->Set(Nan::New("widget_foreach").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_foreach)->GetFunction());
  ctx->Set(Nan::New("widget_get_window").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_get_window)->GetFunction());
  ctx->Set(Nan::New("widget_get_window_manager").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_get_window_manager)->GetFunction());
  ctx->Set(Nan::New("widget_get_type").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_get_type)->GetFunction());
  ctx->Set(Nan::New("widget_clone").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_clone)->GetFunction());
  ctx->Set(Nan::New("widget_equal").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_equal)->GetFunction());
  ctx->Set(Nan::New("widget_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_cast)->GetFunction());
  ctx->Set(Nan::New("widget_destroy").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_destroy)->GetFunction());
  ctx->Set(Nan::New("widget_unref").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_unref)->GetFunction());
  ctx->Set(Nan::New("widget_is_system_bar").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_is_system_bar)->GetFunction());
  ctx->Set(Nan::New("widget_is_normal_window").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_is_normal_window)->GetFunction());
  ctx->Set(Nan::New("widget_is_dialog").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_is_dialog)->GetFunction());
  ctx->Set(Nan::New("widget_is_popup").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_is_popup)->GetFunction());
  ctx->Set(Nan::New("widget_layout").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_layout)->GetFunction());
  ctx->Set(Nan::New("widget_set_self_layout").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_self_layout)->GetFunction());
  ctx->Set(Nan::New("widget_set_children_layout").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_children_layout)->GetFunction());
  ctx->Set(Nan::New("widget_set_self_layout_params").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_self_layout_params)->GetFunction());
  ctx->Set(Nan::New("widget_set_style_int").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_style_int)->GetFunction());
  ctx->Set(Nan::New("widget_set_style_str").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_style_str)->GetFunction());
  ctx->Set(Nan::New("widget_set_style_color").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_set_style_color)->GetFunction());
  ctx->Set(Nan::New("widget_t_get_prop_x").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_t_get_prop_x)->GetFunction());
  ctx->Set(Nan::New("widget_t_get_prop_y").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_t_get_prop_y)->GetFunction());
  ctx->Set(Nan::New("widget_t_get_prop_w").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_t_get_prop_w)->GetFunction());
  ctx->Set(Nan::New("widget_t_get_prop_h").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_t_get_prop_h)->GetFunction());
  ctx->Set(Nan::New("widget_t_get_prop_name").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_t_get_prop_name)->GetFunction());
  ctx->Set(Nan::New("widget_t_get_prop_tr_text").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_t_get_prop_tr_text)->GetFunction());
  ctx->Set(Nan::New("widget_t_get_prop_style").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_t_get_prop_style)->GetFunction());
  ctx->Set(Nan::New("widget_t_get_prop_animation").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_t_get_prop_animation)->GetFunction());
  ctx->Set(Nan::New("widget_t_get_prop_enable").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_t_get_prop_enable)->GetFunction());
  ctx->Set(Nan::New("widget_t_get_prop_feedback").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_t_get_prop_feedback)->GetFunction());
  ctx->Set(Nan::New("widget_t_set_prop_visible").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_t_set_prop_visible)->GetFunction());
  ctx->Set(Nan::New("widget_t_get_prop_visible").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_t_get_prop_visible)->GetFunction());
  ctx->Set(Nan::New("widget_t_set_prop_sensitive").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_t_set_prop_sensitive)->GetFunction());
  ctx->Set(Nan::New("widget_t_get_prop_sensitive").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_t_get_prop_sensitive)->GetFunction());
  ctx->Set(Nan::New("widget_t_set_prop_focusable").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_t_set_prop_focusable)->GetFunction());
  ctx->Set(Nan::New("widget_t_get_prop_focusable").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_t_get_prop_focusable)->GetFunction());
  ctx->Set(Nan::New("widget_t_set_prop_with_focus_state").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_t_set_prop_with_focus_state)->GetFunction());
  ctx->Set(Nan::New("widget_t_get_prop_with_focus_state").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_t_get_prop_with_focus_state)->GetFunction());
  ctx->Set(Nan::New("widget_t_get_prop_floating").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_t_get_prop_floating)->GetFunction());
  ctx->Set(Nan::New("widget_t_get_prop_parent").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_widget_t_get_prop_parent)->GetFunction());

 return RET_OK;
}

static void get_RET_OK(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)RET_OK);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_RET_OOM(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)RET_OOM);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_RET_FAIL(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)RET_FAIL);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_RET_NOT_IMPL(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)RET_NOT_IMPL);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_RET_QUIT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)RET_QUIT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_RET_FOUND(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)RET_FOUND);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_RET_BUSY(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)RET_BUSY);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_RET_REMOVE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)RET_REMOVE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_RET_REPEAT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)RET_REPEAT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_RET_NOT_FOUND(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)RET_NOT_FOUND);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_RET_DONE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)RET_DONE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_RET_STOP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)RET_STOP);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_RET_SKIP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)RET_SKIP);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_RET_CONTINUE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)RET_CONTINUE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_RET_OBJECT_CHANGED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)RET_OBJECT_CHANGED);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_RET_ITEMS_CHANGED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)RET_ITEMS_CHANGED);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_RET_BAD_PARAMS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)RET_BAD_PARAMS);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_RET_TIMEOUT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)RET_TIMEOUT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_RET_CRC(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)RET_CRC);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_RET_IO(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)RET_IO);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_RET_EOS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)RET_EOS);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t ret_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("RET_OK").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_RET_OK)->GetFunction());
  ctx->Set(Nan::New("RET_OOM").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_RET_OOM)->GetFunction());
  ctx->Set(Nan::New("RET_FAIL").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_RET_FAIL)->GetFunction());
  ctx->Set(Nan::New("RET_NOT_IMPL").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_RET_NOT_IMPL)->GetFunction());
  ctx->Set(Nan::New("RET_QUIT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_RET_QUIT)->GetFunction());
  ctx->Set(Nan::New("RET_FOUND").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_RET_FOUND)->GetFunction());
  ctx->Set(Nan::New("RET_BUSY").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_RET_BUSY)->GetFunction());
  ctx->Set(Nan::New("RET_REMOVE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_RET_REMOVE)->GetFunction());
  ctx->Set(Nan::New("RET_REPEAT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_RET_REPEAT)->GetFunction());
  ctx->Set(Nan::New("RET_NOT_FOUND").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_RET_NOT_FOUND)->GetFunction());
  ctx->Set(Nan::New("RET_DONE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_RET_DONE)->GetFunction());
  ctx->Set(Nan::New("RET_STOP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_RET_STOP)->GetFunction());
  ctx->Set(Nan::New("RET_SKIP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_RET_SKIP)->GetFunction());
  ctx->Set(Nan::New("RET_CONTINUE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_RET_CONTINUE)->GetFunction());
  ctx->Set(Nan::New("RET_OBJECT_CHANGED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_RET_OBJECT_CHANGED)->GetFunction());
  ctx->Set(Nan::New("RET_ITEMS_CHANGED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_RET_ITEMS_CHANGED)->GetFunction());
  ctx->Set(Nan::New("RET_BAD_PARAMS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_RET_BAD_PARAMS)->GetFunction());
  ctx->Set(Nan::New("RET_TIMEOUT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_RET_TIMEOUT)->GetFunction());
  ctx->Set(Nan::New("RET_CRC").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_RET_CRC)->GetFunction());
  ctx->Set(Nan::New("RET_IO").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_RET_IO)->GetFunction());
  ctx->Set(Nan::New("RET_EOS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_RET_EOS)->GetFunction());

 return RET_OK;
}

ret_t timer_manager_t_init(v8::Local<v8::Object> ctx) {

 return RET_OK;
}

static void wrap_time_now_s(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  uint64_t ret = (uint64_t)0;
  ret = (uint64_t)time_now_s();

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_time_now_ms(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  uint64_t ret = (uint64_t)0;
  ret = (uint64_t)time_now_ms();

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t time_now_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("time_now_s").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_now_s)->GetFunction());
  ctx->Set(Nan::New("time_now_ms").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_now_ms)->GetFunction());

 return RET_OK;
}

static void get_IMAGE_DRAW_DEFAULT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)IMAGE_DRAW_DEFAULT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_IMAGE_DRAW_CENTER(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)IMAGE_DRAW_CENTER);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_IMAGE_DRAW_ICON(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)IMAGE_DRAW_ICON);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_IMAGE_DRAW_SCALE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)IMAGE_DRAW_SCALE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_IMAGE_DRAW_SCALE_AUTO(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)IMAGE_DRAW_SCALE_AUTO);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_IMAGE_DRAW_SCALE_DOWN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)IMAGE_DRAW_SCALE_DOWN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_IMAGE_DRAW_SCALE_W(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)IMAGE_DRAW_SCALE_W);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_IMAGE_DRAW_SCALE_H(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)IMAGE_DRAW_SCALE_H);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_IMAGE_DRAW_REPEAT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)IMAGE_DRAW_REPEAT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_IMAGE_DRAW_REPEAT_X(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)IMAGE_DRAW_REPEAT_X);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_IMAGE_DRAW_REPEAT_Y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)IMAGE_DRAW_REPEAT_Y);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_IMAGE_DRAW_REPEAT_Y_INVERSE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)IMAGE_DRAW_REPEAT_Y_INVERSE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_IMAGE_DRAW_PATCH9(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)IMAGE_DRAW_PATCH9);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_IMAGE_DRAW_PATCH3_X(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)IMAGE_DRAW_PATCH3_X);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_IMAGE_DRAW_PATCH3_Y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)IMAGE_DRAW_PATCH3_Y);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_IMAGE_DRAW_PATCH3_X_SCALE_Y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)IMAGE_DRAW_PATCH3_X_SCALE_Y);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_IMAGE_DRAW_PATCH3_Y_SCALE_X(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)IMAGE_DRAW_PATCH3_Y_SCALE_X);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t image_draw_type_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("IMAGE_DRAW_DEFAULT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_IMAGE_DRAW_DEFAULT)->GetFunction());
  ctx->Set(Nan::New("IMAGE_DRAW_CENTER").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_IMAGE_DRAW_CENTER)->GetFunction());
  ctx->Set(Nan::New("IMAGE_DRAW_ICON").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_IMAGE_DRAW_ICON)->GetFunction());
  ctx->Set(Nan::New("IMAGE_DRAW_SCALE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_IMAGE_DRAW_SCALE)->GetFunction());
  ctx->Set(Nan::New("IMAGE_DRAW_SCALE_AUTO").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_IMAGE_DRAW_SCALE_AUTO)->GetFunction());
  ctx->Set(Nan::New("IMAGE_DRAW_SCALE_DOWN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_IMAGE_DRAW_SCALE_DOWN)->GetFunction());
  ctx->Set(Nan::New("IMAGE_DRAW_SCALE_W").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_IMAGE_DRAW_SCALE_W)->GetFunction());
  ctx->Set(Nan::New("IMAGE_DRAW_SCALE_H").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_IMAGE_DRAW_SCALE_H)->GetFunction());
  ctx->Set(Nan::New("IMAGE_DRAW_REPEAT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_IMAGE_DRAW_REPEAT)->GetFunction());
  ctx->Set(Nan::New("IMAGE_DRAW_REPEAT_X").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_IMAGE_DRAW_REPEAT_X)->GetFunction());
  ctx->Set(Nan::New("IMAGE_DRAW_REPEAT_Y").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_IMAGE_DRAW_REPEAT_Y)->GetFunction());
  ctx->Set(Nan::New("IMAGE_DRAW_REPEAT_Y_INVERSE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_IMAGE_DRAW_REPEAT_Y_INVERSE)->GetFunction());
  ctx->Set(Nan::New("IMAGE_DRAW_PATCH9").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_IMAGE_DRAW_PATCH9)->GetFunction());
  ctx->Set(Nan::New("IMAGE_DRAW_PATCH3_X").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_IMAGE_DRAW_PATCH3_X)->GetFunction());
  ctx->Set(Nan::New("IMAGE_DRAW_PATCH3_Y").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_IMAGE_DRAW_PATCH3_Y)->GetFunction());
  ctx->Set(Nan::New("IMAGE_DRAW_PATCH3_X_SCALE_Y").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_IMAGE_DRAW_PATCH3_X_SCALE_Y)->GetFunction());
  ctx->Set(Nan::New("IMAGE_DRAW_PATCH3_Y_SCALE_X").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_IMAGE_DRAW_PATCH3_Y_SCALE_X)->GetFunction());

 return RET_OK;
}

static void wrap_canvas_get_width(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  wh_t ret = (wh_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  ret = (wh_t)canvas_get_width(c);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_get_height(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  wh_t ret = (wh_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  ret = (wh_t)canvas_get_height(c);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_get_clip_rect(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  rect_t* r = (rect_t*)jsvalue_get_pointer(ctx, argv[1], "rect_t*");
  ret = (ret_t)canvas_get_clip_rect(c, r);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_set_clip_rect(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const rect_t* r = (const rect_t*)jsvalue_get_pointer(ctx, argv[1], "const rect_t*");
  ret = (ret_t)canvas_set_clip_rect(c, r);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_set_clip_rect_ex(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const rect_t* r = (const rect_t*)jsvalue_get_pointer(ctx, argv[1], "const rect_t*");
  bool_t translate = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (ret_t)canvas_set_clip_rect_ex(c, r, translate);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_set_fill_color_str(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)canvas_set_fill_color_str(c, color);
  jsvalue_free_str(ctx, color);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_set_text_color_str(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)canvas_set_text_color_str(c, color);
  jsvalue_free_str(ctx, color);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_set_stroke_color_str(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)canvas_set_stroke_color_str(c, color);
  jsvalue_free_str(ctx, color);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_set_global_alpha(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  uint8_t alpha = (uint8_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)canvas_set_global_alpha(c, alpha);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_translate(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  xy_t dx = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t dy = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)canvas_translate(c, dx, dy);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_untranslate(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  xy_t dx = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t dy = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)canvas_untranslate(c, dx, dy);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_draw_vline(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 4) {
  ret_t ret = (ret_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)canvas_draw_vline(c, x, y, h);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_draw_hline(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 4) {
  ret_t ret = (ret_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)canvas_draw_hline(c, x, y, w);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_fill_rect(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  ret_t ret = (ret_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (ret_t)canvas_fill_rect(c, x, y, w, h);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_stroke_rect(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  ret_t ret = (ret_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (ret_t)canvas_stroke_rect(c, x, y, w, h);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_set_font(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  font_size_t size = (font_size_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)canvas_set_font(c, name, size);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_measure_utf8(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  float_t ret = (float_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const char* str = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (float_t)canvas_measure_utf8(c, str);
  jsvalue_free_str(ctx, str);

  v8::Local<v8::Number> jret= Nan::New((double)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_draw_utf8(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 4) {
  ret_t ret = (ret_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const char* str = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)canvas_draw_utf8(c, str, x, y);
  jsvalue_free_str(ctx, str);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_draw_utf8_in_rect(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const char* str = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const rect_t* r = (const rect_t*)jsvalue_get_pointer(ctx, argv[2], "const rect_t*");
  ret = (ret_t)canvas_draw_utf8_in_rect(c, str, r);
  jsvalue_free_str(ctx, str);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_draw_icon(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 4) {
  ret_t ret = (ret_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
  xy_t cx = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  xy_t cy = (xy_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)canvas_draw_icon(c, img, cx, cy);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_draw_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 4) {
  ret_t ret = (ret_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
  rect_t* src = (rect_t*)jsvalue_get_pointer(ctx, argv[2], "rect_t*");
  rect_t* dst = (rect_t*)jsvalue_get_pointer(ctx, argv[3], "rect_t*");
  ret = (ret_t)canvas_draw_image(c, img, src, dst);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_draw_image_ex(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 4) {
  ret_t ret = (ret_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
  image_draw_type_t draw_type = (image_draw_type_t)jsvalue_get_number_value(ctx, argv[2]);
  rect_t* dst = (rect_t*)jsvalue_get_pointer(ctx, argv[3], "rect_t*");
  ret = (ret_t)canvas_draw_image_ex(c, img, draw_type, dst);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_get_vgcanvas(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  vgcanvas_t* ret = NULL;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  ret = (vgcanvas_t*)canvas_get_vgcanvas(c);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  canvas_t* ret = NULL;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  ret = (canvas_t*)canvas_cast(c);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_reset(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  ret = (ret_t)canvas_reset(c);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_t_get_prop_ox(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->ox));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_canvas_t_get_prop_oy(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->oy));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_canvas_t_get_prop_font_name(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  const char* str_temp = obj->font_name;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_canvas_t_get_prop_font_size(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->font_size));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_canvas_t_get_prop_global_alpha(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->global_alpha));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t canvas_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("canvas_get_width").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_get_width)->GetFunction());
  ctx->Set(Nan::New("canvas_get_height").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_get_height)->GetFunction());
  ctx->Set(Nan::New("canvas_get_clip_rect").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_get_clip_rect)->GetFunction());
  ctx->Set(Nan::New("canvas_set_clip_rect").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_set_clip_rect)->GetFunction());
  ctx->Set(Nan::New("canvas_set_clip_rect_ex").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_set_clip_rect_ex)->GetFunction());
  ctx->Set(Nan::New("canvas_set_fill_color_str").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_set_fill_color_str)->GetFunction());
  ctx->Set(Nan::New("canvas_set_text_color_str").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_set_text_color_str)->GetFunction());
  ctx->Set(Nan::New("canvas_set_stroke_color_str").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_set_stroke_color_str)->GetFunction());
  ctx->Set(Nan::New("canvas_set_global_alpha").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_set_global_alpha)->GetFunction());
  ctx->Set(Nan::New("canvas_translate").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_translate)->GetFunction());
  ctx->Set(Nan::New("canvas_untranslate").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_untranslate)->GetFunction());
  ctx->Set(Nan::New("canvas_draw_vline").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_draw_vline)->GetFunction());
  ctx->Set(Nan::New("canvas_draw_hline").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_draw_hline)->GetFunction());
  ctx->Set(Nan::New("canvas_fill_rect").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_fill_rect)->GetFunction());
  ctx->Set(Nan::New("canvas_stroke_rect").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_stroke_rect)->GetFunction());
  ctx->Set(Nan::New("canvas_set_font").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_set_font)->GetFunction());
  ctx->Set(Nan::New("canvas_measure_utf8").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_measure_utf8)->GetFunction());
  ctx->Set(Nan::New("canvas_draw_utf8").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_draw_utf8)->GetFunction());
  ctx->Set(Nan::New("canvas_draw_utf8_in_rect").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_draw_utf8_in_rect)->GetFunction());
  ctx->Set(Nan::New("canvas_draw_icon").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_draw_icon)->GetFunction());
  ctx->Set(Nan::New("canvas_draw_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_draw_image)->GetFunction());
  ctx->Set(Nan::New("canvas_draw_image_ex").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_draw_image_ex)->GetFunction());
  ctx->Set(Nan::New("canvas_get_vgcanvas").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_get_vgcanvas)->GetFunction());
  ctx->Set(Nan::New("canvas_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_cast)->GetFunction());
  ctx->Set(Nan::New("canvas_reset").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_reset)->GetFunction());
  ctx->Set(Nan::New("canvas_t_get_prop_ox").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_t_get_prop_ox)->GetFunction());
  ctx->Set(Nan::New("canvas_t_get_prop_oy").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_t_get_prop_oy)->GetFunction());
  ctx->Set(Nan::New("canvas_t_get_prop_font_name").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_t_get_prop_font_name)->GetFunction());
  ctx->Set(Nan::New("canvas_t_get_prop_font_size").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_t_get_prop_font_size)->GetFunction());
  ctx->Set(Nan::New("canvas_t_get_prop_global_alpha").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_t_get_prop_global_alpha)->GetFunction());

 return RET_OK;
}

static void wrap_named_value_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  named_value_t* ret = NULL;
  ret = (named_value_t*)named_value_create();

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_named_value_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  named_value_t* ret = NULL;
  named_value_t* nv = (named_value_t*)jsvalue_get_pointer(ctx, argv[0], "named_value_t*");
  ret = (named_value_t*)named_value_cast(nv);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_named_value_set_name(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  named_value_t* nv = (named_value_t*)jsvalue_get_pointer(ctx, argv[0], "named_value_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)named_value_set_name(nv, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_named_value_set_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  named_value_t* nv = (named_value_t*)jsvalue_get_pointer(ctx, argv[0], "named_value_t*");
  const value_t* value = (const value_t*)jsvalue_get_pointer(ctx, argv[1], "const value_t*");
  ret = (ret_t)named_value_set_value(nv, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_named_value_get_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  value_t* ret = NULL;
  named_value_t* nv = (named_value_t*)jsvalue_get_pointer(ctx, argv[0], "named_value_t*");
  ret = (value_t*)named_value_get_value(nv);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_named_value_t_get_prop_name(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  named_value_t* obj = (named_value_t*)jsvalue_get_pointer(ctx, argv[0], "named_value_t*");

  const char* str_temp = obj->name;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t named_value_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("named_value_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_named_value_create)->GetFunction());
  ctx->Set(Nan::New("named_value_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_named_value_cast)->GetFunction());
  ctx->Set(Nan::New("named_value_set_name").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_named_value_set_name)->GetFunction());
  ctx->Set(Nan::New("named_value_set_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_named_value_set_value)->GetFunction());
  ctx->Set(Nan::New("named_value_get_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_named_value_get_value)->GetFunction());
  ctx->Set(Nan::New("named_value_t_get_prop_name").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_named_value_t_get_prop_name)->GetFunction());

 return RET_OK;
}

static void get_MIME_TYPE_APPLICATION_ENVOY(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_ENVOY).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_FRACTALS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_FRACTALS).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_FUTURESPLASH(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_FUTURESPLASH).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_HTA(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_HTA).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_JSON(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_JSON).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_UBJSON(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_UBJSON).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_MAC_BINHEX40(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_MAC_BINHEX40).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_MSWORD(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_MSWORD).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_OCTET_STREAM(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_OCTET_STREAM).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_ODA(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_ODA).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_OLESCRIPT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_OLESCRIPT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_PDF(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_PDF).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_PICS_RULES(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_PICS_RULES).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_PKCS10(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_PKCS10).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_PKIX_CRL(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_PKIX_CRL).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_POSTSCRIPT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_POSTSCRIPT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_RTF(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_RTF).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_VND_MS_EXCEL(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_VND_MS_EXCEL).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_VND_MS_OUTLOOK(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_VND_MS_OUTLOOK).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_VND_MS_PKISECCAT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_VND_MS_PKISECCAT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_VND_MS_PKISTL(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_VND_MS_PKISTL).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_VND_MS_POWERPOINT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_VND_MS_POWERPOINT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_VND_MS_PROJECT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_VND_MS_PROJECT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_VND_MS_WORKS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_VND_MS_WORKS).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_WINHLP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_WINHLP).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_BCPIO(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_BCPIO).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_CDF(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_CDF).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_COMPRESS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_COMPRESS).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_COMPRESSED(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_COMPRESSED).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_CPIO(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_CPIO).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_CSH(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_CSH).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_DIRECTOR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_DIRECTOR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_DVI(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_DVI).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_GTAR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_GTAR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_GZIP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_GZIP).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_HDF(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_HDF).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_IPHONE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_IPHONE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_JAVASCRIPT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_JAVASCRIPT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_LATEX(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_LATEX).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_MSACCESS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_MSACCESS).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_MSCARDFILE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_MSCARDFILE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_MSCLIP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_MSCLIP).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_MSDOWNLOAD(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_MSDOWNLOAD).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_MSMEDIAVIEW(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_MSMEDIAVIEW).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_MSMETAFILE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_MSMETAFILE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_MSMONEY(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_MSMONEY).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_MSPUBLISHER(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_MSPUBLISHER).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_MSSCHEDULE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_MSSCHEDULE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_MSTERMINAL(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_MSTERMINAL).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_MSWRITE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_MSWRITE).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_NETCDF(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_NETCDF).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_PERFMON(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_PERFMON).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_PKCS12(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_PKCS12).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_SH(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_SH).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_SHAR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_SHAR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_STUFFIT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_STUFFIT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_SV4CPIO(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_SV4CPIO).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_SV4CRC(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_SV4CRC).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_TAR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_TAR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_TCL(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_TCL).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_TEX(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_TEX).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_TEXINFO(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_TEXINFO).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_TROFF(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_TROFF).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_X_USTAR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_X_USTAR).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_APPLICATION_ZIP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_APPLICATION_ZIP).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_AUDIO_BASIC(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_AUDIO_BASIC).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_AUDIO_MID(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_AUDIO_MID).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_AUDIO_MPEG(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_AUDIO_MPEG).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_AUDIO_X_AIFF(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_AUDIO_X_AIFF).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_AUDIO_X_MPEGURL(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_AUDIO_X_MPEGURL).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_AUDIO_X_WAV(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_AUDIO_X_WAV).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_IMAGE_BMP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_IMAGE_BMP).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_IMAGE_CIS_COD(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_IMAGE_CIS_COD).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_IMAGE_GIF(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_IMAGE_GIF).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_IMAGE_IEF(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_IMAGE_IEF).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_IMAGE_JPEG(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_IMAGE_JPEG).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_IMAGE_PIPEG(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_IMAGE_PIPEG).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_IMAGE_SVG_XML(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_IMAGE_SVG_XML).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_IMAGE_TIFF(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_IMAGE_TIFF).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_IMAGE_X_CMX(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_IMAGE_X_CMX).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_IMAGE_X_ICON(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_IMAGE_X_ICON).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_IMAGE_X_RGB(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_IMAGE_X_RGB).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_IMAGE_X_XBITMAP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_IMAGE_X_XBITMAP).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_IMAGE_X_XPIXMAP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_IMAGE_X_XPIXMAP).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_IMAGE_X_XWINDOWDUMP(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_IMAGE_X_XWINDOWDUMP).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_MESSAGE_RFC822(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_MESSAGE_RFC822).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_TEXT_CSS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_TEXT_CSS).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_TEXT_H323(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_TEXT_H323).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_TEXT_HTML(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_TEXT_HTML).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_TEXT_IULS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_TEXT_IULS).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_TEXT_PLAIN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_TEXT_PLAIN).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_TEXT_RICHTEXT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_TEXT_RICHTEXT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_TEXT_SCRIPTLET(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_TEXT_SCRIPTLET).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_TEXT_WEBVIEWHTML(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_TEXT_WEBVIEWHTML).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_TEXT_X_COMPONENT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_TEXT_X_COMPONENT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_TEXT_X_SETEXT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_TEXT_X_SETEXT).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_TEXT_X_VCARD(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_TEXT_X_VCARD).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_VIDEO_MPEG(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_VIDEO_MPEG).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_VIDEO_QUICKTIME(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_VIDEO_QUICKTIME).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_MIME_TYPE_VIDEO_X_MSVIDEO(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)MIME_TYPE_VIDEO_X_MSVIDEO).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t MIME_TYPE_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_ENVOY").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_ENVOY)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_FRACTALS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_FRACTALS)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_FUTURESPLASH").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_FUTURESPLASH)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_HTA").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_HTA)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_JSON").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_JSON)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_UBJSON").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_UBJSON)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_MAC_BINHEX40").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_MAC_BINHEX40)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_MSWORD").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_MSWORD)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_OCTET_STREAM").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_OCTET_STREAM)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_ODA").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_ODA)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_OLESCRIPT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_OLESCRIPT)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_PDF").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_PDF)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_PICS_RULES").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_PICS_RULES)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_PKCS10").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_PKCS10)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_PKIX_CRL").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_PKIX_CRL)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_POSTSCRIPT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_POSTSCRIPT)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_RTF").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_RTF)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_VND_MS_EXCEL").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_VND_MS_EXCEL)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_VND_MS_OUTLOOK").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_VND_MS_OUTLOOK)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_VND_MS_PKISECCAT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_VND_MS_PKISECCAT)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_VND_MS_PKISTL").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_VND_MS_PKISTL)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_VND_MS_POWERPOINT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_VND_MS_POWERPOINT)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_VND_MS_PROJECT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_VND_MS_PROJECT)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_VND_MS_WORKS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_VND_MS_WORKS)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_WINHLP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_WINHLP)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_BCPIO").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_BCPIO)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_CDF").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_CDF)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_COMPRESS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_COMPRESS)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_COMPRESSED").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_COMPRESSED)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_CPIO").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_CPIO)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_CSH").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_CSH)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_DIRECTOR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_DIRECTOR)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_DVI").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_DVI)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_GTAR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_GTAR)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_GZIP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_GZIP)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_HDF").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_HDF)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_IPHONE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_IPHONE)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_JAVASCRIPT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_JAVASCRIPT)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_LATEX").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_LATEX)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_MSACCESS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_MSACCESS)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_MSCARDFILE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_MSCARDFILE)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_MSCLIP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_MSCLIP)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_MSDOWNLOAD").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_MSDOWNLOAD)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_MSMEDIAVIEW").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_MSMEDIAVIEW)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_MSMETAFILE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_MSMETAFILE)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_MSMONEY").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_MSMONEY)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_MSPUBLISHER").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_MSPUBLISHER)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_MSSCHEDULE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_MSSCHEDULE)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_MSTERMINAL").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_MSTERMINAL)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_MSWRITE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_MSWRITE)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_NETCDF").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_NETCDF)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_PERFMON").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_PERFMON)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_PKCS12").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_PKCS12)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_SH").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_SH)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_SHAR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_SHAR)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_STUFFIT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_STUFFIT)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_SV4CPIO").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_SV4CPIO)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_SV4CRC").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_SV4CRC)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_TAR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_TAR)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_TCL").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_TCL)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_TEX").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_TEX)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_TEXINFO").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_TEXINFO)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_TROFF").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_TROFF)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_X_USTAR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_X_USTAR)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_APPLICATION_ZIP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_APPLICATION_ZIP)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_AUDIO_BASIC").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_AUDIO_BASIC)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_AUDIO_MID").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_AUDIO_MID)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_AUDIO_MPEG").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_AUDIO_MPEG)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_AUDIO_X_AIFF").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_AUDIO_X_AIFF)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_AUDIO_X_MPEGURL").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_AUDIO_X_MPEGURL)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_AUDIO_X_WAV").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_AUDIO_X_WAV)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_IMAGE_BMP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_IMAGE_BMP)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_IMAGE_CIS_COD").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_IMAGE_CIS_COD)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_IMAGE_GIF").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_IMAGE_GIF)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_IMAGE_IEF").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_IMAGE_IEF)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_IMAGE_JPEG").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_IMAGE_JPEG)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_IMAGE_PIPEG").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_IMAGE_PIPEG)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_IMAGE_SVG_XML").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_IMAGE_SVG_XML)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_IMAGE_TIFF").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_IMAGE_TIFF)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_IMAGE_X_CMX").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_IMAGE_X_CMX)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_IMAGE_X_ICON").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_IMAGE_X_ICON)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_IMAGE_X_RGB").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_IMAGE_X_RGB)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_IMAGE_X_XBITMAP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_IMAGE_X_XBITMAP)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_IMAGE_X_XPIXMAP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_IMAGE_X_XPIXMAP)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_IMAGE_X_XWINDOWDUMP").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_IMAGE_X_XWINDOWDUMP)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_MESSAGE_RFC822").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_MESSAGE_RFC822)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_TEXT_CSS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_TEXT_CSS)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_TEXT_H323").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_TEXT_H323)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_TEXT_HTML").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_TEXT_HTML)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_TEXT_IULS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_TEXT_IULS)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_TEXT_PLAIN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_TEXT_PLAIN)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_TEXT_RICHTEXT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_TEXT_RICHTEXT)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_TEXT_SCRIPTLET").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_TEXT_SCRIPTLET)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_TEXT_WEBVIEWHTML").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_TEXT_WEBVIEWHTML)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_TEXT_X_COMPONENT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_TEXT_X_COMPONENT)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_TEXT_X_SETEXT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_TEXT_X_SETEXT)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_TEXT_X_VCARD").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_TEXT_X_VCARD)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_VIDEO_MPEG").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_VIDEO_MPEG)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_VIDEO_QUICKTIME").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_VIDEO_QUICKTIME)->GetFunction());
  ctx->Set(Nan::New("MIME_TYPE_VIDEO_X_MSVIDEO").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_MIME_TYPE_VIDEO_X_MSVIDEO)->GetFunction());

 return RET_OK;
}

ret_t idle_manager_t_init(v8::Local<v8::Object> ctx) {

 return RET_OK;
}

static void get_INDICATOR_DEFAULT_PAINT_AUTO(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)INDICATOR_DEFAULT_PAINT_AUTO);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_INDICATOR_DEFAULT_PAINT_FILL_DOT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)INDICATOR_DEFAULT_PAINT_FILL_DOT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_INDICATOR_DEFAULT_PAINT_STROKE_DOT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)INDICATOR_DEFAULT_PAINT_STROKE_DOT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_INDICATOR_DEFAULT_PAINT_FILL_RECT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)INDICATOR_DEFAULT_PAINT_FILL_RECT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_INDICATOR_DEFAULT_PAINT_STROKE_RECT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)INDICATOR_DEFAULT_PAINT_STROKE_RECT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t indicator_default_paint_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("INDICATOR_DEFAULT_PAINT_AUTO").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_INDICATOR_DEFAULT_PAINT_AUTO)->GetFunction());
  ctx->Set(Nan::New("INDICATOR_DEFAULT_PAINT_FILL_DOT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_INDICATOR_DEFAULT_PAINT_FILL_DOT)->GetFunction());
  ctx->Set(Nan::New("INDICATOR_DEFAULT_PAINT_STROKE_DOT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_INDICATOR_DEFAULT_PAINT_STROKE_DOT)->GetFunction());
  ctx->Set(Nan::New("INDICATOR_DEFAULT_PAINT_FILL_RECT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_INDICATOR_DEFAULT_PAINT_FILL_RECT)->GetFunction());
  ctx->Set(Nan::New("INDICATOR_DEFAULT_PAINT_STROKE_RECT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_INDICATOR_DEFAULT_PAINT_STROKE_RECT)->GetFunction());

 return RET_OK;
}

static void get_CLIP_BOARD_DATA_TYPE_NONE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)CLIP_BOARD_DATA_TYPE_NONE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_CLIP_BOARD_DATA_TYPE_TEXT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)CLIP_BOARD_DATA_TYPE_TEXT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t clip_board_data_type_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("CLIP_BOARD_DATA_TYPE_NONE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_CLIP_BOARD_DATA_TYPE_NONE)->GetFunction());
  ctx->Set(Nan::New("CLIP_BOARD_DATA_TYPE_TEXT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_CLIP_BOARD_DATA_TYPE_TEXT)->GetFunction());

 return RET_OK;
}

static void wrap_clip_board_set_text(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
  ret = (ret_t)clip_board_set_text(text);
  jsvalue_free_str(ctx, text);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_clip_board_get_text(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  const char* ret = NULL;
  ret = (const char*)clip_board_get_text();

  const char* str_temp = ret;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t clip_board_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("clip_board_set_text").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_clip_board_set_text)->GetFunction());
  ctx->Set(Nan::New("clip_board_get_text").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_clip_board_get_text)->GetFunction());

 return RET_OK;
}

static void get_EASING_LINEAR(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_LINEAR);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_QUADRATIC_IN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_QUADRATIC_IN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_QUADRATIC_OUT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_QUADRATIC_OUT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_QUADRATIC_INOUT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_QUADRATIC_INOUT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_CUBIC_IN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_CUBIC_IN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_CUBIC_OUT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_CUBIC_OUT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_SIN_IN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_SIN_IN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_SIN_OUT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_SIN_OUT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_SIN_INOUT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_SIN_INOUT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_POW_IN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_POW_IN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_POW_OUT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_POW_OUT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_POW_INOUT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_POW_INOUT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_CIRCULAR_IN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_CIRCULAR_IN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_CIRCULAR_OUT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_CIRCULAR_OUT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_CIRCULAR_INOUT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_CIRCULAR_INOUT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_ELASTIC_IN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_ELASTIC_IN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_ELASTIC_OUT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_ELASTIC_OUT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_ELASTIC_INOUT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_ELASTIC_INOUT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_BACK_IN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_BACK_IN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_BACK_OUT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_BACK_OUT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_BACK_INOUT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_BACK_INOUT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_BOUNCE_IN(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_BOUNCE_IN);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_BOUNCE_OUT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_BOUNCE_OUT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_EASING_BOUNCE_INOUT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EASING_BOUNCE_INOUT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t easing_type_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("EASING_LINEAR").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_LINEAR)->GetFunction());
  ctx->Set(Nan::New("EASING_QUADRATIC_IN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_QUADRATIC_IN)->GetFunction());
  ctx->Set(Nan::New("EASING_QUADRATIC_OUT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_QUADRATIC_OUT)->GetFunction());
  ctx->Set(Nan::New("EASING_QUADRATIC_INOUT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_QUADRATIC_INOUT)->GetFunction());
  ctx->Set(Nan::New("EASING_CUBIC_IN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_CUBIC_IN)->GetFunction());
  ctx->Set(Nan::New("EASING_CUBIC_OUT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_CUBIC_OUT)->GetFunction());
  ctx->Set(Nan::New("EASING_SIN_IN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_SIN_IN)->GetFunction());
  ctx->Set(Nan::New("EASING_SIN_OUT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_SIN_OUT)->GetFunction());
  ctx->Set(Nan::New("EASING_SIN_INOUT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_SIN_INOUT)->GetFunction());
  ctx->Set(Nan::New("EASING_POW_IN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_POW_IN)->GetFunction());
  ctx->Set(Nan::New("EASING_POW_OUT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_POW_OUT)->GetFunction());
  ctx->Set(Nan::New("EASING_POW_INOUT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_POW_INOUT)->GetFunction());
  ctx->Set(Nan::New("EASING_CIRCULAR_IN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_CIRCULAR_IN)->GetFunction());
  ctx->Set(Nan::New("EASING_CIRCULAR_OUT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_CIRCULAR_OUT)->GetFunction());
  ctx->Set(Nan::New("EASING_CIRCULAR_INOUT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_CIRCULAR_INOUT)->GetFunction());
  ctx->Set(Nan::New("EASING_ELASTIC_IN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_ELASTIC_IN)->GetFunction());
  ctx->Set(Nan::New("EASING_ELASTIC_OUT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_ELASTIC_OUT)->GetFunction());
  ctx->Set(Nan::New("EASING_ELASTIC_INOUT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_ELASTIC_INOUT)->GetFunction());
  ctx->Set(Nan::New("EASING_BACK_IN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_BACK_IN)->GetFunction());
  ctx->Set(Nan::New("EASING_BACK_OUT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_BACK_OUT)->GetFunction());
  ctx->Set(Nan::New("EASING_BACK_INOUT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_BACK_INOUT)->GetFunction());
  ctx->Set(Nan::New("EASING_BOUNCE_IN").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_BOUNCE_IN)->GetFunction());
  ctx->Set(Nan::New("EASING_BOUNCE_OUT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_BOUNCE_OUT)->GetFunction());
  ctx->Set(Nan::New("EASING_BOUNCE_INOUT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_EASING_BOUNCE_INOUT)->GetFunction());

 return RET_OK;
}

static void wrap_date_time_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  date_time_t* ret = NULL;
  ret = (date_time_t*)date_time_create();

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_date_time_set(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  date_time_t* dt = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");
  ret = (ret_t)date_time_set(dt);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_date_time_t_get_prop_second(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->second));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_date_time_t_get_prop_minute(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->minute));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_date_time_t_get_prop_hour(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->hour));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_date_time_t_get_prop_day(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->day));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_date_time_t_get_prop_wday(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->wday));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_date_time_t_get_prop_month(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->month));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_date_time_t_get_prop_year(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->year));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t date_time_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("date_time_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_date_time_create)->GetFunction());
  ctx->Set(Nan::New("date_time_set").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_date_time_set)->GetFunction());
  ctx->Set(Nan::New("date_time_t_get_prop_second").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_date_time_t_get_prop_second)->GetFunction());
  ctx->Set(Nan::New("date_time_t_get_prop_minute").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_date_time_t_get_prop_minute)->GetFunction());
  ctx->Set(Nan::New("date_time_t_get_prop_hour").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_date_time_t_get_prop_hour)->GetFunction());
  ctx->Set(Nan::New("date_time_t_get_prop_day").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_date_time_t_get_prop_day)->GetFunction());
  ctx->Set(Nan::New("date_time_t_get_prop_wday").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_date_time_t_get_prop_wday)->GetFunction());
  ctx->Set(Nan::New("date_time_t_get_prop_month").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_date_time_t_get_prop_month)->GetFunction());
  ctx->Set(Nan::New("date_time_t_get_prop_year").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_date_time_t_get_prop_year)->GetFunction());

 return RET_OK;
}

static void wrap_color_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 4) {
  color_t* ret = NULL;
  uint8_t r = (uint8_t)jsvalue_get_int_value(ctx, argv[0]);
  uint8_t b = (uint8_t)jsvalue_get_int_value(ctx, argv[1]);
  uint8_t g = (uint8_t)jsvalue_get_int_value(ctx, argv[2]);
  uint8_t a = (uint8_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (color_t*)color_create(r, b, g, a);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_color_from_str(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  color_t* ret = NULL;
  color_t* c = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  const char* str = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (color_t*)color_from_str(c, str);
  jsvalue_free_str(ctx, str);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_color_r(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  uint8_t ret = (uint8_t)0;
  color_t* c = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  ret = (uint8_t)color_r(c);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_color_g(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  uint8_t ret = (uint8_t)0;
  color_t* c = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  ret = (uint8_t)color_g(c);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_color_b(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  uint8_t ret = (uint8_t)0;
  color_t* c = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  ret = (uint8_t)color_b(c);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_color_a(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  uint8_t ret = (uint8_t)0;
  color_t* c = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  ret = (uint8_t)color_a(c);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_color_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  color_t* ret = NULL;
  color_t* color = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  ret = (color_t*)color_cast(color);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_color_t_set_prop_color(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  color_t* obj = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  uint32_t color = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  obj->color = color;

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->color));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
};

static void wrap_color_t_get_prop_color(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  color_t* obj = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->color));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t color_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("color_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_color_create)->GetFunction());
  ctx->Set(Nan::New("color_from_str").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_color_from_str)->GetFunction());
  ctx->Set(Nan::New("color_r").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_color_r)->GetFunction());
  ctx->Set(Nan::New("color_g").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_color_g)->GetFunction());
  ctx->Set(Nan::New("color_b").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_color_b)->GetFunction());
  ctx->Set(Nan::New("color_a").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_color_a)->GetFunction());
  ctx->Set(Nan::New("color_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_color_cast)->GetFunction());
  ctx->Set(Nan::New("color_t_set_prop_color").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_color_t_set_prop_color)->GetFunction());
  ctx->Set(Nan::New("color_t_get_prop_color").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_color_t_get_prop_color)->GetFunction());

 return RET_OK;
}

static void wrap_asset_info_t_get_prop_type(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->type));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_asset_info_t_get_prop_subtype(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->subtype));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_asset_info_t_get_prop_is_in_rom(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->is_in_rom));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_asset_info_t_get_prop_size(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->size));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_asset_info_t_get_prop_refcount(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->refcount));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_asset_info_t_get_prop_name(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  const char* str_temp = obj->name;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t asset_info_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("asset_info_t_get_prop_type").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_asset_info_t_get_prop_type)->GetFunction());
  ctx->Set(Nan::New("asset_info_t_get_prop_subtype").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_asset_info_t_get_prop_subtype)->GetFunction());
  ctx->Set(Nan::New("asset_info_t_get_prop_is_in_rom").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_asset_info_t_get_prop_is_in_rom)->GetFunction());
  ctx->Set(Nan::New("asset_info_t_get_prop_size").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_asset_info_t_get_prop_size)->GetFunction());
  ctx->Set(Nan::New("asset_info_t_get_prop_refcount").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_asset_info_t_get_prop_refcount)->GetFunction());
  ctx->Set(Nan::New("asset_info_t_get_prop_name").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_asset_info_t_get_prop_name)->GetFunction());

 return RET_OK;
}

static void get_ASSET_TYPE_NONE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)ASSET_TYPE_NONE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_ASSET_TYPE_FONT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)ASSET_TYPE_FONT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_ASSET_TYPE_IMAGE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)ASSET_TYPE_IMAGE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_ASSET_TYPE_STYLE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)ASSET_TYPE_STYLE);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_ASSET_TYPE_UI(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)ASSET_TYPE_UI);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_ASSET_TYPE_XML(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)ASSET_TYPE_XML);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_ASSET_TYPE_STRINGS(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)ASSET_TYPE_STRINGS);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_ASSET_TYPE_SCRIPT(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)ASSET_TYPE_SCRIPT);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_ASSET_TYPE_DATA(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)ASSET_TYPE_DATA);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t asset_type_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("ASSET_TYPE_NONE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_ASSET_TYPE_NONE)->GetFunction());
  ctx->Set(Nan::New("ASSET_TYPE_FONT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_ASSET_TYPE_FONT)->GetFunction());
  ctx->Set(Nan::New("ASSET_TYPE_IMAGE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_ASSET_TYPE_IMAGE)->GetFunction());
  ctx->Set(Nan::New("ASSET_TYPE_STYLE").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_ASSET_TYPE_STYLE)->GetFunction());
  ctx->Set(Nan::New("ASSET_TYPE_UI").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_ASSET_TYPE_UI)->GetFunction());
  ctx->Set(Nan::New("ASSET_TYPE_XML").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_ASSET_TYPE_XML)->GetFunction());
  ctx->Set(Nan::New("ASSET_TYPE_STRINGS").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_ASSET_TYPE_STRINGS)->GetFunction());
  ctx->Set(Nan::New("ASSET_TYPE_SCRIPT").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_ASSET_TYPE_SCRIPT)->GetFunction());
  ctx->Set(Nan::New("ASSET_TYPE_DATA").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(get_ASSET_TYPE_DATA)->GetFunction());

 return RET_OK;
}

static void wrap_assets_manager(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  assets_manager_t* ret = NULL;
  ret = (assets_manager_t*)assets_manager();

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_assets_manager_ref(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  asset_info_t* ret = NULL;
  assets_manager_t* am = (assets_manager_t*)jsvalue_get_pointer(ctx, argv[0], "assets_manager_t*");
  asset_type_t type = (asset_type_t)jsvalue_get_number_value(ctx, argv[1]);
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (asset_info_t*)assets_manager_ref(am, type, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_assets_manager_unref(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  assets_manager_t* am = (assets_manager_t*)jsvalue_get_pointer(ctx, argv[0], "assets_manager_t*");
  asset_info_t* info = (asset_info_t*)jsvalue_get_pointer(ctx, argv[1], "asset_info_t*");
  ret = (ret_t)assets_manager_unref(am, info);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t assets_manager_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("assets_manager").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_assets_manager)->GetFunction());
  ctx->Set(Nan::New("assets_manager_ref").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_assets_manager_ref)->GetFunction());
  ctx->Set(Nan::New("assets_manager_unref").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_assets_manager_unref)->GetFunction());

 return RET_OK;
}

static void wrap_canvas_widget_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)canvas_widget_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_canvas_widget_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)canvas_widget_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t canvas_widget_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("canvas_widget_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_widget_create)->GetFunction());
  ctx->Set(Nan::New("canvas_widget_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_canvas_widget_cast)->GetFunction());

 return RET_OK;
}

static void wrap_time_clock_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)time_clock_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_time_clock_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)time_clock_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_time_clock_set_hour(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t hour = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)time_clock_set_hour(widget, hour);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_time_clock_set_minute(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t minute = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)time_clock_set_minute(widget, minute);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_time_clock_set_second(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t second = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)time_clock_set_second(widget, second);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_time_clock_set_hour_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* hour = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)time_clock_set_hour_image(widget, hour);
  jsvalue_free_str(ctx, hour);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_time_clock_set_minute_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* minute_image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)time_clock_set_minute_image(widget, minute_image);
  jsvalue_free_str(ctx, minute_image);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_time_clock_set_second_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* second_image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)time_clock_set_second_image(widget, second_image);
  jsvalue_free_str(ctx, second_image);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_time_clock_set_bg_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* bg_image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)time_clock_set_bg_image(widget, bg_image);
  jsvalue_free_str(ctx, bg_image);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_time_clock_set_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)time_clock_set_image(widget, image);
  jsvalue_free_str(ctx, image);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_time_clock_set_hour_anchor(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* anchor_x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* anchor_y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)time_clock_set_hour_anchor(widget, anchor_x, anchor_y);
  jsvalue_free_str(ctx, anchor_x);
  jsvalue_free_str(ctx, anchor_y);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_time_clock_set_minute_anchor(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* anchor_x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* anchor_y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)time_clock_set_minute_anchor(widget, anchor_x, anchor_y);
  jsvalue_free_str(ctx, anchor_x);
  jsvalue_free_str(ctx, anchor_y);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_time_clock_set_second_anchor(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* anchor_x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* anchor_y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)time_clock_set_second_anchor(widget, anchor_x, anchor_y);
  jsvalue_free_str(ctx, anchor_x);
  jsvalue_free_str(ctx, anchor_y);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_time_clock_t_get_prop_hour(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->hour));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_time_clock_t_get_prop_minute(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->minute));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_time_clock_t_get_prop_second(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->second));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_time_clock_t_get_prop_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  const char* str_temp = obj->image;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_time_clock_t_get_prop_bg_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  const char* str_temp = obj->bg_image;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_time_clock_t_get_prop_hour_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  const char* str_temp = obj->hour_image;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_time_clock_t_get_prop_minute_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  const char* str_temp = obj->minute_image;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_time_clock_t_get_prop_second_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  const char* str_temp = obj->second_image;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_time_clock_t_get_prop_hour_anchor_x(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  const char* str_temp = obj->hour_anchor_x;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_time_clock_t_get_prop_hour_anchor_y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  const char* str_temp = obj->hour_anchor_y;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_time_clock_t_get_prop_minute_anchor_x(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  const char* str_temp = obj->minute_anchor_x;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_time_clock_t_get_prop_minute_anchor_y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  const char* str_temp = obj->minute_anchor_y;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_time_clock_t_get_prop_second_anchor_x(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  const char* str_temp = obj->second_anchor_x;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_time_clock_t_get_prop_second_anchor_y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  const char* str_temp = obj->second_anchor_y;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t time_clock_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("time_clock_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_create)->GetFunction());
  ctx->Set(Nan::New("time_clock_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_cast)->GetFunction());
  ctx->Set(Nan::New("time_clock_set_hour").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_set_hour)->GetFunction());
  ctx->Set(Nan::New("time_clock_set_minute").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_set_minute)->GetFunction());
  ctx->Set(Nan::New("time_clock_set_second").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_set_second)->GetFunction());
  ctx->Set(Nan::New("time_clock_set_hour_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_set_hour_image)->GetFunction());
  ctx->Set(Nan::New("time_clock_set_minute_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_set_minute_image)->GetFunction());
  ctx->Set(Nan::New("time_clock_set_second_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_set_second_image)->GetFunction());
  ctx->Set(Nan::New("time_clock_set_bg_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_set_bg_image)->GetFunction());
  ctx->Set(Nan::New("time_clock_set_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_set_image)->GetFunction());
  ctx->Set(Nan::New("time_clock_set_hour_anchor").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_set_hour_anchor)->GetFunction());
  ctx->Set(Nan::New("time_clock_set_minute_anchor").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_set_minute_anchor)->GetFunction());
  ctx->Set(Nan::New("time_clock_set_second_anchor").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_set_second_anchor)->GetFunction());
  ctx->Set(Nan::New("time_clock_t_get_prop_hour").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_t_get_prop_hour)->GetFunction());
  ctx->Set(Nan::New("time_clock_t_get_prop_minute").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_t_get_prop_minute)->GetFunction());
  ctx->Set(Nan::New("time_clock_t_get_prop_second").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_t_get_prop_second)->GetFunction());
  ctx->Set(Nan::New("time_clock_t_get_prop_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_t_get_prop_image)->GetFunction());
  ctx->Set(Nan::New("time_clock_t_get_prop_bg_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_t_get_prop_bg_image)->GetFunction());
  ctx->Set(Nan::New("time_clock_t_get_prop_hour_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_t_get_prop_hour_image)->GetFunction());
  ctx->Set(Nan::New("time_clock_t_get_prop_minute_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_t_get_prop_minute_image)->GetFunction());
  ctx->Set(Nan::New("time_clock_t_get_prop_second_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_t_get_prop_second_image)->GetFunction());
  ctx->Set(Nan::New("time_clock_t_get_prop_hour_anchor_x").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_t_get_prop_hour_anchor_x)->GetFunction());
  ctx->Set(Nan::New("time_clock_t_get_prop_hour_anchor_y").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_t_get_prop_hour_anchor_y)->GetFunction());
  ctx->Set(Nan::New("time_clock_t_get_prop_minute_anchor_x").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_t_get_prop_minute_anchor_x)->GetFunction());
  ctx->Set(Nan::New("time_clock_t_get_prop_minute_anchor_y").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_t_get_prop_minute_anchor_y)->GetFunction());
  ctx->Set(Nan::New("time_clock_t_get_prop_second_anchor_x").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_t_get_prop_second_anchor_x)->GetFunction());
  ctx->Set(Nan::New("time_clock_t_get_prop_second_anchor_y").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_time_clock_t_get_prop_second_anchor_y)->GetFunction());

 return RET_OK;
}

static void wrap_text_selector_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)text_selector_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_text_selector_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)text_selector_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_text_selector_reset_options(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)text_selector_reset_options(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_text_selector_count_options(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  int32_t ret = (int32_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)text_selector_count_options(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_text_selector_append_option(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  char* text = (char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)text_selector_append_option(widget, value, text);
  jsvalue_free_str(ctx, text);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_text_selector_set_options(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* options = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)text_selector_set_options(widget, options);
  jsvalue_free_str(ctx, options);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_text_selector_set_range_options(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 4) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t start = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  uint32_t nr = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
  int32_t step = (int32_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)text_selector_set_range_options(widget, start, nr, step);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_text_selector_get_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  int32_t ret = (int32_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)text_selector_get_value(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_text_selector_set_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)text_selector_set_value(widget, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_text_selector_get_text(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  const char* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (const char*)text_selector_get_text(widget);

  const char* str_temp = ret;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_text_selector_set_text(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)text_selector_set_text(widget, text);
  jsvalue_free_str(ctx, text);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_text_selector_set_selected_index(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)text_selector_set_selected_index(widget, index);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_text_selector_set_visible_nr(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t visible_nr = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)text_selector_set_visible_nr(widget, visible_nr);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_text_selector_t_get_prop_visible_nr(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  text_selector_t* obj = (text_selector_t*)jsvalue_get_pointer(ctx, argv[0], "text_selector_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->visible_nr));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_text_selector_t_get_prop_selected_index(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  text_selector_t* obj = (text_selector_t*)jsvalue_get_pointer(ctx, argv[0], "text_selector_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->selected_index));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_text_selector_t_get_prop_options(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  text_selector_t* obj = (text_selector_t*)jsvalue_get_pointer(ctx, argv[0], "text_selector_t*");

  const char* str_temp = obj->options;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t text_selector_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("text_selector_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_text_selector_create)->GetFunction());
  ctx->Set(Nan::New("text_selector_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_text_selector_cast)->GetFunction());
  ctx->Set(Nan::New("text_selector_reset_options").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_text_selector_reset_options)->GetFunction());
  ctx->Set(Nan::New("text_selector_count_options").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_text_selector_count_options)->GetFunction());
  ctx->Set(Nan::New("text_selector_append_option").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_text_selector_append_option)->GetFunction());
  ctx->Set(Nan::New("text_selector_set_options").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_text_selector_set_options)->GetFunction());
  ctx->Set(Nan::New("text_selector_set_range_options").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_text_selector_set_range_options)->GetFunction());
  ctx->Set(Nan::New("text_selector_get_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_text_selector_get_value)->GetFunction());
  ctx->Set(Nan::New("text_selector_set_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_text_selector_set_value)->GetFunction());
  ctx->Set(Nan::New("text_selector_get_text").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_text_selector_get_text)->GetFunction());
  ctx->Set(Nan::New("text_selector_set_text").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_text_selector_set_text)->GetFunction());
  ctx->Set(Nan::New("text_selector_set_selected_index").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_text_selector_set_selected_index)->GetFunction());
  ctx->Set(Nan::New("text_selector_set_visible_nr").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_text_selector_set_visible_nr)->GetFunction());
  ctx->Set(Nan::New("text_selector_t_get_prop_visible_nr").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_text_selector_t_get_prop_visible_nr)->GetFunction());
  ctx->Set(Nan::New("text_selector_t_get_prop_selected_index").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_text_selector_t_get_prop_selected_index)->GetFunction());
  ctx->Set(Nan::New("text_selector_t_get_prop_options").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_text_selector_t_get_prop_options)->GetFunction());

 return RET_OK;
}

static void wrap_prop_change_event_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  prop_change_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (prop_change_event_t*)prop_change_event_cast(event);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_prop_change_event_t_get_prop_name(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  prop_change_event_t* obj = (prop_change_event_t*)jsvalue_get_pointer(ctx, argv[0], "prop_change_event_t*");

  const char* str_temp = obj->name;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_prop_change_event_t_get_prop_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  prop_change_event_t* obj = (prop_change_event_t*)jsvalue_get_pointer(ctx, argv[0], "prop_change_event_t*");

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(obj->value)));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t prop_change_event_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("prop_change_event_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_prop_change_event_cast)->GetFunction());
  ctx->Set(Nan::New("prop_change_event_t_get_prop_name").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_prop_change_event_t_get_prop_name)->GetFunction());
  ctx->Set(Nan::New("prop_change_event_t_get_prop_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_prop_change_event_t_get_prop_value)->GetFunction());

 return RET_OK;
}

static void wrap_progress_event_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  progress_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (progress_event_t*)progress_event_cast(event);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_progress_event_t_get_prop_percent(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  progress_event_t* obj = (progress_event_t*)jsvalue_get_pointer(ctx, argv[0], "progress_event_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->percent));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t progress_event_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("progress_event_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_event_cast)->GetFunction());
  ctx->Set(Nan::New("progress_event_t_get_prop_percent").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_event_t_get_prop_percent)->GetFunction());

 return RET_OK;
}

static void wrap_switch_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)switch_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_switch_set_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t value = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)switch_set_value(widget, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_switch_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)switch_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_switch_t_get_prop_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  switch_t* obj = (switch_t*)jsvalue_get_pointer(ctx, argv[0], "switch_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->value));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_switch_t_get_prop_max_xoffset_ratio(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  switch_t* obj = (switch_t*)jsvalue_get_pointer(ctx, argv[0], "switch_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->max_xoffset_ratio));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t switch_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("switch_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_switch_create)->GetFunction());
  ctx->Set(Nan::New("switch_set_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_switch_set_value)->GetFunction());
  ctx->Set(Nan::New("switch_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_switch_cast)->GetFunction());
  ctx->Set(Nan::New("switch_t_get_prop_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_switch_t_get_prop_value)->GetFunction());
  ctx->Set(Nan::New("switch_t_get_prop_max_xoffset_ratio").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_switch_t_get_prop_max_xoffset_ratio)->GetFunction());

 return RET_OK;
}

static void wrap_slide_view_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)slide_view_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_view_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)slide_view_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_view_set_auto_play(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint16_t auto_play = (uint16_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_view_set_auto_play(widget, auto_play);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_view_set_active(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_view_set_active(widget, index);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_view_set_vertical(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t vertical = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)slide_view_set_vertical(widget, vertical);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_view_set_anim_hint(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* anim_hint = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)slide_view_set_anim_hint(widget, anim_hint);
  jsvalue_free_str(ctx, anim_hint);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_view_set_loop(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t loop = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)slide_view_set_loop(widget, loop);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_view_t_get_prop_vertical(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slide_view_t* obj = (slide_view_t*)jsvalue_get_pointer(ctx, argv[0], "slide_view_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->vertical));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slide_view_t_get_prop_auto_play(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slide_view_t* obj = (slide_view_t*)jsvalue_get_pointer(ctx, argv[0], "slide_view_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->auto_play));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slide_view_t_get_prop_loop(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slide_view_t* obj = (slide_view_t*)jsvalue_get_pointer(ctx, argv[0], "slide_view_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->loop));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slide_view_t_get_prop_anim_hint(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slide_view_t* obj = (slide_view_t*)jsvalue_get_pointer(ctx, argv[0], "slide_view_t*");

  const char* str_temp = obj->anim_hint;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t slide_view_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("slide_view_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_view_create)->GetFunction());
  ctx->Set(Nan::New("slide_view_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_view_cast)->GetFunction());
  ctx->Set(Nan::New("slide_view_set_auto_play").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_view_set_auto_play)->GetFunction());
  ctx->Set(Nan::New("slide_view_set_active").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_view_set_active)->GetFunction());
  ctx->Set(Nan::New("slide_view_set_vertical").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_view_set_vertical)->GetFunction());
  ctx->Set(Nan::New("slide_view_set_anim_hint").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_view_set_anim_hint)->GetFunction());
  ctx->Set(Nan::New("slide_view_set_loop").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_view_set_loop)->GetFunction());
  ctx->Set(Nan::New("slide_view_t_get_prop_vertical").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_view_t_get_prop_vertical)->GetFunction());
  ctx->Set(Nan::New("slide_view_t_get_prop_auto_play").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_view_t_get_prop_auto_play)->GetFunction());
  ctx->Set(Nan::New("slide_view_t_get_prop_loop").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_view_t_get_prop_loop)->GetFunction());
  ctx->Set(Nan::New("slide_view_t_get_prop_anim_hint").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_view_t_get_prop_anim_hint)->GetFunction());

 return RET_OK;
}

static void wrap_slide_indicator_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)slide_indicator_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_create_linear(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)slide_indicator_create_linear(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_create_arc(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)slide_indicator_create_arc(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)slide_indicator_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_set_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_value(widget, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_set_max(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t max = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_max(widget, max);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_set_default_paint(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  indicator_default_paint_t default_paint = (indicator_default_paint_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_default_paint(widget, default_paint);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_set_auto_hide(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint16_t auto_hide = (uint16_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_auto_hide(widget, auto_hide);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_set_margin(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t margin = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_margin(widget, margin);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_set_spacing(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t spacing = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_spacing(widget, spacing);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_set_size(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t size = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_size(widget, size);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_set_anchor(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* anchor_x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* anchor_y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)slide_indicator_set_anchor(widget, anchor_x, anchor_y);
  jsvalue_free_str(ctx, anchor_x);
  jsvalue_free_str(ctx, anchor_y);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_set_indicated_target(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* indicated_target = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_indicated_target(widget, indicated_target);
  jsvalue_free_str(ctx, indicated_target);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_t_get_prop_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->value));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_t_get_prop_max(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->max));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_t_get_prop_default_paint(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->default_paint));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_t_get_prop_auto_hide(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->auto_hide));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_t_get_prop_margin(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->margin));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_t_get_prop_spacing(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->spacing));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_t_get_prop_size(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->size));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_t_get_prop_anchor_x(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->anchor_x));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_t_get_prop_anchor_y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->anchor_y));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_t_get_prop_indicated_target(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  const char* str_temp = obj->indicated_target;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t slide_indicator_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("slide_indicator_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_create)->GetFunction());
  ctx->Set(Nan::New("slide_indicator_create_linear").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_create_linear)->GetFunction());
  ctx->Set(Nan::New("slide_indicator_create_arc").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_create_arc)->GetFunction());
  ctx->Set(Nan::New("slide_indicator_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_cast)->GetFunction());
  ctx->Set(Nan::New("slide_indicator_set_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_set_value)->GetFunction());
  ctx->Set(Nan::New("slide_indicator_set_max").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_set_max)->GetFunction());
  ctx->Set(Nan::New("slide_indicator_set_default_paint").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_set_default_paint)->GetFunction());
  ctx->Set(Nan::New("slide_indicator_set_auto_hide").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_set_auto_hide)->GetFunction());
  ctx->Set(Nan::New("slide_indicator_set_margin").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_set_margin)->GetFunction());
  ctx->Set(Nan::New("slide_indicator_set_spacing").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_set_spacing)->GetFunction());
  ctx->Set(Nan::New("slide_indicator_set_size").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_set_size)->GetFunction());
  ctx->Set(Nan::New("slide_indicator_set_anchor").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_set_anchor)->GetFunction());
  ctx->Set(Nan::New("slide_indicator_set_indicated_target").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_set_indicated_target)->GetFunction());
  ctx->Set(Nan::New("slide_indicator_t_get_prop_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_t_get_prop_value)->GetFunction());
  ctx->Set(Nan::New("slide_indicator_t_get_prop_max").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_t_get_prop_max)->GetFunction());
  ctx->Set(Nan::New("slide_indicator_t_get_prop_default_paint").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_t_get_prop_default_paint)->GetFunction());
  ctx->Set(Nan::New("slide_indicator_t_get_prop_auto_hide").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_t_get_prop_auto_hide)->GetFunction());
  ctx->Set(Nan::New("slide_indicator_t_get_prop_margin").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_t_get_prop_margin)->GetFunction());
  ctx->Set(Nan::New("slide_indicator_t_get_prop_spacing").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_t_get_prop_spacing)->GetFunction());
  ctx->Set(Nan::New("slide_indicator_t_get_prop_size").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_t_get_prop_size)->GetFunction());
  ctx->Set(Nan::New("slide_indicator_t_get_prop_anchor_x").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_t_get_prop_anchor_x)->GetFunction());
  ctx->Set(Nan::New("slide_indicator_t_get_prop_anchor_y").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_t_get_prop_anchor_y)->GetFunction());
  ctx->Set(Nan::New("slide_indicator_t_get_prop_indicated_target").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_indicator_t_get_prop_indicated_target)->GetFunction());

 return RET_OK;
}

static void wrap_slide_menu_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)slide_menu_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_menu_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)slide_menu_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_menu_set_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_menu_set_value(widget, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_menu_set_align_v(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  align_v_t align_v = (align_v_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)slide_menu_set_align_v(widget, align_v);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_menu_set_min_scale(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t min_scale = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)slide_menu_set_min_scale(widget, min_scale);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slide_menu_t_get_prop_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slide_menu_t* obj = (slide_menu_t*)jsvalue_get_pointer(ctx, argv[0], "slide_menu_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->value));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slide_menu_t_get_prop_align_v(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slide_menu_t* obj = (slide_menu_t*)jsvalue_get_pointer(ctx, argv[0], "slide_menu_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->align_v));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slide_menu_t_get_prop_min_scale(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slide_menu_t* obj = (slide_menu_t*)jsvalue_get_pointer(ctx, argv[0], "slide_menu_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->min_scale));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t slide_menu_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("slide_menu_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_menu_create)->GetFunction());
  ctx->Set(Nan::New("slide_menu_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_menu_cast)->GetFunction());
  ctx->Set(Nan::New("slide_menu_set_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_menu_set_value)->GetFunction());
  ctx->Set(Nan::New("slide_menu_set_align_v").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_menu_set_align_v)->GetFunction());
  ctx->Set(Nan::New("slide_menu_set_min_scale").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_menu_set_min_scale)->GetFunction());
  ctx->Set(Nan::New("slide_menu_t_get_prop_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_menu_t_get_prop_value)->GetFunction());
  ctx->Set(Nan::New("slide_menu_t_get_prop_align_v").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_menu_t_get_prop_align_v)->GetFunction());
  ctx->Set(Nan::New("slide_menu_t_get_prop_min_scale").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slide_menu_t_get_prop_min_scale)->GetFunction());

 return RET_OK;
}

static void wrap_scroll_view_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)scroll_view_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_scroll_view_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)scroll_view_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_scroll_view_set_virtual_w(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)scroll_view_set_virtual_w(widget, w);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_scroll_view_set_virtual_h(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)scroll_view_set_virtual_h(widget, h);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_scroll_view_set_xslidable(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t xslidable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)scroll_view_set_xslidable(widget, xslidable);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_scroll_view_set_yslidable(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t yslidable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)scroll_view_set_yslidable(widget, yslidable);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_scroll_view_set_offset(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t xoffset = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  int32_t yoffset = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)scroll_view_set_offset(widget, xoffset, yoffset);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_scroll_view_set_speed_scale(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t xspeed_scale = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t yspeed_scale = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)scroll_view_set_speed_scale(widget, xspeed_scale, yspeed_scale);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_scroll_view_scroll_to(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 4) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t xoffset_end = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  int32_t yoffset_end = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  int32_t duration = (int32_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)scroll_view_scroll_to(widget, xoffset_end, yoffset_end, duration);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_scroll_view_scroll_delta_to(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 4) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t xoffset_delta = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  int32_t yoffset_delta = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  int32_t duration = (int32_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)scroll_view_scroll_delta_to(widget, xoffset_delta, yoffset_delta, duration);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_scroll_view_t_get_prop_virtual_w(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->virtual_w));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_scroll_view_t_get_prop_virtual_h(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->virtual_h));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_scroll_view_t_get_prop_xoffset(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->xoffset));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_scroll_view_t_get_prop_yoffset(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->yoffset));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_scroll_view_t_get_prop_xspeed_scale(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->xspeed_scale));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_scroll_view_t_get_prop_yspeed_scale(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->yspeed_scale));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_scroll_view_t_get_prop_xslidable(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->xslidable));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_scroll_view_t_get_prop_yslidable(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->yslidable));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t scroll_view_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("scroll_view_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_view_create)->GetFunction());
  ctx->Set(Nan::New("scroll_view_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_view_cast)->GetFunction());
  ctx->Set(Nan::New("scroll_view_set_virtual_w").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_view_set_virtual_w)->GetFunction());
  ctx->Set(Nan::New("scroll_view_set_virtual_h").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_view_set_virtual_h)->GetFunction());
  ctx->Set(Nan::New("scroll_view_set_xslidable").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_view_set_xslidable)->GetFunction());
  ctx->Set(Nan::New("scroll_view_set_yslidable").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_view_set_yslidable)->GetFunction());
  ctx->Set(Nan::New("scroll_view_set_offset").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_view_set_offset)->GetFunction());
  ctx->Set(Nan::New("scroll_view_set_speed_scale").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_view_set_speed_scale)->GetFunction());
  ctx->Set(Nan::New("scroll_view_scroll_to").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_view_scroll_to)->GetFunction());
  ctx->Set(Nan::New("scroll_view_scroll_delta_to").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_view_scroll_delta_to)->GetFunction());
  ctx->Set(Nan::New("scroll_view_t_get_prop_virtual_w").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_view_t_get_prop_virtual_w)->GetFunction());
  ctx->Set(Nan::New("scroll_view_t_get_prop_virtual_h").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_view_t_get_prop_virtual_h)->GetFunction());
  ctx->Set(Nan::New("scroll_view_t_get_prop_xoffset").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_view_t_get_prop_xoffset)->GetFunction());
  ctx->Set(Nan::New("scroll_view_t_get_prop_yoffset").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_view_t_get_prop_yoffset)->GetFunction());
  ctx->Set(Nan::New("scroll_view_t_get_prop_xspeed_scale").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_view_t_get_prop_xspeed_scale)->GetFunction());
  ctx->Set(Nan::New("scroll_view_t_get_prop_yspeed_scale").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_view_t_get_prop_yspeed_scale)->GetFunction());
  ctx->Set(Nan::New("scroll_view_t_get_prop_xslidable").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_view_t_get_prop_xslidable)->GetFunction());
  ctx->Set(Nan::New("scroll_view_t_get_prop_yslidable").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_view_t_get_prop_yslidable)->GetFunction());

 return RET_OK;
}

static void wrap_scroll_bar_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)scroll_bar_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_scroll_bar_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)scroll_bar_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_scroll_bar_create_mobile(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)scroll_bar_create_mobile(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_scroll_bar_create_desktop(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)scroll_bar_create_desktop(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_scroll_bar_set_params(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t virtual_size = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  int32_t row = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)scroll_bar_set_params(widget, virtual_size, row);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_scroll_bar_scroll_to(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  int32_t duration = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)scroll_bar_scroll_to(widget, value, duration);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_scroll_bar_set_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)scroll_bar_set_value(widget, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_scroll_bar_add_delta(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t delta = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)scroll_bar_add_delta(widget, delta);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_scroll_bar_scroll_delta(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t delta = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)scroll_bar_scroll_delta(widget, delta);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_scroll_bar_set_value_only(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)scroll_bar_set_value_only(widget, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_scroll_bar_is_mobile(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  bool_t ret = (bool_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)scroll_bar_is_mobile(widget);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_scroll_bar_t_get_prop_virtual_size(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  scroll_bar_t* obj = (scroll_bar_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_bar_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->virtual_size));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_scroll_bar_t_get_prop_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  scroll_bar_t* obj = (scroll_bar_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_bar_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->value));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_scroll_bar_t_get_prop_row(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  scroll_bar_t* obj = (scroll_bar_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_bar_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->row));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_scroll_bar_t_get_prop_animatable(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  scroll_bar_t* obj = (scroll_bar_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_bar_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->animatable));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t scroll_bar_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("scroll_bar_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_bar_create)->GetFunction());
  ctx->Set(Nan::New("scroll_bar_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_bar_cast)->GetFunction());
  ctx->Set(Nan::New("scroll_bar_create_mobile").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_bar_create_mobile)->GetFunction());
  ctx->Set(Nan::New("scroll_bar_create_desktop").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_bar_create_desktop)->GetFunction());
  ctx->Set(Nan::New("scroll_bar_set_params").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_bar_set_params)->GetFunction());
  ctx->Set(Nan::New("scroll_bar_scroll_to").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_bar_scroll_to)->GetFunction());
  ctx->Set(Nan::New("scroll_bar_set_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_bar_set_value)->GetFunction());
  ctx->Set(Nan::New("scroll_bar_add_delta").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_bar_add_delta)->GetFunction());
  ctx->Set(Nan::New("scroll_bar_scroll_delta").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_bar_scroll_delta)->GetFunction());
  ctx->Set(Nan::New("scroll_bar_set_value_only").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_bar_set_value_only)->GetFunction());
  ctx->Set(Nan::New("scroll_bar_is_mobile").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_bar_is_mobile)->GetFunction());
  ctx->Set(Nan::New("scroll_bar_t_get_prop_virtual_size").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_bar_t_get_prop_virtual_size)->GetFunction());
  ctx->Set(Nan::New("scroll_bar_t_get_prop_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_bar_t_get_prop_value)->GetFunction());
  ctx->Set(Nan::New("scroll_bar_t_get_prop_row").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_bar_t_get_prop_row)->GetFunction());
  ctx->Set(Nan::New("scroll_bar_t_get_prop_animatable").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_scroll_bar_t_get_prop_animatable)->GetFunction());

 return RET_OK;
}

static void wrap_list_view_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)list_view_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_list_view_set_item_height(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t item_height = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)list_view_set_item_height(widget, item_height);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_list_view_set_default_item_height(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t default_item_height = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)list_view_set_default_item_height(widget, default_item_height);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_list_view_set_auto_hide_scroll_bar(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t auto_hide_scroll_bar = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)list_view_set_auto_hide_scroll_bar(widget, auto_hide_scroll_bar);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_list_view_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)list_view_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_list_view_t_get_prop_item_height(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  list_view_t* obj = (list_view_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->item_height));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_list_view_t_get_prop_default_item_height(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  list_view_t* obj = (list_view_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->default_item_height));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_list_view_t_get_prop_auto_hide_scroll_bar(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  list_view_t* obj = (list_view_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->auto_hide_scroll_bar));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t list_view_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("list_view_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_list_view_create)->GetFunction());
  ctx->Set(Nan::New("list_view_set_item_height").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_list_view_set_item_height)->GetFunction());
  ctx->Set(Nan::New("list_view_set_default_item_height").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_list_view_set_default_item_height)->GetFunction());
  ctx->Set(Nan::New("list_view_set_auto_hide_scroll_bar").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_list_view_set_auto_hide_scroll_bar)->GetFunction());
  ctx->Set(Nan::New("list_view_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_list_view_cast)->GetFunction());
  ctx->Set(Nan::New("list_view_t_get_prop_item_height").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_list_view_t_get_prop_item_height)->GetFunction());
  ctx->Set(Nan::New("list_view_t_get_prop_default_item_height").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_list_view_t_get_prop_default_item_height)->GetFunction());
  ctx->Set(Nan::New("list_view_t_get_prop_auto_hide_scroll_bar").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_list_view_t_get_prop_auto_hide_scroll_bar)->GetFunction());

 return RET_OK;
}

static void wrap_list_view_h_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)list_view_h_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_list_view_h_set_item_width(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t item_width = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)list_view_h_set_item_width(widget, item_width);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_list_view_h_set_spacing(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t spacing = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)list_view_h_set_spacing(widget, spacing);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_list_view_h_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)list_view_h_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_list_view_h_t_get_prop_item_width(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  list_view_h_t* obj = (list_view_h_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_h_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->item_width));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_list_view_h_t_get_prop_spacing(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  list_view_h_t* obj = (list_view_h_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_h_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->spacing));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t list_view_h_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("list_view_h_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_list_view_h_create)->GetFunction());
  ctx->Set(Nan::New("list_view_h_set_item_width").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_list_view_h_set_item_width)->GetFunction());
  ctx->Set(Nan::New("list_view_h_set_spacing").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_list_view_h_set_spacing)->GetFunction());
  ctx->Set(Nan::New("list_view_h_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_list_view_h_cast)->GetFunction());
  ctx->Set(Nan::New("list_view_h_t_get_prop_item_width").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_list_view_h_t_get_prop_item_width)->GetFunction());
  ctx->Set(Nan::New("list_view_h_t_get_prop_spacing").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_list_view_h_t_get_prop_spacing)->GetFunction());

 return RET_OK;
}

static void wrap_list_item_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)list_item_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_list_item_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)list_item_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t list_item_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("list_item_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_list_item_create)->GetFunction());
  ctx->Set(Nan::New("list_item_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_list_item_cast)->GetFunction());

 return RET_OK;
}

static void wrap_hscroll_label_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)hscroll_label_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_hscroll_label_set_lull(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t lull = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_lull(widget, lull);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_hscroll_label_set_duration(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t duration = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_duration(widget, duration);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_hscroll_label_set_only_focus(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t only_focus = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_only_focus(widget, only_focus);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_hscroll_label_set_only_parent_focus(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t only_parent_focus = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_only_parent_focus(widget, only_parent_focus);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_hscroll_label_set_loop(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t loop = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_loop(widget, loop);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_hscroll_label_set_yoyo(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t yoyo = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_yoyo(widget, yoyo);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_hscroll_label_set_ellipses(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t ellipses = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_ellipses(widget, ellipses);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_hscroll_label_set_xoffset(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t xoffset = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_xoffset(widget, xoffset);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_hscroll_label_start(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)hscroll_label_start(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_hscroll_label_stop(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)hscroll_label_stop(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_hscroll_label_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)hscroll_label_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_hscroll_label_t_get_prop_only_focus(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->only_focus));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_hscroll_label_t_get_prop_only_parent_focus(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->only_parent_focus));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_hscroll_label_t_get_prop_loop(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->loop));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_hscroll_label_t_get_prop_yoyo(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->yoyo));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_hscroll_label_t_get_prop_ellipses(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->ellipses));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_hscroll_label_t_get_prop_lull(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->lull));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_hscroll_label_t_get_prop_duration(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->duration));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_hscroll_label_t_get_prop_xoffset(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->xoffset));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_hscroll_label_t_get_prop_text_w(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->text_w));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t hscroll_label_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("hscroll_label_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_hscroll_label_create)->GetFunction());
  ctx->Set(Nan::New("hscroll_label_set_lull").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_hscroll_label_set_lull)->GetFunction());
  ctx->Set(Nan::New("hscroll_label_set_duration").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_hscroll_label_set_duration)->GetFunction());
  ctx->Set(Nan::New("hscroll_label_set_only_focus").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_hscroll_label_set_only_focus)->GetFunction());
  ctx->Set(Nan::New("hscroll_label_set_only_parent_focus").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_hscroll_label_set_only_parent_focus)->GetFunction());
  ctx->Set(Nan::New("hscroll_label_set_loop").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_hscroll_label_set_loop)->GetFunction());
  ctx->Set(Nan::New("hscroll_label_set_yoyo").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_hscroll_label_set_yoyo)->GetFunction());
  ctx->Set(Nan::New("hscroll_label_set_ellipses").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_hscroll_label_set_ellipses)->GetFunction());
  ctx->Set(Nan::New("hscroll_label_set_xoffset").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_hscroll_label_set_xoffset)->GetFunction());
  ctx->Set(Nan::New("hscroll_label_start").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_hscroll_label_start)->GetFunction());
  ctx->Set(Nan::New("hscroll_label_stop").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_hscroll_label_stop)->GetFunction());
  ctx->Set(Nan::New("hscroll_label_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_hscroll_label_cast)->GetFunction());
  ctx->Set(Nan::New("hscroll_label_t_get_prop_only_focus").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_hscroll_label_t_get_prop_only_focus)->GetFunction());
  ctx->Set(Nan::New("hscroll_label_t_get_prop_only_parent_focus").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_hscroll_label_t_get_prop_only_parent_focus)->GetFunction());
  ctx->Set(Nan::New("hscroll_label_t_get_prop_loop").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_hscroll_label_t_get_prop_loop)->GetFunction());
  ctx->Set(Nan::New("hscroll_label_t_get_prop_yoyo").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_hscroll_label_t_get_prop_yoyo)->GetFunction());
  ctx->Set(Nan::New("hscroll_label_t_get_prop_ellipses").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_hscroll_label_t_get_prop_ellipses)->GetFunction());
  ctx->Set(Nan::New("hscroll_label_t_get_prop_lull").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_hscroll_label_t_get_prop_lull)->GetFunction());
  ctx->Set(Nan::New("hscroll_label_t_get_prop_duration").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_hscroll_label_t_get_prop_duration)->GetFunction());
  ctx->Set(Nan::New("hscroll_label_t_get_prop_xoffset").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_hscroll_label_t_get_prop_xoffset)->GetFunction());
  ctx->Set(Nan::New("hscroll_label_t_get_prop_text_w").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_hscroll_label_t_get_prop_text_w)->GetFunction());

 return RET_OK;
}

static void wrap_rich_text_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)rich_text_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_rich_text_set_text(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)rich_text_set_text(widget, text);
  jsvalue_free_str(ctx, text);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_rich_text_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)rich_text_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_rich_text_t_get_prop_line_gap(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  rich_text_t* obj = (rich_text_t*)jsvalue_get_pointer(ctx, argv[0], "rich_text_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->line_gap));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_rich_text_t_get_prop_margin(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  rich_text_t* obj = (rich_text_t*)jsvalue_get_pointer(ctx, argv[0], "rich_text_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->margin));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t rich_text_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("rich_text_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_rich_text_create)->GetFunction());
  ctx->Set(Nan::New("rich_text_set_text").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_rich_text_set_text)->GetFunction());
  ctx->Set(Nan::New("rich_text_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_rich_text_cast)->GetFunction());
  ctx->Set(Nan::New("rich_text_t_get_prop_line_gap").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_rich_text_t_get_prop_line_gap)->GetFunction());
  ctx->Set(Nan::New("rich_text_t_get_prop_margin").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_rich_text_t_get_prop_margin)->GetFunction());

 return RET_OK;
}

static void wrap_progress_circle_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)progress_circle_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_progress_circle_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)progress_circle_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_progress_circle_set_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)progress_circle_set_value(widget, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_progress_circle_set_max(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t max = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)progress_circle_set_max(widget, max);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_progress_circle_set_line_width(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t line_width = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)progress_circle_set_line_width(widget, line_width);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_progress_circle_set_start_angle(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t start_angle = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)progress_circle_set_start_angle(widget, start_angle);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_progress_circle_set_unit(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* unit = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)progress_circle_set_unit(widget, unit);
  jsvalue_free_str(ctx, unit);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_progress_circle_set_show_text(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t show_text = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)progress_circle_set_show_text(widget, show_text);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_progress_circle_set_counter_clock_wise(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t counter_clock_wise = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)progress_circle_set_counter_clock_wise(widget, counter_clock_wise);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_progress_circle_t_get_prop_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  progress_circle_t* obj = (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->value));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_progress_circle_t_get_prop_max(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  progress_circle_t* obj = (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->max));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_progress_circle_t_get_prop_start_angle(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  progress_circle_t* obj = (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->start_angle));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_progress_circle_t_get_prop_line_width(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  progress_circle_t* obj = (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->line_width));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_progress_circle_t_get_prop_unit(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  progress_circle_t* obj = (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  const char* str_temp = obj->unit;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_progress_circle_t_get_prop_counter_clock_wise(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  progress_circle_t* obj = (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->counter_clock_wise));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_progress_circle_t_get_prop_show_text(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  progress_circle_t* obj = (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->show_text));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t progress_circle_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("progress_circle_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_circle_create)->GetFunction());
  ctx->Set(Nan::New("progress_circle_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_circle_cast)->GetFunction());
  ctx->Set(Nan::New("progress_circle_set_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_circle_set_value)->GetFunction());
  ctx->Set(Nan::New("progress_circle_set_max").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_circle_set_max)->GetFunction());
  ctx->Set(Nan::New("progress_circle_set_line_width").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_circle_set_line_width)->GetFunction());
  ctx->Set(Nan::New("progress_circle_set_start_angle").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_circle_set_start_angle)->GetFunction());
  ctx->Set(Nan::New("progress_circle_set_unit").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_circle_set_unit)->GetFunction());
  ctx->Set(Nan::New("progress_circle_set_show_text").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_circle_set_show_text)->GetFunction());
  ctx->Set(Nan::New("progress_circle_set_counter_clock_wise").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_circle_set_counter_clock_wise)->GetFunction());
  ctx->Set(Nan::New("progress_circle_t_get_prop_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_circle_t_get_prop_value)->GetFunction());
  ctx->Set(Nan::New("progress_circle_t_get_prop_max").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_circle_t_get_prop_max)->GetFunction());
  ctx->Set(Nan::New("progress_circle_t_get_prop_start_angle").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_circle_t_get_prop_start_angle)->GetFunction());
  ctx->Set(Nan::New("progress_circle_t_get_prop_line_width").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_circle_t_get_prop_line_width)->GetFunction());
  ctx->Set(Nan::New("progress_circle_t_get_prop_unit").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_circle_t_get_prop_unit)->GetFunction());
  ctx->Set(Nan::New("progress_circle_t_get_prop_counter_clock_wise").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_circle_t_get_prop_counter_clock_wise)->GetFunction());
  ctx->Set(Nan::New("progress_circle_t_get_prop_show_text").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_circle_t_get_prop_show_text)->GetFunction());

 return RET_OK;
}

static void wrap_mledit_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)mledit_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_mledit_set_readonly(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t readonly = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)mledit_set_readonly(widget, readonly);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_mledit_set_focus(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t focus = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)mledit_set_focus(widget, focus);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_mledit_set_wrap_word(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t wrap_word = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)mledit_set_wrap_word(widget, wrap_word);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_mledit_set_max_lines(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t max_lines = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)mledit_set_max_lines(widget, max_lines);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_mledit_set_input_tips(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* tips = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)mledit_set_input_tips(widget, tips);
  jsvalue_free_str(ctx, tips);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_mledit_set_cursor(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t cursor = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)mledit_set_cursor(widget, cursor);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_mledit_set_scroll_line(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t scroll_line = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)mledit_set_scroll_line(widget, scroll_line);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_mledit_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)mledit_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_mledit_t_get_prop_readonly(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->readonly));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_mledit_t_get_prop_tips(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  const char* str_temp = obj->tips;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_mledit_t_get_prop_wrap_word(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->wrap_word));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_mledit_t_get_prop_max_lines(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->max_lines));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_mledit_t_get_prop_scroll_line(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->scroll_line));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t mledit_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("mledit_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_mledit_create)->GetFunction());
  ctx->Set(Nan::New("mledit_set_readonly").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_mledit_set_readonly)->GetFunction());
  ctx->Set(Nan::New("mledit_set_focus").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_mledit_set_focus)->GetFunction());
  ctx->Set(Nan::New("mledit_set_wrap_word").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_mledit_set_wrap_word)->GetFunction());
  ctx->Set(Nan::New("mledit_set_max_lines").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_mledit_set_max_lines)->GetFunction());
  ctx->Set(Nan::New("mledit_set_input_tips").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_mledit_set_input_tips)->GetFunction());
  ctx->Set(Nan::New("mledit_set_cursor").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_mledit_set_cursor)->GetFunction());
  ctx->Set(Nan::New("mledit_set_scroll_line").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_mledit_set_scroll_line)->GetFunction());
  ctx->Set(Nan::New("mledit_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_mledit_cast)->GetFunction());
  ctx->Set(Nan::New("mledit_t_get_prop_readonly").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_mledit_t_get_prop_readonly)->GetFunction());
  ctx->Set(Nan::New("mledit_t_get_prop_tips").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_mledit_t_get_prop_tips)->GetFunction());
  ctx->Set(Nan::New("mledit_t_get_prop_wrap_word").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_mledit_t_get_prop_wrap_word)->GetFunction());
  ctx->Set(Nan::New("mledit_t_get_prop_max_lines").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_mledit_t_get_prop_max_lines)->GetFunction());
  ctx->Set(Nan::New("mledit_t_get_prop_scroll_line").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_mledit_t_get_prop_scroll_line)->GetFunction());

 return RET_OK;
}

static void wrap_line_number_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)line_number_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_line_number_set_top_margin(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t top_margin = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)line_number_set_top_margin(widget, top_margin);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_line_number_set_bottom_margin(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t bottom_margin = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)line_number_set_bottom_margin(widget, bottom_margin);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_line_number_set_line_height(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t line_height = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)line_number_set_line_height(widget, line_height);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_line_number_set_yoffset(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t yoffset = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)line_number_set_yoffset(widget, yoffset);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_line_number_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)line_number_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t line_number_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("line_number_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_line_number_create)->GetFunction());
  ctx->Set(Nan::New("line_number_set_top_margin").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_line_number_set_top_margin)->GetFunction());
  ctx->Set(Nan::New("line_number_set_bottom_margin").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_line_number_set_bottom_margin)->GetFunction());
  ctx->Set(Nan::New("line_number_set_line_height").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_line_number_set_line_height)->GetFunction());
  ctx->Set(Nan::New("line_number_set_yoffset").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_line_number_set_yoffset)->GetFunction());
  ctx->Set(Nan::New("line_number_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_line_number_cast)->GetFunction());

 return RET_OK;
}

static void wrap_image_value_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)image_value_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_value_set_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)image_value_set_image(widget, image);
  jsvalue_free_str(ctx, image);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_value_set_format(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* format = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)image_value_set_format(widget, format);
  jsvalue_free_str(ctx, format);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_value_set_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)image_value_set_value(widget, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_value_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)image_value_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_value_t_get_prop_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_value_t* obj = (image_value_t*)jsvalue_get_pointer(ctx, argv[0], "image_value_t*");

  const char* str_temp = obj->image;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_value_t_get_prop_format(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_value_t* obj = (image_value_t*)jsvalue_get_pointer(ctx, argv[0], "image_value_t*");

  const char* str_temp = obj->format;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_value_t_get_prop_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_value_t* obj = (image_value_t*)jsvalue_get_pointer(ctx, argv[0], "image_value_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->value));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t image_value_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("image_value_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_value_create)->GetFunction());
  ctx->Set(Nan::New("image_value_set_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_value_set_image)->GetFunction());
  ctx->Set(Nan::New("image_value_set_format").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_value_set_format)->GetFunction());
  ctx->Set(Nan::New("image_value_set_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_value_set_value)->GetFunction());
  ctx->Set(Nan::New("image_value_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_value_cast)->GetFunction());
  ctx->Set(Nan::New("image_value_t_get_prop_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_value_t_get_prop_image)->GetFunction());
  ctx->Set(Nan::New("image_value_t_get_prop_format").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_value_t_get_prop_format)->GetFunction());
  ctx->Set(Nan::New("image_value_t_get_prop_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_value_t_get_prop_value)->GetFunction());

 return RET_OK;
}

static void wrap_image_animation_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)image_animation_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_animation_set_loop(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t loop = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)image_animation_set_loop(widget, loop);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_animation_set_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)image_animation_set_image(widget, image);
  jsvalue_free_str(ctx, image);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_animation_set_interval(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t interval = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)image_animation_set_interval(widget, interval);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_animation_set_delay(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t delay = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)image_animation_set_delay(widget, delay);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_animation_set_auto_play(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t auto_play = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)image_animation_set_auto_play(widget, auto_play);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_animation_set_sequence(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* sequence = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)image_animation_set_sequence(widget, sequence);
  jsvalue_free_str(ctx, sequence);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_animation_set_range_sequence(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t start_index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  uint32_t end_index = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)image_animation_set_range_sequence(widget, start_index, end_index);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_animation_play(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)image_animation_play(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_animation_stop(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)image_animation_stop(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_animation_pause(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)image_animation_pause(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_animation_next(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)image_animation_next(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_animation_set_format(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* format = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)image_animation_set_format(widget, format);
  jsvalue_free_str(ctx, format);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_animation_set_unload_after_paint(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t unload_after_paint = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)image_animation_set_unload_after_paint(widget, unload_after_paint);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_animation_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)image_animation_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_animation_t_get_prop_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  const char* str_temp = obj->image;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_animation_t_get_prop_sequence(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  const char* str_temp = obj->sequence;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_animation_t_get_prop_start_index(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->start_index));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_animation_t_get_prop_end_index(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->end_index));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_animation_t_get_prop_loop(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->loop));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_animation_t_get_prop_auto_play(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->auto_play));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_animation_t_get_prop_unload_after_paint(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->unload_after_paint));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_animation_t_get_prop_format(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  const char* str_temp = obj->format;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_animation_t_get_prop_interval(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->interval));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_animation_t_get_prop_delay(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->delay));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t image_animation_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("image_animation_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_create)->GetFunction());
  ctx->Set(Nan::New("image_animation_set_loop").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_set_loop)->GetFunction());
  ctx->Set(Nan::New("image_animation_set_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_set_image)->GetFunction());
  ctx->Set(Nan::New("image_animation_set_interval").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_set_interval)->GetFunction());
  ctx->Set(Nan::New("image_animation_set_delay").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_set_delay)->GetFunction());
  ctx->Set(Nan::New("image_animation_set_auto_play").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_set_auto_play)->GetFunction());
  ctx->Set(Nan::New("image_animation_set_sequence").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_set_sequence)->GetFunction());
  ctx->Set(Nan::New("image_animation_set_range_sequence").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_set_range_sequence)->GetFunction());
  ctx->Set(Nan::New("image_animation_play").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_play)->GetFunction());
  ctx->Set(Nan::New("image_animation_stop").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_stop)->GetFunction());
  ctx->Set(Nan::New("image_animation_pause").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_pause)->GetFunction());
  ctx->Set(Nan::New("image_animation_next").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_next)->GetFunction());
  ctx->Set(Nan::New("image_animation_set_format").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_set_format)->GetFunction());
  ctx->Set(Nan::New("image_animation_set_unload_after_paint").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_set_unload_after_paint)->GetFunction());
  ctx->Set(Nan::New("image_animation_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_cast)->GetFunction());
  ctx->Set(Nan::New("image_animation_t_get_prop_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_t_get_prop_image)->GetFunction());
  ctx->Set(Nan::New("image_animation_t_get_prop_sequence").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_t_get_prop_sequence)->GetFunction());
  ctx->Set(Nan::New("image_animation_t_get_prop_start_index").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_t_get_prop_start_index)->GetFunction());
  ctx->Set(Nan::New("image_animation_t_get_prop_end_index").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_t_get_prop_end_index)->GetFunction());
  ctx->Set(Nan::New("image_animation_t_get_prop_loop").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_t_get_prop_loop)->GetFunction());
  ctx->Set(Nan::New("image_animation_t_get_prop_auto_play").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_t_get_prop_auto_play)->GetFunction());
  ctx->Set(Nan::New("image_animation_t_get_prop_unload_after_paint").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_t_get_prop_unload_after_paint)->GetFunction());
  ctx->Set(Nan::New("image_animation_t_get_prop_format").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_t_get_prop_format)->GetFunction());
  ctx->Set(Nan::New("image_animation_t_get_prop_interval").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_t_get_prop_interval)->GetFunction());
  ctx->Set(Nan::New("image_animation_t_get_prop_delay").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_animation_t_get_prop_delay)->GetFunction());

 return RET_OK;
}

static void wrap_guage_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)guage_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_guage_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)guage_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_guage_set_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)guage_set_image(widget, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_guage_set_draw_type(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  image_draw_type_t draw_type = (image_draw_type_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)guage_set_draw_type(widget, draw_type);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_guage_t_get_prop_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  guage_t* obj = (guage_t*)jsvalue_get_pointer(ctx, argv[0], "guage_t*");

  const char* str_temp = obj->image;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_guage_t_get_prop_draw_type(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  guage_t* obj = (guage_t*)jsvalue_get_pointer(ctx, argv[0], "guage_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->draw_type));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t guage_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("guage_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_guage_create)->GetFunction());
  ctx->Set(Nan::New("guage_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_guage_cast)->GetFunction());
  ctx->Set(Nan::New("guage_set_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_guage_set_image)->GetFunction());
  ctx->Set(Nan::New("guage_set_draw_type").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_guage_set_draw_type)->GetFunction());
  ctx->Set(Nan::New("guage_t_get_prop_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_guage_t_get_prop_image)->GetFunction());
  ctx->Set(Nan::New("guage_t_get_prop_draw_type").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_guage_t_get_prop_draw_type)->GetFunction());

 return RET_OK;
}

static void wrap_guage_pointer_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)guage_pointer_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_guage_pointer_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)guage_pointer_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_guage_pointer_set_angle(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t angle = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)guage_pointer_set_angle(widget, angle);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_guage_pointer_set_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)guage_pointer_set_image(widget, image);
  jsvalue_free_str(ctx, image);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_guage_pointer_set_anchor(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* anchor_x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* anchor_y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)guage_pointer_set_anchor(widget, anchor_x, anchor_y);
  jsvalue_free_str(ctx, anchor_x);
  jsvalue_free_str(ctx, anchor_y);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_guage_pointer_t_get_prop_angle(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  guage_pointer_t* obj = (guage_pointer_t*)jsvalue_get_pointer(ctx, argv[0], "guage_pointer_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->angle));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_guage_pointer_t_get_prop_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  guage_pointer_t* obj = (guage_pointer_t*)jsvalue_get_pointer(ctx, argv[0], "guage_pointer_t*");

  const char* str_temp = obj->image;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_guage_pointer_t_get_prop_anchor_x(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  guage_pointer_t* obj = (guage_pointer_t*)jsvalue_get_pointer(ctx, argv[0], "guage_pointer_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->anchor_x));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_guage_pointer_t_get_prop_anchor_y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  guage_pointer_t* obj = (guage_pointer_t*)jsvalue_get_pointer(ctx, argv[0], "guage_pointer_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->anchor_y));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t guage_pointer_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("guage_pointer_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_guage_pointer_create)->GetFunction());
  ctx->Set(Nan::New("guage_pointer_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_guage_pointer_cast)->GetFunction());
  ctx->Set(Nan::New("guage_pointer_set_angle").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_guage_pointer_set_angle)->GetFunction());
  ctx->Set(Nan::New("guage_pointer_set_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_guage_pointer_set_image)->GetFunction());
  ctx->Set(Nan::New("guage_pointer_set_anchor").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_guage_pointer_set_anchor)->GetFunction());
  ctx->Set(Nan::New("guage_pointer_t_get_prop_angle").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_guage_pointer_t_get_prop_angle)->GetFunction());
  ctx->Set(Nan::New("guage_pointer_t_get_prop_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_guage_pointer_t_get_prop_image)->GetFunction());
  ctx->Set(Nan::New("guage_pointer_t_get_prop_anchor_x").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_guage_pointer_t_get_prop_anchor_x)->GetFunction());
  ctx->Set(Nan::New("guage_pointer_t_get_prop_anchor_y").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_guage_pointer_t_get_prop_anchor_y)->GetFunction());

 return RET_OK;
}

static void wrap_draggable_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)draggable_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_draggable_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)draggable_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_draggable_set_top(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t top = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)draggable_set_top(widget, top);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_draggable_set_bottom(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t bottom = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)draggable_set_bottom(widget, bottom);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_draggable_set_left(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t left = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)draggable_set_left(widget, left);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_draggable_set_right(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t right = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)draggable_set_right(widget, right);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_draggable_set_vertical_only(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t vertical_only = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)draggable_set_vertical_only(widget, vertical_only);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_draggable_set_horizontal_only(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t horizontal_only = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)draggable_set_horizontal_only(widget, horizontal_only);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_draggable_set_drag_window(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t drag_window = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)draggable_set_drag_window(widget, drag_window);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_draggable_t_get_prop_top(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->top));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_draggable_t_get_prop_bottom(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->bottom));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_draggable_t_get_prop_left(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->left));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_draggable_t_get_prop_right(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->right));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_draggable_t_get_prop_vertical_only(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->vertical_only));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_draggable_t_get_prop_horizontal_only(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->horizontal_only));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_draggable_t_get_prop_drag_window(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->drag_window));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t draggable_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("draggable_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_draggable_create)->GetFunction());
  ctx->Set(Nan::New("draggable_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_draggable_cast)->GetFunction());
  ctx->Set(Nan::New("draggable_set_top").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_draggable_set_top)->GetFunction());
  ctx->Set(Nan::New("draggable_set_bottom").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_draggable_set_bottom)->GetFunction());
  ctx->Set(Nan::New("draggable_set_left").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_draggable_set_left)->GetFunction());
  ctx->Set(Nan::New("draggable_set_right").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_draggable_set_right)->GetFunction());
  ctx->Set(Nan::New("draggable_set_vertical_only").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_draggable_set_vertical_only)->GetFunction());
  ctx->Set(Nan::New("draggable_set_horizontal_only").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_draggable_set_horizontal_only)->GetFunction());
  ctx->Set(Nan::New("draggable_set_drag_window").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_draggable_set_drag_window)->GetFunction());
  ctx->Set(Nan::New("draggable_t_get_prop_top").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_draggable_t_get_prop_top)->GetFunction());
  ctx->Set(Nan::New("draggable_t_get_prop_bottom").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_draggable_t_get_prop_bottom)->GetFunction());
  ctx->Set(Nan::New("draggable_t_get_prop_left").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_draggable_t_get_prop_left)->GetFunction());
  ctx->Set(Nan::New("draggable_t_get_prop_right").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_draggable_t_get_prop_right)->GetFunction());
  ctx->Set(Nan::New("draggable_t_get_prop_vertical_only").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_draggable_t_get_prop_vertical_only)->GetFunction());
  ctx->Set(Nan::New("draggable_t_get_prop_horizontal_only").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_draggable_t_get_prop_horizontal_only)->GetFunction());
  ctx->Set(Nan::New("draggable_t_get_prop_drag_window").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_draggable_t_get_prop_drag_window)->GetFunction());

 return RET_OK;
}

static void wrap_color_picker_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)color_picker_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_color_picker_set_color(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)color_picker_set_color(widget, color);
  jsvalue_free_str(ctx, color);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_color_picker_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)color_picker_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_color_picker_t_get_prop_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  color_picker_t* obj = (color_picker_t*)jsvalue_get_pointer(ctx, argv[0], "color_picker_t*");

  const char* str_temp = obj->value;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t color_picker_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("color_picker_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_color_picker_create)->GetFunction());
  ctx->Set(Nan::New("color_picker_set_color").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_color_picker_set_color)->GetFunction());
  ctx->Set(Nan::New("color_picker_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_color_picker_cast)->GetFunction());
  ctx->Set(Nan::New("color_picker_t_get_prop_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_color_picker_t_get_prop_value)->GetFunction());

 return RET_OK;
}

static void wrap_color_component_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)color_component_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t color_component_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("color_component_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_color_component_cast)->GetFunction());

 return RET_OK;
}

static void wrap_window_manager(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  widget_t* ret = NULL;
  ret = (widget_t*)window_manager();

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_manager_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)window_manager_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_manager_get_top_main_window(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)window_manager_get_top_main_window(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_manager_get_top_window(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)window_manager_get_top_window(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_manager_get_prev_window(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)window_manager_get_prev_window(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_manager_get_pointer_x(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  xy_t ret = (xy_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (xy_t)window_manager_get_pointer_x(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_manager_get_pointer_y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  xy_t ret = (xy_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (xy_t)window_manager_get_pointer_y(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_manager_get_pointer_pressed(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  bool_t ret = (bool_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)window_manager_get_pointer_pressed(widget);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_manager_set_show_fps(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t show_fps = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)window_manager_set_show_fps(widget, show_fps);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_manager_set_screen_saver_time(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t screen_saver_time = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)window_manager_set_screen_saver_time(widget, screen_saver_time);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_manager_set_cursor(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* cursor = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)window_manager_set_cursor(widget, cursor);
  jsvalue_free_str(ctx, cursor);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_manager_back(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)window_manager_back(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_manager_back_to_home(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)window_manager_back_to_home(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_manager_back_to(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* target = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)window_manager_back_to(widget, target);
  jsvalue_free_str(ctx, target);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t window_manager_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("window_manager").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_manager)->GetFunction());
  ctx->Set(Nan::New("window_manager_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_manager_cast)->GetFunction());
  ctx->Set(Nan::New("window_manager_get_top_main_window").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_manager_get_top_main_window)->GetFunction());
  ctx->Set(Nan::New("window_manager_get_top_window").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_manager_get_top_window)->GetFunction());
  ctx->Set(Nan::New("window_manager_get_prev_window").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_manager_get_prev_window)->GetFunction());
  ctx->Set(Nan::New("window_manager_get_pointer_x").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_manager_get_pointer_x)->GetFunction());
  ctx->Set(Nan::New("window_manager_get_pointer_y").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_manager_get_pointer_y)->GetFunction());
  ctx->Set(Nan::New("window_manager_get_pointer_pressed").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_manager_get_pointer_pressed)->GetFunction());
  ctx->Set(Nan::New("window_manager_set_show_fps").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_manager_set_show_fps)->GetFunction());
  ctx->Set(Nan::New("window_manager_set_screen_saver_time").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_manager_set_screen_saver_time)->GetFunction());
  ctx->Set(Nan::New("window_manager_set_cursor").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_manager_set_cursor)->GetFunction());
  ctx->Set(Nan::New("window_manager_back").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_manager_back)->GetFunction());
  ctx->Set(Nan::New("window_manager_back_to_home").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_manager_back_to_home)->GetFunction());
  ctx->Set(Nan::New("window_manager_back_to").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_manager_back_to)->GetFunction());

 return RET_OK;
}

static void wrap_window_base_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)window_base_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_base_t_get_prop_theme(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  const char* str_temp = obj->theme;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_window_base_t_get_prop_closable(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->closable));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t window_base_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("window_base_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_base_cast)->GetFunction());
  ctx->Set(Nan::New("window_base_t_get_prop_theme").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_base_t_get_prop_theme)->GetFunction());
  ctx->Set(Nan::New("window_base_t_get_prop_closable").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_base_t_get_prop_closable)->GetFunction());

 return RET_OK;
}

static void wrap_style_mutable_set_name(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)style_mutable_set_name(s, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_style_mutable_set_int(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 4) {
  ret_t ret = (ret_t)0;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  const char* state = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  uint32_t val = (uint32_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)style_mutable_set_int(s, state, name, val);
  jsvalue_free_str(ctx, state);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_style_mutable_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  style_t* ret = NULL;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  ret = (style_t*)style_mutable_cast(s);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_style_mutable_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  style_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  style_t* default_style = (style_t*)jsvalue_get_pointer(ctx, argv[1], "style_t*");
  ret = (style_t*)style_mutable_create(widget, default_style);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_style_mutable_t_get_prop_name(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  style_mutable_t* obj = (style_mutable_t*)jsvalue_get_pointer(ctx, argv[0], "style_mutable_t*");

  const char* str_temp = obj->name;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t style_mutable_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("style_mutable_set_name").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_style_mutable_set_name)->GetFunction());
  ctx->Set(Nan::New("style_mutable_set_int").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_style_mutable_set_int)->GetFunction());
  ctx->Set(Nan::New("style_mutable_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_style_mutable_cast)->GetFunction());
  ctx->Set(Nan::New("style_mutable_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_style_mutable_create)->GetFunction());
  ctx->Set(Nan::New("style_mutable_t_get_prop_name").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_style_mutable_t_get_prop_name)->GetFunction());

 return RET_OK;
}

static void wrap_image_base_set_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)image_base_set_image(widget, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_base_set_rotation(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t rotation = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)image_base_set_rotation(widget, rotation);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_base_set_scale(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t scale_x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t scale_y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)image_base_set_scale(widget, scale_x, scale_y);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_base_set_anchor(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t anchor_x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t anchor_y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)image_base_set_anchor(widget, anchor_x, anchor_y);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_base_set_selected(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t selected = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)image_base_set_selected(widget, selected);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_base_set_selectable(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t selectable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)image_base_set_selectable(widget, selectable);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_base_set_clickable(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t clickable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)image_base_set_clickable(widget, clickable);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_base_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)image_base_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_base_t_get_prop_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  const char* str_temp = obj->image;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_base_t_get_prop_anchor_x(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->anchor_x));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_base_t_get_prop_anchor_y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->anchor_y));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_base_t_get_prop_scale_x(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->scale_x));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_base_t_get_prop_scale_y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->scale_y));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_base_t_get_prop_rotation(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->rotation));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_base_t_get_prop_clickable(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->clickable));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_base_t_get_prop_selectable(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->selectable));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_base_t_get_prop_selected(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->selected));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t image_base_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("image_base_set_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_base_set_image)->GetFunction());
  ctx->Set(Nan::New("image_base_set_rotation").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_base_set_rotation)->GetFunction());
  ctx->Set(Nan::New("image_base_set_scale").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_base_set_scale)->GetFunction());
  ctx->Set(Nan::New("image_base_set_anchor").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_base_set_anchor)->GetFunction());
  ctx->Set(Nan::New("image_base_set_selected").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_base_set_selected)->GetFunction());
  ctx->Set(Nan::New("image_base_set_selectable").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_base_set_selectable)->GetFunction());
  ctx->Set(Nan::New("image_base_set_clickable").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_base_set_clickable)->GetFunction());
  ctx->Set(Nan::New("image_base_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_base_cast)->GetFunction());
  ctx->Set(Nan::New("image_base_t_get_prop_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_base_t_get_prop_image)->GetFunction());
  ctx->Set(Nan::New("image_base_t_get_prop_anchor_x").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_base_t_get_prop_anchor_x)->GetFunction());
  ctx->Set(Nan::New("image_base_t_get_prop_anchor_y").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_base_t_get_prop_anchor_y)->GetFunction());
  ctx->Set(Nan::New("image_base_t_get_prop_scale_x").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_base_t_get_prop_scale_x)->GetFunction());
  ctx->Set(Nan::New("image_base_t_get_prop_scale_y").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_base_t_get_prop_scale_y)->GetFunction());
  ctx->Set(Nan::New("image_base_t_get_prop_rotation").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_base_t_get_prop_rotation)->GetFunction());
  ctx->Set(Nan::New("image_base_t_get_prop_clickable").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_base_t_get_prop_clickable)->GetFunction());
  ctx->Set(Nan::New("image_base_t_get_prop_selectable").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_base_t_get_prop_selectable)->GetFunction());
  ctx->Set(Nan::New("image_base_t_get_prop_selected").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_base_t_get_prop_selected)->GetFunction());

 return RET_OK;
}

static void wrap_window_event_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  window_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (window_event_t*)window_event_cast(event);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_event_t_get_prop_window(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  window_event_t* obj = (window_event_t*)jsvalue_get_pointer(ctx, argv[0], "window_event_t*");

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(obj->window)));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t window_event_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("window_event_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_event_cast)->GetFunction());
  ctx->Set(Nan::New("window_event_t_get_prop_window").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_event_t_get_prop_window)->GetFunction());

 return RET_OK;
}

static void wrap_paint_event_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  paint_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (paint_event_t*)paint_event_cast(event);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_paint_event_t_get_prop_c(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  paint_event_t* obj = (paint_event_t*)jsvalue_get_pointer(ctx, argv[0], "paint_event_t*");

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(obj->c)));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t paint_event_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("paint_event_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_paint_event_cast)->GetFunction());
  ctx->Set(Nan::New("paint_event_t_get_prop_c").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_paint_event_t_get_prop_c)->GetFunction());

 return RET_OK;
}

static void wrap_key_event_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  key_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (key_event_t*)key_event_cast(event);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_key_event_t_get_prop_key(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->key));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_key_event_t_get_prop_alt(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->alt));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_key_event_t_get_prop_lalt(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->lalt));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_key_event_t_get_prop_ralt(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->ralt));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_key_event_t_get_prop_ctrl(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->ctrl));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_key_event_t_get_prop_lctrl(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->lctrl));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_key_event_t_get_prop_rctrl(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->rctrl));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_key_event_t_get_prop_shift(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->shift));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_key_event_t_get_prop_lshift(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->lshift));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_key_event_t_get_prop_rshift(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->rshift));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_key_event_t_get_prop_cmd(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->cmd));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_key_event_t_get_prop_menu(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->menu));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_key_event_t_get_prop_capslock(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->capslock));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t key_event_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("key_event_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_key_event_cast)->GetFunction());
  ctx->Set(Nan::New("key_event_t_get_prop_key").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_key_event_t_get_prop_key)->GetFunction());
  ctx->Set(Nan::New("key_event_t_get_prop_alt").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_key_event_t_get_prop_alt)->GetFunction());
  ctx->Set(Nan::New("key_event_t_get_prop_lalt").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_key_event_t_get_prop_lalt)->GetFunction());
  ctx->Set(Nan::New("key_event_t_get_prop_ralt").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_key_event_t_get_prop_ralt)->GetFunction());
  ctx->Set(Nan::New("key_event_t_get_prop_ctrl").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_key_event_t_get_prop_ctrl)->GetFunction());
  ctx->Set(Nan::New("key_event_t_get_prop_lctrl").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_key_event_t_get_prop_lctrl)->GetFunction());
  ctx->Set(Nan::New("key_event_t_get_prop_rctrl").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_key_event_t_get_prop_rctrl)->GetFunction());
  ctx->Set(Nan::New("key_event_t_get_prop_shift").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_key_event_t_get_prop_shift)->GetFunction());
  ctx->Set(Nan::New("key_event_t_get_prop_lshift").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_key_event_t_get_prop_lshift)->GetFunction());
  ctx->Set(Nan::New("key_event_t_get_prop_rshift").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_key_event_t_get_prop_rshift)->GetFunction());
  ctx->Set(Nan::New("key_event_t_get_prop_cmd").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_key_event_t_get_prop_cmd)->GetFunction());
  ctx->Set(Nan::New("key_event_t_get_prop_menu").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_key_event_t_get_prop_menu)->GetFunction());
  ctx->Set(Nan::New("key_event_t_get_prop_capslock").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_key_event_t_get_prop_capslock)->GetFunction());

 return RET_OK;
}

static void wrap_pointer_event_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  pointer_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (pointer_event_t*)pointer_event_cast(event);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_pointer_event_t_get_prop_x(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->x));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_pointer_event_t_get_prop_y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->y));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_pointer_event_t_get_prop_button(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->button));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_pointer_event_t_get_prop_pressed(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->pressed));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_pointer_event_t_get_prop_alt(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->alt));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_pointer_event_t_get_prop_ctrl(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->ctrl));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_pointer_event_t_get_prop_cmd(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->cmd));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_pointer_event_t_get_prop_menu(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->menu));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_pointer_event_t_get_prop_shift(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->shift));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t pointer_event_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("pointer_event_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_pointer_event_cast)->GetFunction());
  ctx->Set(Nan::New("pointer_event_t_get_prop_x").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_pointer_event_t_get_prop_x)->GetFunction());
  ctx->Set(Nan::New("pointer_event_t_get_prop_y").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_pointer_event_t_get_prop_y)->GetFunction());
  ctx->Set(Nan::New("pointer_event_t_get_prop_button").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_pointer_event_t_get_prop_button)->GetFunction());
  ctx->Set(Nan::New("pointer_event_t_get_prop_pressed").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_pointer_event_t_get_prop_pressed)->GetFunction());
  ctx->Set(Nan::New("pointer_event_t_get_prop_alt").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_pointer_event_t_get_prop_alt)->GetFunction());
  ctx->Set(Nan::New("pointer_event_t_get_prop_ctrl").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_pointer_event_t_get_prop_ctrl)->GetFunction());
  ctx->Set(Nan::New("pointer_event_t_get_prop_cmd").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_pointer_event_t_get_prop_cmd)->GetFunction());
  ctx->Set(Nan::New("pointer_event_t_get_prop_menu").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_pointer_event_t_get_prop_menu)->GetFunction());
  ctx->Set(Nan::New("pointer_event_t_get_prop_shift").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_pointer_event_t_get_prop_shift)->GetFunction());

 return RET_OK;
}

static void wrap_orientation_event_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  orientation_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (orientation_event_t*)orientation_event_cast(event);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_orientation_event_t_get_prop_orientation(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  orientation_event_t* obj = (orientation_event_t*)jsvalue_get_pointer(ctx, argv[0], "orientation_event_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->orientation));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t orientation_event_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("orientation_event_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_orientation_event_cast)->GetFunction());
  ctx->Set(Nan::New("orientation_event_t_get_prop_orientation").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_orientation_event_t_get_prop_orientation)->GetFunction());

 return RET_OK;
}

static void wrap_wheel_event_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  wheel_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (wheel_event_t*)wheel_event_cast(event);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_wheel_event_t_get_prop_dy(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  wheel_event_t* obj = (wheel_event_t*)jsvalue_get_pointer(ctx, argv[0], "wheel_event_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->dy));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_wheel_event_t_get_prop_alt(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  wheel_event_t* obj = (wheel_event_t*)jsvalue_get_pointer(ctx, argv[0], "wheel_event_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->alt));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_wheel_event_t_get_prop_ctrl(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  wheel_event_t* obj = (wheel_event_t*)jsvalue_get_pointer(ctx, argv[0], "wheel_event_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->ctrl));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_wheel_event_t_get_prop_shift(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  wheel_event_t* obj = (wheel_event_t*)jsvalue_get_pointer(ctx, argv[0], "wheel_event_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->shift));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t wheel_event_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("wheel_event_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_wheel_event_cast)->GetFunction());
  ctx->Set(Nan::New("wheel_event_t_get_prop_dy").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_wheel_event_t_get_prop_dy)->GetFunction());
  ctx->Set(Nan::New("wheel_event_t_get_prop_alt").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_wheel_event_t_get_prop_alt)->GetFunction());
  ctx->Set(Nan::New("wheel_event_t_get_prop_ctrl").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_wheel_event_t_get_prop_ctrl)->GetFunction());
  ctx->Set(Nan::New("wheel_event_t_get_prop_shift").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_wheel_event_t_get_prop_shift)->GetFunction());

 return RET_OK;
}

static void wrap_app_bar_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)app_bar_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_app_bar_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)app_bar_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t app_bar_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("app_bar_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_app_bar_create)->GetFunction());
  ctx->Set(Nan::New("app_bar_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_app_bar_cast)->GetFunction());

 return RET_OK;
}

static void wrap_button_group_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)button_group_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_button_group_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)button_group_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t button_group_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("button_group_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_button_group_create)->GetFunction());
  ctx->Set(Nan::New("button_group_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_button_group_cast)->GetFunction());

 return RET_OK;
}

static void wrap_button_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)button_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_button_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)button_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_button_set_repeat(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t repeat = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)button_set_repeat(widget, repeat);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_button_set_enable_long_press(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t enable_long_press = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)button_set_enable_long_press(widget, enable_long_press);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_button_t_get_prop_repeat(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  button_t* obj = (button_t*)jsvalue_get_pointer(ctx, argv[0], "button_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->repeat));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_button_t_get_prop_enable_long_press(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  button_t* obj = (button_t*)jsvalue_get_pointer(ctx, argv[0], "button_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->enable_long_press));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t button_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("button_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_button_create)->GetFunction());
  ctx->Set(Nan::New("button_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_button_cast)->GetFunction());
  ctx->Set(Nan::New("button_set_repeat").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_button_set_repeat)->GetFunction());
  ctx->Set(Nan::New("button_set_enable_long_press").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_button_set_enable_long_press)->GetFunction());
  ctx->Set(Nan::New("button_t_get_prop_repeat").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_button_t_get_prop_repeat)->GetFunction());
  ctx->Set(Nan::New("button_t_get_prop_enable_long_press").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_button_t_get_prop_enable_long_press)->GetFunction());

 return RET_OK;
}

static void wrap_check_button_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)check_button_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_check_button_create_radio(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)check_button_create_radio(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_check_button_set_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t value = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)check_button_set_value(widget, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_check_button_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)check_button_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_check_button_t_get_prop_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  check_button_t* obj = (check_button_t*)jsvalue_get_pointer(ctx, argv[0], "check_button_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->value));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t check_button_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("check_button_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_check_button_create)->GetFunction());
  ctx->Set(Nan::New("check_button_create_radio").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_check_button_create_radio)->GetFunction());
  ctx->Set(Nan::New("check_button_set_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_check_button_set_value)->GetFunction());
  ctx->Set(Nan::New("check_button_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_check_button_cast)->GetFunction());
  ctx->Set(Nan::New("check_button_t_get_prop_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_check_button_t_get_prop_value)->GetFunction());

 return RET_OK;
}

static void wrap_clip_view_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)clip_view_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_clip_view_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)clip_view_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t clip_view_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("clip_view_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_clip_view_create)->GetFunction());
  ctx->Set(Nan::New("clip_view_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_clip_view_cast)->GetFunction());

 return RET_OK;
}

static void wrap_color_tile_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)color_tile_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_color_tile_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)color_tile_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_color_tile_set_bg_color(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)color_tile_set_bg_color(widget, color);
  jsvalue_free_str(ctx, color);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_color_tile_t_get_prop_bg_color(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  color_tile_t* obj = (color_tile_t*)jsvalue_get_pointer(ctx, argv[0], "color_tile_t*");

  const char* str_temp = obj->bg_color;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_color_tile_t_get_prop_border_color(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  color_tile_t* obj = (color_tile_t*)jsvalue_get_pointer(ctx, argv[0], "color_tile_t*");

  const char* str_temp = obj->border_color;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t color_tile_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("color_tile_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_color_tile_create)->GetFunction());
  ctx->Set(Nan::New("color_tile_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_color_tile_cast)->GetFunction());
  ctx->Set(Nan::New("color_tile_set_bg_color").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_color_tile_set_bg_color)->GetFunction());
  ctx->Set(Nan::New("color_tile_t_get_prop_bg_color").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_color_tile_t_get_prop_bg_color)->GetFunction());
  ctx->Set(Nan::New("color_tile_t_get_prop_border_color").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_color_tile_t_get_prop_border_color)->GetFunction());

 return RET_OK;
}

static void wrap_column_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)column_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_column_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)column_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t column_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("column_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_column_create)->GetFunction());
  ctx->Set(Nan::New("column_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_column_cast)->GetFunction());

 return RET_OK;
}

static void wrap_combo_box_item_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)combo_box_item_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_combo_box_item_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)combo_box_item_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_combo_box_item_set_checked(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t checked = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)combo_box_item_set_checked(widget, checked);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_combo_box_item_set_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)combo_box_item_set_value(widget, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_combo_box_item_t_get_prop_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  combo_box_item_t* obj = (combo_box_item_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_item_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->value));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_combo_box_item_t_get_prop_checked(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  combo_box_item_t* obj = (combo_box_item_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_item_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->checked));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t combo_box_item_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("combo_box_item_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_item_create)->GetFunction());
  ctx->Set(Nan::New("combo_box_item_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_item_cast)->GetFunction());
  ctx->Set(Nan::New("combo_box_item_set_checked").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_item_set_checked)->GetFunction());
  ctx->Set(Nan::New("combo_box_item_set_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_item_set_value)->GetFunction());
  ctx->Set(Nan::New("combo_box_item_t_get_prop_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_item_t_get_prop_value)->GetFunction());
  ctx->Set(Nan::New("combo_box_item_t_get_prop_checked").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_item_t_get_prop_checked)->GetFunction());

 return RET_OK;
}

static void wrap_combo_box_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)combo_box_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_combo_box_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)combo_box_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_combo_box_set_open_window(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* open_window = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)combo_box_set_open_window(widget, open_window);
  jsvalue_free_str(ctx, open_window);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_combo_box_reset_options(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)combo_box_reset_options(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_combo_box_count_options(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  int32_t ret = (int32_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)combo_box_count_options(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_combo_box_set_selected_index(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)combo_box_set_selected_index(widget, index);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_combo_box_set_localize_options(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t localize_options = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)combo_box_set_localize_options(widget, localize_options);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_combo_box_set_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)combo_box_set_value(widget, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_combo_box_set_item_height(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t item_height = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)combo_box_set_item_height(widget, item_height);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_combo_box_append_option(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)combo_box_append_option(widget, value, text);
  jsvalue_free_str(ctx, text);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_combo_box_set_options(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* options = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)combo_box_set_options(widget, options);
  jsvalue_free_str(ctx, options);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_combo_box_get_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  int32_t ret = (int32_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)combo_box_get_value(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_combo_box_get_text(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  const char* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (const char*)combo_box_get_text(widget);

  const char* str_temp = ret;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_combo_box_t_get_prop_open_window(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  const char* str_temp = obj->open_window;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_combo_box_t_get_prop_selected_index(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->selected_index));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_combo_box_t_get_prop_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->value));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_combo_box_t_get_prop_localize_options(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->localize_options));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_combo_box_t_get_prop_options(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  const char* str_temp = obj->options;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_combo_box_t_get_prop_item_height(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->item_height));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t combo_box_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("combo_box_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_create)->GetFunction());
  ctx->Set(Nan::New("combo_box_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_cast)->GetFunction());
  ctx->Set(Nan::New("combo_box_set_open_window").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_set_open_window)->GetFunction());
  ctx->Set(Nan::New("combo_box_reset_options").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_reset_options)->GetFunction());
  ctx->Set(Nan::New("combo_box_count_options").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_count_options)->GetFunction());
  ctx->Set(Nan::New("combo_box_set_selected_index").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_set_selected_index)->GetFunction());
  ctx->Set(Nan::New("combo_box_set_localize_options").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_set_localize_options)->GetFunction());
  ctx->Set(Nan::New("combo_box_set_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_set_value)->GetFunction());
  ctx->Set(Nan::New("combo_box_set_item_height").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_set_item_height)->GetFunction());
  ctx->Set(Nan::New("combo_box_append_option").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_append_option)->GetFunction());
  ctx->Set(Nan::New("combo_box_set_options").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_set_options)->GetFunction());
  ctx->Set(Nan::New("combo_box_get_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_get_value)->GetFunction());
  ctx->Set(Nan::New("combo_box_get_text").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_get_text)->GetFunction());
  ctx->Set(Nan::New("combo_box_t_get_prop_open_window").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_t_get_prop_open_window)->GetFunction());
  ctx->Set(Nan::New("combo_box_t_get_prop_selected_index").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_t_get_prop_selected_index)->GetFunction());
  ctx->Set(Nan::New("combo_box_t_get_prop_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_t_get_prop_value)->GetFunction());
  ctx->Set(Nan::New("combo_box_t_get_prop_localize_options").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_t_get_prop_localize_options)->GetFunction());
  ctx->Set(Nan::New("combo_box_t_get_prop_options").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_t_get_prop_options)->GetFunction());
  ctx->Set(Nan::New("combo_box_t_get_prop_item_height").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_t_get_prop_item_height)->GetFunction());

 return RET_OK;
}

static void wrap_dialog_client_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)dialog_client_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_dialog_client_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)dialog_client_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t dialog_client_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("dialog_client_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dialog_client_create)->GetFunction());
  ctx->Set(Nan::New("dialog_client_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dialog_client_cast)->GetFunction());

 return RET_OK;
}

static void wrap_dialog_title_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)dialog_title_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_dialog_title_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)dialog_title_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t dialog_title_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("dialog_title_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dialog_title_create)->GetFunction());
  ctx->Set(Nan::New("dialog_title_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dialog_title_cast)->GetFunction());

 return RET_OK;
}

static void wrap_digit_clock_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)digit_clock_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_digit_clock_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)digit_clock_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_digit_clock_set_format(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* format = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)digit_clock_set_format(widget, format);
  jsvalue_free_str(ctx, format);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_digit_clock_t_get_prop_format(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  digit_clock_t* obj = (digit_clock_t*)jsvalue_get_pointer(ctx, argv[0], "digit_clock_t*");

  const char* str_temp = obj->format;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t digit_clock_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("digit_clock_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_digit_clock_create)->GetFunction());
  ctx->Set(Nan::New("digit_clock_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_digit_clock_cast)->GetFunction());
  ctx->Set(Nan::New("digit_clock_set_format").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_digit_clock_set_format)->GetFunction());
  ctx->Set(Nan::New("digit_clock_t_get_prop_format").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_digit_clock_t_get_prop_format)->GetFunction());

 return RET_OK;
}

static void wrap_dragger_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)dragger_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_dragger_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)dragger_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_dragger_set_range(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x_min = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y_min = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  xy_t x_max = (xy_t)jsvalue_get_int_value(ctx, argv[3]);
  xy_t y_max = (xy_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (ret_t)dragger_set_range(widget, x_min, y_min, x_max, y_max);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_dragger_t_get_prop_x_min(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  dragger_t* obj = (dragger_t*)jsvalue_get_pointer(ctx, argv[0], "dragger_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->x_min));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_dragger_t_get_prop_y_min(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  dragger_t* obj = (dragger_t*)jsvalue_get_pointer(ctx, argv[0], "dragger_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->y_min));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_dragger_t_get_prop_x_max(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  dragger_t* obj = (dragger_t*)jsvalue_get_pointer(ctx, argv[0], "dragger_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->x_max));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_dragger_t_get_prop_y_max(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  dragger_t* obj = (dragger_t*)jsvalue_get_pointer(ctx, argv[0], "dragger_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->y_max));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t dragger_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("dragger_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dragger_create)->GetFunction());
  ctx->Set(Nan::New("dragger_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dragger_cast)->GetFunction());
  ctx->Set(Nan::New("dragger_set_range").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dragger_set_range)->GetFunction());
  ctx->Set(Nan::New("dragger_t_get_prop_x_min").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dragger_t_get_prop_x_min)->GetFunction());
  ctx->Set(Nan::New("dragger_t_get_prop_y_min").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dragger_t_get_prop_y_min)->GetFunction());
  ctx->Set(Nan::New("dragger_t_get_prop_x_max").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dragger_t_get_prop_x_max)->GetFunction());
  ctx->Set(Nan::New("dragger_t_get_prop_y_max").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dragger_t_get_prop_y_max)->GetFunction());

 return RET_OK;
}

static void wrap_edit_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)edit_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_edit_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)edit_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_edit_get_int(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  int32_t ret = (int32_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)edit_get_int(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_edit_get_double(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  double ret = (double)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (double)edit_get_double(widget);

  v8::Local<v8::Number> jret= Nan::New((double)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_edit_set_int(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)edit_set_int(widget, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_edit_set_double(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  double value = (double)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)edit_set_double(widget, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_edit_set_text_limit(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t min = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  uint32_t max = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)edit_set_text_limit(widget, min, max);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_edit_set_int_limit(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 4) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t min = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  int32_t max = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  uint32_t step = (uint32_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)edit_set_int_limit(widget, min, max, step);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_edit_set_float_limit(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 4) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  double min = (double)jsvalue_get_number_value(ctx, argv[1]);
  double max = (double)jsvalue_get_number_value(ctx, argv[2]);
  double step = (double)jsvalue_get_number_value(ctx, argv[3]);
  ret = (ret_t)edit_set_float_limit(widget, min, max, step);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_edit_set_readonly(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t readonly = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)edit_set_readonly(widget, readonly);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_edit_set_auto_fix(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t auto_fix = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)edit_set_auto_fix(widget, auto_fix);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_edit_set_select_none_when_focused(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t select_none_when_focused = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)edit_set_select_none_when_focused(widget, select_none_when_focused);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_edit_set_open_im_when_focused(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t open_im_when_focused = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)edit_set_open_im_when_focused(widget, open_im_when_focused);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_edit_set_input_type(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  input_type_t type = (input_type_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)edit_set_input_type(widget, type);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_edit_set_input_tips(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* tips = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)edit_set_input_tips(widget, tips);
  jsvalue_free_str(ctx, tips);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_edit_set_password_visible(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t password_visible = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)edit_set_password_visible(widget, password_visible);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_edit_set_focus(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t focus = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)edit_set_focus(widget, focus);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_edit_set_cursor(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t cursor = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)edit_set_cursor(widget, cursor);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_edit_t_get_prop_readonly(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->readonly));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_edit_t_get_prop_password_visible(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->password_visible));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_edit_t_get_prop_auto_fix(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->auto_fix));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_edit_t_get_prop_select_none_when_focused(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->select_none_when_focused));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_edit_t_get_prop_open_im_when_focused(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->open_im_when_focused));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_edit_t_get_prop_tips(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  const char* str_temp = obj->tips;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_edit_t_get_prop_input_type(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->input_type));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_edit_t_get_prop_min(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->min));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_edit_t_get_prop_max(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->max));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_edit_t_get_prop_step(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->step));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t edit_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("edit_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_create)->GetFunction());
  ctx->Set(Nan::New("edit_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_cast)->GetFunction());
  ctx->Set(Nan::New("edit_get_int").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_get_int)->GetFunction());
  ctx->Set(Nan::New("edit_get_double").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_get_double)->GetFunction());
  ctx->Set(Nan::New("edit_set_int").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_set_int)->GetFunction());
  ctx->Set(Nan::New("edit_set_double").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_set_double)->GetFunction());
  ctx->Set(Nan::New("edit_set_text_limit").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_set_text_limit)->GetFunction());
  ctx->Set(Nan::New("edit_set_int_limit").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_set_int_limit)->GetFunction());
  ctx->Set(Nan::New("edit_set_float_limit").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_set_float_limit)->GetFunction());
  ctx->Set(Nan::New("edit_set_readonly").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_set_readonly)->GetFunction());
  ctx->Set(Nan::New("edit_set_auto_fix").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_set_auto_fix)->GetFunction());
  ctx->Set(Nan::New("edit_set_select_none_when_focused").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_set_select_none_when_focused)->GetFunction());
  ctx->Set(Nan::New("edit_set_open_im_when_focused").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_set_open_im_when_focused)->GetFunction());
  ctx->Set(Nan::New("edit_set_input_type").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_set_input_type)->GetFunction());
  ctx->Set(Nan::New("edit_set_input_tips").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_set_input_tips)->GetFunction());
  ctx->Set(Nan::New("edit_set_password_visible").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_set_password_visible)->GetFunction());
  ctx->Set(Nan::New("edit_set_focus").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_set_focus)->GetFunction());
  ctx->Set(Nan::New("edit_set_cursor").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_set_cursor)->GetFunction());
  ctx->Set(Nan::New("edit_t_get_prop_readonly").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_t_get_prop_readonly)->GetFunction());
  ctx->Set(Nan::New("edit_t_get_prop_password_visible").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_t_get_prop_password_visible)->GetFunction());
  ctx->Set(Nan::New("edit_t_get_prop_auto_fix").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_t_get_prop_auto_fix)->GetFunction());
  ctx->Set(Nan::New("edit_t_get_prop_select_none_when_focused").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_t_get_prop_select_none_when_focused)->GetFunction());
  ctx->Set(Nan::New("edit_t_get_prop_open_im_when_focused").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_t_get_prop_open_im_when_focused)->GetFunction());
  ctx->Set(Nan::New("edit_t_get_prop_tips").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_t_get_prop_tips)->GetFunction());
  ctx->Set(Nan::New("edit_t_get_prop_input_type").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_t_get_prop_input_type)->GetFunction());
  ctx->Set(Nan::New("edit_t_get_prop_min").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_t_get_prop_min)->GetFunction());
  ctx->Set(Nan::New("edit_t_get_prop_max").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_t_get_prop_max)->GetFunction());
  ctx->Set(Nan::New("edit_t_get_prop_step").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_edit_t_get_prop_step)->GetFunction());

 return RET_OK;
}

static void wrap_grid_item_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)grid_item_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_grid_item_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)grid_item_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t grid_item_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("grid_item_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_grid_item_create)->GetFunction());
  ctx->Set(Nan::New("grid_item_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_grid_item_cast)->GetFunction());

 return RET_OK;
}

static void wrap_grid_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)grid_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_grid_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)grid_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t grid_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("grid_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_grid_create)->GetFunction());
  ctx->Set(Nan::New("grid_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_grid_cast)->GetFunction());

 return RET_OK;
}

static void wrap_group_box_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)group_box_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_group_box_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)group_box_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t group_box_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("group_box_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_group_box_create)->GetFunction());
  ctx->Set(Nan::New("group_box_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_group_box_cast)->GetFunction());

 return RET_OK;
}

static void wrap_label_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)label_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_label_set_length(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t length = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)label_set_length(widget, length);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_label_resize_to_content(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t min_w = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  uint32_t max_w = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
  uint32_t min_h = (uint32_t)jsvalue_get_int_value(ctx, argv[3]);
  uint32_t max_h = (uint32_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (ret_t)label_resize_to_content(widget, min_w, max_w, min_h, max_h);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_label_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)label_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_label_t_get_prop_length(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  label_t* obj = (label_t*)jsvalue_get_pointer(ctx, argv[0], "label_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->length));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t label_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("label_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_label_create)->GetFunction());
  ctx->Set(Nan::New("label_set_length").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_label_set_length)->GetFunction());
  ctx->Set(Nan::New("label_resize_to_content").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_label_resize_to_content)->GetFunction());
  ctx->Set(Nan::New("label_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_label_cast)->GetFunction());
  ctx->Set(Nan::New("label_t_get_prop_length").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_label_t_get_prop_length)->GetFunction());

 return RET_OK;
}

static void wrap_overlay_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)overlay_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_overlay_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)overlay_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t overlay_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("overlay_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_overlay_create)->GetFunction());
  ctx->Set(Nan::New("overlay_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_overlay_cast)->GetFunction());

 return RET_OK;
}

static void wrap_pages_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)pages_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_pages_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)pages_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_pages_set_active(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)pages_set_active(widget, index);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_pages_set_active_by_name(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)pages_set_active_by_name(widget, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_pages_t_get_prop_active(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  pages_t* obj = (pages_t*)jsvalue_get_pointer(ctx, argv[0], "pages_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->active));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t pages_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("pages_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_pages_create)->GetFunction());
  ctx->Set(Nan::New("pages_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_pages_cast)->GetFunction());
  ctx->Set(Nan::New("pages_set_active").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_pages_set_active)->GetFunction());
  ctx->Set(Nan::New("pages_set_active_by_name").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_pages_set_active_by_name)->GetFunction());
  ctx->Set(Nan::New("pages_t_get_prop_active").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_pages_t_get_prop_active)->GetFunction());

 return RET_OK;
}

static void wrap_progress_bar_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)progress_bar_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_progress_bar_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)progress_bar_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_progress_bar_set_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)progress_bar_set_value(widget, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_progress_bar_set_max(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t max = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)progress_bar_set_max(widget, max);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_progress_bar_set_vertical(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t vertical = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)progress_bar_set_vertical(widget, vertical);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_progress_bar_set_show_text(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t show_text = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)progress_bar_set_show_text(widget, show_text);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_progress_bar_get_percent(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  uint32_t ret = (uint32_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (uint32_t)progress_bar_get_percent(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_progress_bar_t_get_prop_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->value));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_progress_bar_t_get_prop_max(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->max));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_progress_bar_t_get_prop_vertical(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->vertical));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_progress_bar_t_get_prop_show_text(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->show_text));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t progress_bar_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("progress_bar_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_bar_create)->GetFunction());
  ctx->Set(Nan::New("progress_bar_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_bar_cast)->GetFunction());
  ctx->Set(Nan::New("progress_bar_set_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_bar_set_value)->GetFunction());
  ctx->Set(Nan::New("progress_bar_set_max").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_bar_set_max)->GetFunction());
  ctx->Set(Nan::New("progress_bar_set_vertical").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_bar_set_vertical)->GetFunction());
  ctx->Set(Nan::New("progress_bar_set_show_text").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_bar_set_show_text)->GetFunction());
  ctx->Set(Nan::New("progress_bar_get_percent").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_bar_get_percent)->GetFunction());
  ctx->Set(Nan::New("progress_bar_t_get_prop_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_bar_t_get_prop_value)->GetFunction());
  ctx->Set(Nan::New("progress_bar_t_get_prop_max").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_bar_t_get_prop_max)->GetFunction());
  ctx->Set(Nan::New("progress_bar_t_get_prop_vertical").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_bar_t_get_prop_vertical)->GetFunction());
  ctx->Set(Nan::New("progress_bar_t_get_prop_show_text").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_progress_bar_t_get_prop_show_text)->GetFunction());

 return RET_OK;
}

static void wrap_row_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)row_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_row_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)row_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t row_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("row_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_row_create)->GetFunction());
  ctx->Set(Nan::New("row_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_row_cast)->GetFunction());

 return RET_OK;
}

static void wrap_slider_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)slider_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slider_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)slider_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slider_set_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  double value = (double)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)slider_set_value(widget, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slider_set_min(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  double min = (double)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)slider_set_min(widget, min);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slider_set_max(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  double max = (double)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)slider_set_max(widget, max);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slider_set_step(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  double step = (double)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)slider_set_step(widget, step);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slider_set_bar_size(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t bar_size = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slider_set_bar_size(widget, bar_size);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slider_set_vertical(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t vertical = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)slider_set_vertical(widget, vertical);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_slider_t_get_prop_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->value));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slider_t_get_prop_min(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->min));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slider_t_get_prop_max(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->max));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slider_t_get_prop_step(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->step));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slider_t_get_prop_vertical(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->vertical));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slider_t_get_prop_bar_size(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->bar_size));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slider_t_get_prop_dragger_size(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->dragger_size));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slider_t_get_prop_dragger_adapt_to_icon(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->dragger_adapt_to_icon));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slider_t_get_prop_slide_with_bar(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->slide_with_bar));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t slider_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("slider_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slider_create)->GetFunction());
  ctx->Set(Nan::New("slider_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slider_cast)->GetFunction());
  ctx->Set(Nan::New("slider_set_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slider_set_value)->GetFunction());
  ctx->Set(Nan::New("slider_set_min").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slider_set_min)->GetFunction());
  ctx->Set(Nan::New("slider_set_max").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slider_set_max)->GetFunction());
  ctx->Set(Nan::New("slider_set_step").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slider_set_step)->GetFunction());
  ctx->Set(Nan::New("slider_set_bar_size").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slider_set_bar_size)->GetFunction());
  ctx->Set(Nan::New("slider_set_vertical").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slider_set_vertical)->GetFunction());
  ctx->Set(Nan::New("slider_t_get_prop_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slider_t_get_prop_value)->GetFunction());
  ctx->Set(Nan::New("slider_t_get_prop_min").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slider_t_get_prop_min)->GetFunction());
  ctx->Set(Nan::New("slider_t_get_prop_max").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slider_t_get_prop_max)->GetFunction());
  ctx->Set(Nan::New("slider_t_get_prop_step").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slider_t_get_prop_step)->GetFunction());
  ctx->Set(Nan::New("slider_t_get_prop_vertical").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slider_t_get_prop_vertical)->GetFunction());
  ctx->Set(Nan::New("slider_t_get_prop_bar_size").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slider_t_get_prop_bar_size)->GetFunction());
  ctx->Set(Nan::New("slider_t_get_prop_dragger_size").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slider_t_get_prop_dragger_size)->GetFunction());
  ctx->Set(Nan::New("slider_t_get_prop_dragger_adapt_to_icon").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slider_t_get_prop_dragger_adapt_to_icon)->GetFunction());
  ctx->Set(Nan::New("slider_t_get_prop_slide_with_bar").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_slider_t_get_prop_slide_with_bar)->GetFunction());

 return RET_OK;
}

static void wrap_tab_button_group_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)tab_button_group_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_tab_button_group_set_compact(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t compact = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)tab_button_group_set_compact(widget, compact);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_tab_button_group_set_scrollable(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t scrollable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)tab_button_group_set_scrollable(widget, scrollable);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_tab_button_group_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)tab_button_group_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_tab_button_group_t_get_prop_compact(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  tab_button_group_t* obj = (tab_button_group_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_group_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->compact));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_tab_button_group_t_get_prop_scrollable(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  tab_button_group_t* obj = (tab_button_group_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_group_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->scrollable));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t tab_button_group_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("tab_button_group_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tab_button_group_create)->GetFunction());
  ctx->Set(Nan::New("tab_button_group_set_compact").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tab_button_group_set_compact)->GetFunction());
  ctx->Set(Nan::New("tab_button_group_set_scrollable").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tab_button_group_set_scrollable)->GetFunction());
  ctx->Set(Nan::New("tab_button_group_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tab_button_group_cast)->GetFunction());
  ctx->Set(Nan::New("tab_button_group_t_get_prop_compact").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tab_button_group_t_get_prop_compact)->GetFunction());
  ctx->Set(Nan::New("tab_button_group_t_get_prop_scrollable").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tab_button_group_t_get_prop_scrollable)->GetFunction());

 return RET_OK;
}

static void wrap_tab_button_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)tab_button_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_tab_button_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)tab_button_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_tab_button_set_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)tab_button_set_value(widget, value);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_tab_button_set_icon(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)tab_button_set_icon(widget, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_tab_button_set_active_icon(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)tab_button_set_active_icon(widget, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_tab_button_set_load_ui(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)tab_button_set_load_ui(widget, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_tab_button_t_get_prop_value(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  tab_button_t* obj = (tab_button_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->value));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_tab_button_t_get_prop_load_ui(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  tab_button_t* obj = (tab_button_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_t*");

  const char* str_temp = obj->load_ui;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_tab_button_t_get_prop_active_icon(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  tab_button_t* obj = (tab_button_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_t*");

  const char* str_temp = obj->active_icon;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_tab_button_t_get_prop_icon(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  tab_button_t* obj = (tab_button_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_t*");

  const char* str_temp = obj->icon;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t tab_button_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("tab_button_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tab_button_create)->GetFunction());
  ctx->Set(Nan::New("tab_button_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tab_button_cast)->GetFunction());
  ctx->Set(Nan::New("tab_button_set_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tab_button_set_value)->GetFunction());
  ctx->Set(Nan::New("tab_button_set_icon").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tab_button_set_icon)->GetFunction());
  ctx->Set(Nan::New("tab_button_set_active_icon").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tab_button_set_active_icon)->GetFunction());
  ctx->Set(Nan::New("tab_button_set_load_ui").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tab_button_set_load_ui)->GetFunction());
  ctx->Set(Nan::New("tab_button_t_get_prop_value").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tab_button_t_get_prop_value)->GetFunction());
  ctx->Set(Nan::New("tab_button_t_get_prop_load_ui").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tab_button_t_get_prop_load_ui)->GetFunction());
  ctx->Set(Nan::New("tab_button_t_get_prop_active_icon").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tab_button_t_get_prop_active_icon)->GetFunction());
  ctx->Set(Nan::New("tab_button_t_get_prop_icon").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tab_button_t_get_prop_icon)->GetFunction());

 return RET_OK;
}

static void wrap_tab_control_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)tab_control_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_tab_control_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)tab_control_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t tab_control_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("tab_control_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tab_control_create)->GetFunction());
  ctx->Set(Nan::New("tab_control_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_tab_control_cast)->GetFunction());

 return RET_OK;
}

static void wrap_view_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)view_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_view_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)view_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t view_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("view_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_view_create)->GetFunction());
  ctx->Set(Nan::New("view_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_view_cast)->GetFunction());

 return RET_OK;
}

static void wrap_idle_info_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  idle_info_t* ret = NULL;
  idle_info_t* idle = (idle_info_t*)jsvalue_get_pointer(ctx, argv[0], "idle_info_t*");
  ret = (idle_info_t*)idle_info_cast(idle);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_idle_info_t_get_prop_ctx(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  idle_info_t* obj = (idle_info_t*)jsvalue_get_pointer(ctx, argv[0], "idle_info_t*");

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(obj->ctx)));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_idle_info_t_get_prop_id(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  idle_info_t* obj = (idle_info_t*)jsvalue_get_pointer(ctx, argv[0], "idle_info_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->id));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t idle_info_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("idle_info_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_idle_info_cast)->GetFunction());
  ctx->Set(Nan::New("idle_info_t_get_prop_ctx").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_idle_info_t_get_prop_ctx)->GetFunction());
  ctx->Set(Nan::New("idle_info_t_get_prop_id").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_idle_info_t_get_prop_id)->GetFunction());

 return RET_OK;
}

ret_t mutable_image_t_init(v8::Local<v8::Object> ctx) {

 return RET_OK;
}

static void wrap_object_array_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  object_t* ret = NULL;
  ret = (object_t*)object_array_create();

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_array_clear_props(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (ret_t)object_array_clear_props(obj);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_array_t_get_prop_props_size(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  object_array_t* obj = (object_array_t*)jsvalue_get_pointer(ctx, argv[0], "object_array_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->props_size));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t object_array_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("object_array_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_array_create)->GetFunction());
  ctx->Set(Nan::New("object_array_clear_props").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_array_clear_props)->GetFunction());
  ctx->Set(Nan::New("object_array_t_get_prop_props_size").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_array_t_get_prop_props_size)->GetFunction());

 return RET_OK;
}

static void wrap_gif_image_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)gif_image_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_gif_image_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)gif_image_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t gif_image_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("gif_image_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_gif_image_create)->GetFunction());
  ctx->Set(Nan::New("gif_image_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_gif_image_cast)->GetFunction());

 return RET_OK;
}

static void wrap_object_default_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  object_t* ret = NULL;
  ret = (object_t*)object_default_create();

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_default_clear_props(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (ret_t)object_default_clear_props(obj);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_object_default_t_get_prop_props_size(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  object_default_t* obj = (object_default_t*)jsvalue_get_pointer(ctx, argv[0], "object_default_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->props_size));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t object_default_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("object_default_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_default_create)->GetFunction());
  ctx->Set(Nan::New("object_default_clear_props").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_default_clear_props)->GetFunction());
  ctx->Set(Nan::New("object_default_t_get_prop_props_size").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_object_default_t_get_prop_props_size)->GetFunction());

 return RET_OK;
}

static void wrap_image_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)image_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_set_draw_type(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  image_draw_type_t draw_type = (image_draw_type_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)image_set_draw_type(widget, draw_type);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)image_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_image_t_get_prop_draw_type(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_t* obj = (image_t*)jsvalue_get_pointer(ctx, argv[0], "image_t*");

  v8::Local<v8::Number> jret= Nan::New((double)(obj->draw_type));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t image_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("image_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_create)->GetFunction());
  ctx->Set(Nan::New("image_set_draw_type").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_set_draw_type)->GetFunction());
  ctx->Set(Nan::New("image_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_cast)->GetFunction());
  ctx->Set(Nan::New("image_t_get_prop_draw_type").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_image_t_get_prop_draw_type)->GetFunction());

 return RET_OK;
}

static void wrap_combo_box_ex_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)combo_box_ex_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t combo_box_ex_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("combo_box_ex_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_combo_box_ex_create)->GetFunction());

 return RET_OK;
}

static void wrap_calibration_win_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)calibration_win_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t calibration_win_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("calibration_win_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_calibration_win_cast)->GetFunction());

 return RET_OK;
}

static void wrap_popup_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)popup_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_popup_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)popup_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_popup_set_close_when_click(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t close_when_click = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)popup_set_close_when_click(widget, close_when_click);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_popup_set_close_when_click_outside(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t close_when_click_outside = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)popup_set_close_when_click_outside(widget, close_when_click_outside);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_popup_t_get_prop_close_when_click(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  popup_t* obj = (popup_t*)jsvalue_get_pointer(ctx, argv[0], "popup_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->close_when_click));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_popup_t_get_prop_close_when_click_outside(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  popup_t* obj = (popup_t*)jsvalue_get_pointer(ctx, argv[0], "popup_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->close_when_click_outside));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t popup_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("popup_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_popup_create)->GetFunction());
  ctx->Set(Nan::New("popup_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_popup_cast)->GetFunction());
  ctx->Set(Nan::New("popup_set_close_when_click").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_popup_set_close_when_click)->GetFunction());
  ctx->Set(Nan::New("popup_set_close_when_click_outside").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_popup_set_close_when_click_outside)->GetFunction());
  ctx->Set(Nan::New("popup_t_get_prop_close_when_click").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_popup_t_get_prop_close_when_click)->GetFunction());
  ctx->Set(Nan::New("popup_t_get_prop_close_when_click_outside").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_popup_t_get_prop_close_when_click_outside)->GetFunction());

 return RET_OK;
}

static void wrap_svg_image_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)svg_image_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_svg_image_set_image(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)svg_image_set_image(widget, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_svg_image_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)svg_image_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t svg_image_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("svg_image_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_svg_image_create)->GetFunction());
  ctx->Set(Nan::New("svg_image_set_image").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_svg_image_set_image)->GetFunction());
  ctx->Set(Nan::New("svg_image_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_svg_image_cast)->GetFunction());

 return RET_OK;
}

static void wrap_timer_info_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  timer_info_t* ret = NULL;
  timer_info_t* timer = (timer_info_t*)jsvalue_get_pointer(ctx, argv[0], "timer_info_t*");
  ret = (timer_info_t*)timer_info_cast(timer);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_timer_info_t_get_prop_ctx(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  timer_info_t* obj = (timer_info_t*)jsvalue_get_pointer(ctx, argv[0], "timer_info_t*");

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(obj->ctx)));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_timer_info_t_get_prop_id(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  timer_info_t* obj = (timer_info_t*)jsvalue_get_pointer(ctx, argv[0], "timer_info_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->id));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_timer_info_t_get_prop_now(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  timer_info_t* obj = (timer_info_t*)jsvalue_get_pointer(ctx, argv[0], "timer_info_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->now));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t timer_info_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("timer_info_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_timer_info_cast)->GetFunction());
  ctx->Set(Nan::New("timer_info_t_get_prop_ctx").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_timer_info_t_get_prop_ctx)->GetFunction());
  ctx->Set(Nan::New("timer_info_t_get_prop_id").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_timer_info_t_get_prop_id)->GetFunction());
  ctx->Set(Nan::New("timer_info_t_get_prop_now").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_timer_info_t_get_prop_now)->GetFunction());

 return RET_OK;
}

static void wrap_spin_box_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)spin_box_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_spin_box_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)spin_box_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t spin_box_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("spin_box_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_spin_box_create)->GetFunction());
  ctx->Set(Nan::New("spin_box_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_spin_box_cast)->GetFunction());

 return RET_OK;
}

static void wrap_system_bar_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)system_bar_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_system_bar_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)system_bar_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t system_bar_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("system_bar_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_system_bar_create)->GetFunction());
  ctx->Set(Nan::New("system_bar_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_system_bar_cast)->GetFunction());

 return RET_OK;
}

static void wrap_window_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)window_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_create_default(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  widget_t* ret = NULL;
  ret = (widget_t*)window_create_default();

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_set_fullscreen(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t fullscreen = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)window_set_fullscreen(widget, fullscreen);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_open(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
  ret = (widget_t*)window_open(name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_open_and_close(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  widget_t* ret = NULL;
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
  widget_t* to_close = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
  ret = (widget_t*)window_open_and_close(name, to_close);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_close(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)window_close(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_close_force(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)window_close_force(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)window_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_window_t_get_prop_fullscreen(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  window_t* obj = (window_t*)jsvalue_get_pointer(ctx, argv[0], "window_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->fullscreen));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t window_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("window_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_create)->GetFunction());
  ctx->Set(Nan::New("window_create_default").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_create_default)->GetFunction());
  ctx->Set(Nan::New("window_set_fullscreen").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_set_fullscreen)->GetFunction());
  ctx->Set(Nan::New("window_open").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_open)->GetFunction());
  ctx->Set(Nan::New("window_open_and_close").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_open_and_close)->GetFunction());
  ctx->Set(Nan::New("window_close").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_close)->GetFunction());
  ctx->Set(Nan::New("window_close_force").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_close_force)->GetFunction());
  ctx->Set(Nan::New("window_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_cast)->GetFunction());
  ctx->Set(Nan::New("window_t_get_prop_fullscreen").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_window_t_get_prop_fullscreen)->GetFunction());

 return RET_OK;
}

static void wrap_keyboard_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)keyboard_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_keyboard_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)keyboard_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t keyboard_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("keyboard_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_keyboard_create)->GetFunction());
  ctx->Set(Nan::New("keyboard_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_keyboard_cast)->GetFunction());

 return RET_OK;
}

static void wrap_dialog_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)dialog_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_dialog_create_simple(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)dialog_create_simple(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_dialog_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)dialog_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_dialog_get_title(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)dialog_get_title(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_dialog_get_client(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)dialog_get_client(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_dialog_open(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
  ret = (widget_t*)dialog_open(name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_dialog_set_title(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* title = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)dialog_set_title(widget, title);
  jsvalue_free_str(ctx, title);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_dialog_modal(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  dialog_quit_code_t ret = (dialog_quit_code_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (dialog_quit_code_t)dialog_modal(widget);

  v8::Local<v8::Number> jret= Nan::New((double)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_dialog_quit(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t code = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)dialog_quit(widget, code);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_dialog_is_quited(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  bool_t ret = (bool_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)dialog_is_quited(widget);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_dialog_is_modal(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  bool_t ret = (bool_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)dialog_is_modal(widget);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_dialog_toast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
  uint32_t duration = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)dialog_toast(text, duration);
  jsvalue_free_str(ctx, text);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_dialog_info(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  const char* title = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)dialog_info(title, text);
  jsvalue_free_str(ctx, title);
  jsvalue_free_str(ctx, text);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_dialog_warn(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  const char* title = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)dialog_warn(title, text);
  jsvalue_free_str(ctx, title);
  jsvalue_free_str(ctx, text);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_dialog_confirm(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  const char* title = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)dialog_confirm(title, text);
  jsvalue_free_str(ctx, title);
  jsvalue_free_str(ctx, text);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_dialog_t_get_prop_highlight(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  dialog_t* obj = (dialog_t*)jsvalue_get_pointer(ctx, argv[0], "dialog_t*");

  const char* str_temp = obj->highlight;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t dialog_t_init(v8::Local<v8::Object> ctx) {
  ctx->Set(Nan::New("dialog_create").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dialog_create)->GetFunction());
  ctx->Set(Nan::New("dialog_create_simple").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dialog_create_simple)->GetFunction());
  ctx->Set(Nan::New("dialog_cast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dialog_cast)->GetFunction());
  ctx->Set(Nan::New("dialog_get_title").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dialog_get_title)->GetFunction());
  ctx->Set(Nan::New("dialog_get_client").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dialog_get_client)->GetFunction());
  ctx->Set(Nan::New("dialog_open").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dialog_open)->GetFunction());
  ctx->Set(Nan::New("dialog_set_title").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dialog_set_title)->GetFunction());
  ctx->Set(Nan::New("dialog_modal").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dialog_modal)->GetFunction());
  ctx->Set(Nan::New("dialog_quit").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dialog_quit)->GetFunction());
  ctx->Set(Nan::New("dialog_is_quited").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dialog_is_quited)->GetFunction());
  ctx->Set(Nan::New("dialog_is_modal").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dialog_is_modal)->GetFunction());
  ctx->Set(Nan::New("dialog_toast").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dialog_toast)->GetFunction());
  ctx->Set(Nan::New("dialog_info").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dialog_info)->GetFunction());
  ctx->Set(Nan::New("dialog_warn").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dialog_warn)->GetFunction());
  ctx->Set(Nan::New("dialog_confirm").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dialog_confirm)->GetFunction());
  ctx->Set(Nan::New("dialog_t_get_prop_highlight").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_dialog_t_get_prop_highlight)->GetFunction());

 return RET_OK;
}

ret_t awtk_js_init(v8::Local<v8::Object> ctx) {
  event_t_init(ctx);
  rect_t_init(ctx);
  pointf_t_init(ctx);
  point_t_init(ctx);
  emitter_t_init(ctx);
  bitmap_t_init(ctx);
  value_t_init(ctx);
  object_t_init(ctx);
  global_t_init(ctx);
  dialog_quit_code_t_init(ctx);
  event_type_t_init(ctx);
  font_manager_t_init(ctx);
  glyph_format_t_init(ctx);
  idle_t_init(ctx);
  image_manager_t_init(ctx);
  input_type_t_init(ctx);
  value_type_t_init(ctx);
  input_method_t_init(ctx);
  key_code_t_init(ctx);
  locale_info_t_init(ctx);
  style_id_t_init(ctx);
  style_t_init(ctx);
  theme_t_init(ctx);
  timer_t_init(ctx);
  align_v_t_init(ctx);
  align_h_t_init(ctx);
  app_type_t_init(ctx);
  bitmap_format_t_init(ctx);
  bitmap_flag_t_init(ctx);
  vgcanvas_t_init(ctx);
  widget_prop_t_init(ctx);
  widget_type_t_init(ctx);
  window_stage_t_init(ctx);
  window_closable_t_init(ctx);
  widget_state_t_init(ctx);
  widget_t_init(ctx);
  ret_t_init(ctx);
  timer_manager_t_init(ctx);
  time_now_t_init(ctx);
  image_draw_type_t_init(ctx);
  canvas_t_init(ctx);
  named_value_t_init(ctx);
  MIME_TYPE_init(ctx);
  idle_manager_t_init(ctx);
  indicator_default_paint_t_init(ctx);
  clip_board_data_type_t_init(ctx);
  clip_board_t_init(ctx);
  easing_type_t_init(ctx);
  date_time_t_init(ctx);
  color_t_init(ctx);
  asset_info_t_init(ctx);
  asset_type_t_init(ctx);
  assets_manager_t_init(ctx);
  canvas_widget_t_init(ctx);
  time_clock_t_init(ctx);
  text_selector_t_init(ctx);
  prop_change_event_t_init(ctx);
  progress_event_t_init(ctx);
  switch_t_init(ctx);
  slide_view_t_init(ctx);
  slide_indicator_t_init(ctx);
  slide_menu_t_init(ctx);
  scroll_view_t_init(ctx);
  scroll_bar_t_init(ctx);
  list_view_t_init(ctx);
  list_view_h_t_init(ctx);
  list_item_t_init(ctx);
  hscroll_label_t_init(ctx);
  rich_text_t_init(ctx);
  progress_circle_t_init(ctx);
  mledit_t_init(ctx);
  line_number_t_init(ctx);
  image_value_t_init(ctx);
  image_animation_t_init(ctx);
  guage_t_init(ctx);
  guage_pointer_t_init(ctx);
  draggable_t_init(ctx);
  color_picker_t_init(ctx);
  color_component_t_init(ctx);
  window_manager_t_init(ctx);
  window_base_t_init(ctx);
  style_mutable_t_init(ctx);
  image_base_t_init(ctx);
  window_event_t_init(ctx);
  paint_event_t_init(ctx);
  key_event_t_init(ctx);
  pointer_event_t_init(ctx);
  orientation_event_t_init(ctx);
  wheel_event_t_init(ctx);
  app_bar_t_init(ctx);
  button_group_t_init(ctx);
  button_t_init(ctx);
  check_button_t_init(ctx);
  clip_view_t_init(ctx);
  color_tile_t_init(ctx);
  column_t_init(ctx);
  combo_box_item_t_init(ctx);
  combo_box_t_init(ctx);
  dialog_client_t_init(ctx);
  dialog_title_t_init(ctx);
  digit_clock_t_init(ctx);
  dragger_t_init(ctx);
  edit_t_init(ctx);
  grid_item_t_init(ctx);
  grid_t_init(ctx);
  group_box_t_init(ctx);
  label_t_init(ctx);
  overlay_t_init(ctx);
  pages_t_init(ctx);
  progress_bar_t_init(ctx);
  row_t_init(ctx);
  slider_t_init(ctx);
  tab_button_group_t_init(ctx);
  tab_button_t_init(ctx);
  tab_control_t_init(ctx);
  view_t_init(ctx);
  idle_info_t_init(ctx);
  mutable_image_t_init(ctx);
  object_array_t_init(ctx);
  gif_image_t_init(ctx);
  object_default_t_init(ctx);
  image_t_init(ctx);
  combo_box_ex_t_init(ctx);
  calibration_win_t_init(ctx);
  popup_t_init(ctx);
  svg_image_t_init(ctx);
  timer_info_t_init(ctx);
  spin_box_t_init(ctx);
  system_bar_t_init(ctx);
  window_t_init(ctx);
  keyboard_t_init(ctx);
  dialog_t_init(ctx);

  return RET_OK;
}


void Init(v8::Local<v8::Object> exports) {
  v8::Local<v8::Object> global =  Nan::GetCurrentContext()->Global();
  exports->Set(Nan::New("init").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_awtk_init)->GetFunction());
  exports->Set(Nan::New("step").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(wrap_awtk_main_loop_step)->GetFunction());
  awtk_js_init(global);
}

NODE_MODULE(awtk, Init)
