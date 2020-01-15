/*XXX: GENERATED CODE, DONT EDIT IT.*/
#include "nan.h"
#include "tkc/utf8.h"
#include "tkc/mem.h"
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
#include "color_picker/color_component.h"
#include "time_clock/time_clock.h"
#include "text_selector/text_selector.h"
#include "switch/switch.h"
#include "widgets/view.h"
#include "slide_view/slide_view.h"
#include "slide_menu/slide_menu.h"
#include "scroll_view/scroll_view.h"
#include "scroll_view/scroll_bar.h"
#include "scroll_view/list_view.h"
#include "widgets/tab_control.h"
#include "scroll_view/list_view_h.h"
#include "scroll_view/list_item.h"
#include "widgets/tab_button.h"
#include "widgets/tab_button_group.h"
#include "scroll_label/hscroll_label.h"
#include "rich_text/rich_text.h"
#include "progress_circle/progress_circle.h"
#include "widgets/slider.h"
#include "mledit/mledit.h"
#include "mledit/line_number.h"
#include "widgets/row.h"
#include "widgets/progress_bar.h"
#include "widgets/pages.h"
#include "widgets/overlay.h"
#include "keyboard/candidates.h"
#include "image_value/image_value.h"
#include "image_animation/image_animation.h"
#include "guage/guage.h"
#include "guage/guage_pointer.h"
#include "widgets/label.h"
#include "file_browser/file_chooser.h"
#include "file_browser/file_browser_view.h"
#include "features/draggable.h"
#include "color_picker/color_picker.h"
#include "canvas_widget/canvas_widget.h"
#include "widgets/group_box.h"
#include "widgets/grid.h"
#include "base/window_manager.h"
#include "base/window_base.h"
#include "widgets/grid_item.h"
#include "base/style_mutable.h"
#include "widgets/edit.h"
#include "base/image_base.h"
#include "widgets/app_bar.h"
#include "widgets/button_group.h"
#include "widgets/button.h"
#include "widgets/dragger.h"
#include "widgets/check_button.h"
#include "widgets/clip_view.h"
#include "widgets/color_tile.h"
#include "widgets/column.h"
#include "widgets/combo_box_item.h"
#include "widgets/digit_clock.h"
#include "widgets/dialog_client.h"
#include "widgets/dialog_title.h"
#include "tkc/object_default.h"
#include "widgets/combo_box.h"
#include "base/window.h"
#include "tkc/timer_info.h"
#include "widgets/image.h"
#include "gif_image/gif_image.h"
#include "keyboard/keyboard.h"
#include "widgets/popup.h"
#include "widgets/calibration_win.h"
#include "tkc/object_array.h"
#include "mutable_image/mutable_image.h"
#include "widgets/spin_box.h"
#include "widgets/system_bar.h"
#include "tkc/idle_info.h"
#include "svg_image/svg_image.h"
#include "combo_box_ex/combo_box_ex.h"
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
  Nan::Export(ctx, "event_cast", wrap_event_cast);
  Nan::Export(ctx, "event_create", wrap_event_create);
  Nan::Export(ctx, "event_t_get_prop_type", wrap_event_t_get_prop_type);
  Nan::Export(ctx, "event_t_get_prop_time", wrap_event_t_get_prop_time);
  Nan::Export(ctx, "event_t_get_prop_target", wrap_event_t_get_prop_target);

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
  Nan::Export(ctx, "rect_create", wrap_rect_create);
  Nan::Export(ctx, "rect_set", wrap_rect_set);
  Nan::Export(ctx, "rect_cast", wrap_rect_cast);
  Nan::Export(ctx, "rect_t_get_prop_x", wrap_rect_t_get_prop_x);
  Nan::Export(ctx, "rect_t_get_prop_y", wrap_rect_t_get_prop_y);
  Nan::Export(ctx, "rect_t_get_prop_w", wrap_rect_t_get_prop_w);
  Nan::Export(ctx, "rect_t_get_prop_h", wrap_rect_t_get_prop_h);

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
  event_type_t type = (event_type_t)jsvalue_get_int_value(ctx, argv[1]);
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
  Nan::Export(ctx, "emitter_create", wrap_emitter_create);
  Nan::Export(ctx, "emitter_dispatch", wrap_emitter_dispatch);
  Nan::Export(ctx, "emitter_dispatch_simple_event", wrap_emitter_dispatch_simple_event);
  Nan::Export(ctx, "emitter_on", wrap_emitter_on);
  Nan::Export(ctx, "emitter_off", wrap_emitter_off);
  Nan::Export(ctx, "emitter_enable", wrap_emitter_enable);
  Nan::Export(ctx, "emitter_disable", wrap_emitter_disable);
  Nan::Export(ctx, "emitter_size", wrap_emitter_size);
  Nan::Export(ctx, "emitter_cast", wrap_emitter_cast);

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
  bitmap_format_t format = (bitmap_format_t)jsvalue_get_int_value(ctx, argv[3]);
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
  Nan::Export(ctx, "bitmap_create", wrap_bitmap_create);
  Nan::Export(ctx, "bitmap_create_ex", wrap_bitmap_create_ex);
  Nan::Export(ctx, "bitmap_get_bpp", wrap_bitmap_get_bpp);
  Nan::Export(ctx, "bitmap_t_get_prop_w", wrap_bitmap_t_get_prop_w);
  Nan::Export(ctx, "bitmap_t_get_prop_h", wrap_bitmap_t_get_prop_h);
  Nan::Export(ctx, "bitmap_t_get_prop_line_length", wrap_bitmap_t_get_prop_line_length);
  Nan::Export(ctx, "bitmap_t_get_prop_flags", wrap_bitmap_t_get_prop_flags);
  Nan::Export(ctx, "bitmap_t_get_prop_format", wrap_bitmap_t_get_prop_format);
  Nan::Export(ctx, "bitmap_t_get_prop_name", wrap_bitmap_t_get_prop_name);

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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
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
  Nan::Export(ctx, "value_set_bool", wrap_value_set_bool);
  Nan::Export(ctx, "value_bool", wrap_value_bool);
  Nan::Export(ctx, "value_set_int8", wrap_value_set_int8);
  Nan::Export(ctx, "value_int8", wrap_value_int8);
  Nan::Export(ctx, "value_set_uint8", wrap_value_set_uint8);
  Nan::Export(ctx, "value_uint8", wrap_value_uint8);
  Nan::Export(ctx, "value_set_int16", wrap_value_set_int16);
  Nan::Export(ctx, "value_int16", wrap_value_int16);
  Nan::Export(ctx, "value_set_uint16", wrap_value_set_uint16);
  Nan::Export(ctx, "value_uint16", wrap_value_uint16);
  Nan::Export(ctx, "value_set_int32", wrap_value_set_int32);
  Nan::Export(ctx, "value_int32", wrap_value_int32);
  Nan::Export(ctx, "value_set_uint32", wrap_value_set_uint32);
  Nan::Export(ctx, "value_set_int64", wrap_value_set_int64);
  Nan::Export(ctx, "value_int64", wrap_value_int64);
  Nan::Export(ctx, "value_set_uint64", wrap_value_set_uint64);
  Nan::Export(ctx, "value_uint64", wrap_value_uint64);
  Nan::Export(ctx, "value_set_float", wrap_value_set_float);
  Nan::Export(ctx, "value_float32", wrap_value_float32);
  Nan::Export(ctx, "value_set_double", wrap_value_set_double);
  Nan::Export(ctx, "value_double", wrap_value_double);
  Nan::Export(ctx, "value_dup_str", wrap_value_dup_str);
  Nan::Export(ctx, "value_str", wrap_value_str);
  Nan::Export(ctx, "value_is_null", wrap_value_is_null);
  Nan::Export(ctx, "value_set_int", wrap_value_set_int);
  Nan::Export(ctx, "value_set_object", wrap_value_set_object);
  Nan::Export(ctx, "value_object", wrap_value_object);
  Nan::Export(ctx, "value_set_token", wrap_value_set_token);
  Nan::Export(ctx, "value_token", wrap_value_token);
  Nan::Export(ctx, "value_create", wrap_value_create);
  Nan::Export(ctx, "value_reset", wrap_value_reset);
  Nan::Export(ctx, "value_cast", wrap_value_cast);

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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
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
  Nan::Export(ctx, "object_ref", wrap_object_ref);
  Nan::Export(ctx, "object_get_type", wrap_object_get_type);
  Nan::Export(ctx, "object_get_desc", wrap_object_get_desc);
  Nan::Export(ctx, "object_get_size", wrap_object_get_size);
  Nan::Export(ctx, "object_is_collection", wrap_object_is_collection);
  Nan::Export(ctx, "object_set_name", wrap_object_set_name);
  Nan::Export(ctx, "object_compare", wrap_object_compare);
  Nan::Export(ctx, "object_get_prop", wrap_object_get_prop);
  Nan::Export(ctx, "object_get_prop_str", wrap_object_get_prop_str);
  Nan::Export(ctx, "object_get_prop_pointer", wrap_object_get_prop_pointer);
  Nan::Export(ctx, "object_get_prop_object", wrap_object_get_prop_object);
  Nan::Export(ctx, "object_get_prop_int", wrap_object_get_prop_int);
  Nan::Export(ctx, "object_get_prop_bool", wrap_object_get_prop_bool);
  Nan::Export(ctx, "object_get_prop_float", wrap_object_get_prop_float);
  Nan::Export(ctx, "object_remove_prop", wrap_object_remove_prop);
  Nan::Export(ctx, "object_set_prop", wrap_object_set_prop);
  Nan::Export(ctx, "object_set_prop_str", wrap_object_set_prop_str);
  Nan::Export(ctx, "object_set_prop_object", wrap_object_set_prop_object);
  Nan::Export(ctx, "object_set_prop_int", wrap_object_set_prop_int);
  Nan::Export(ctx, "object_set_prop_bool", wrap_object_set_prop_bool);
  Nan::Export(ctx, "object_set_prop_float", wrap_object_set_prop_float);
  Nan::Export(ctx, "object_copy_prop", wrap_object_copy_prop);
  Nan::Export(ctx, "object_has_prop", wrap_object_has_prop);
  Nan::Export(ctx, "object_eval", wrap_object_eval);
  Nan::Export(ctx, "object_can_exec", wrap_object_can_exec);
  Nan::Export(ctx, "object_exec", wrap_object_exec);
  Nan::Export(ctx, "object_notify_changed", wrap_object_notify_changed);
  Nan::Export(ctx, "object_get_prop_str_by_path", wrap_object_get_prop_str_by_path);
  Nan::Export(ctx, "object_get_prop_pointer_by_path", wrap_object_get_prop_pointer_by_path);
  Nan::Export(ctx, "object_get_prop_object_by_path", wrap_object_get_prop_object_by_path);
  Nan::Export(ctx, "object_get_prop_int_by_path", wrap_object_get_prop_int_by_path);
  Nan::Export(ctx, "object_get_prop_bool_by_path", wrap_object_get_prop_bool_by_path);
  Nan::Export(ctx, "object_get_prop_float_by_path", wrap_object_get_prop_float_by_path);
  Nan::Export(ctx, "object_t_get_prop_ref_count", wrap_object_t_get_prop_ref_count);
  Nan::Export(ctx, "object_t_get_prop_name", wrap_object_t_get_prop_name);

 return RET_OK;
}

static void wrap_tk_init(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  ret_t ret = (ret_t)0;
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[0]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[1]);
  app_type_t app_type = (app_type_t)jsvalue_get_int_value(ctx, argv[2]);
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
  Nan::Export(ctx, "tk_init", wrap_tk_init);
  Nan::Export(ctx, "tk_run", wrap_tk_run);
  Nan::Export(ctx, "tk_quit", wrap_tk_quit);
  Nan::Export(ctx, "tk_get_pointer_x", wrap_tk_get_pointer_x);
  Nan::Export(ctx, "tk_get_pointer_y", wrap_tk_get_pointer_y);
  Nan::Export(ctx, "tk_is_pointer_pressed", wrap_tk_is_pointer_pressed);

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
  Nan::Export(ctx, "DIALOG_QUIT_NONE", get_DIALOG_QUIT_NONE);
  Nan::Export(ctx, "DIALOG_QUIT_OK", get_DIALOG_QUIT_OK);
  Nan::Export(ctx, "DIALOG_QUIT_YES", get_DIALOG_QUIT_YES);
  Nan::Export(ctx, "DIALOG_QUIT_CANCEL", get_DIALOG_QUIT_CANCEL);
  Nan::Export(ctx, "DIALOG_QUIT_NO", get_DIALOG_QUIT_NO);
  Nan::Export(ctx, "DIALOG_QUIT_OTHER", get_DIALOG_QUIT_OTHER);

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

static void get_EVT_DONE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)EVT_DONE);
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
  Nan::Export(ctx, "EVT_POINTER_DOWN", get_EVT_POINTER_DOWN);
  Nan::Export(ctx, "EVT_POINTER_DOWN_BEFORE_CHILDREN", get_EVT_POINTER_DOWN_BEFORE_CHILDREN);
  Nan::Export(ctx, "EVT_POINTER_MOVE", get_EVT_POINTER_MOVE);
  Nan::Export(ctx, "EVT_POINTER_MOVE_BEFORE_CHILDREN", get_EVT_POINTER_MOVE_BEFORE_CHILDREN);
  Nan::Export(ctx, "EVT_POINTER_UP", get_EVT_POINTER_UP);
  Nan::Export(ctx, "EVT_POINTER_UP_BEFORE_CHILDREN", get_EVT_POINTER_UP_BEFORE_CHILDREN);
  Nan::Export(ctx, "EVT_WHEEL", get_EVT_WHEEL);
  Nan::Export(ctx, "EVT_WHEEL_BEFORE_CHILDREN", get_EVT_WHEEL_BEFORE_CHILDREN);
  Nan::Export(ctx, "EVT_POINTER_DOWN_ABORT", get_EVT_POINTER_DOWN_ABORT);
  Nan::Export(ctx, "EVT_CONTEXT_MENU", get_EVT_CONTEXT_MENU);
  Nan::Export(ctx, "EVT_POINTER_ENTER", get_EVT_POINTER_ENTER);
  Nan::Export(ctx, "EVT_POINTER_LEAVE", get_EVT_POINTER_LEAVE);
  Nan::Export(ctx, "EVT_LONG_PRESS", get_EVT_LONG_PRESS);
  Nan::Export(ctx, "EVT_CLICK", get_EVT_CLICK);
  Nan::Export(ctx, "EVT_FOCUS", get_EVT_FOCUS);
  Nan::Export(ctx, "EVT_BLUR", get_EVT_BLUR);
  Nan::Export(ctx, "EVT_KEY_DOWN", get_EVT_KEY_DOWN);
  Nan::Export(ctx, "EVT_KEY_DOWN_BEFORE_CHILDREN", get_EVT_KEY_DOWN_BEFORE_CHILDREN);
  Nan::Export(ctx, "EVT_KEY_REPEAT", get_EVT_KEY_REPEAT);
  Nan::Export(ctx, "EVT_KEY_UP", get_EVT_KEY_UP);
  Nan::Export(ctx, "EVT_KEY_UP_BEFORE_CHILDREN", get_EVT_KEY_UP_BEFORE_CHILDREN);
  Nan::Export(ctx, "EVT_WILL_MOVE", get_EVT_WILL_MOVE);
  Nan::Export(ctx, "EVT_MOVE", get_EVT_MOVE);
  Nan::Export(ctx, "EVT_WILL_RESIZE", get_EVT_WILL_RESIZE);
  Nan::Export(ctx, "EVT_RESIZE", get_EVT_RESIZE);
  Nan::Export(ctx, "EVT_WILL_MOVE_RESIZE", get_EVT_WILL_MOVE_RESIZE);
  Nan::Export(ctx, "EVT_MOVE_RESIZE", get_EVT_MOVE_RESIZE);
  Nan::Export(ctx, "EVT_VALUE_WILL_CHANGE", get_EVT_VALUE_WILL_CHANGE);
  Nan::Export(ctx, "EVT_VALUE_CHANGED", get_EVT_VALUE_CHANGED);
  Nan::Export(ctx, "EVT_VALUE_CHANGING", get_EVT_VALUE_CHANGING);
  Nan::Export(ctx, "EVT_PAINT", get_EVT_PAINT);
  Nan::Export(ctx, "EVT_BEFORE_PAINT", get_EVT_BEFORE_PAINT);
  Nan::Export(ctx, "EVT_AFTER_PAINT", get_EVT_AFTER_PAINT);
  Nan::Export(ctx, "EVT_PAINT_DONE", get_EVT_PAINT_DONE);
  Nan::Export(ctx, "EVT_LOCALE_CHANGED", get_EVT_LOCALE_CHANGED);
  Nan::Export(ctx, "EVT_ANIM_START", get_EVT_ANIM_START);
  Nan::Export(ctx, "EVT_ANIM_STOP", get_EVT_ANIM_STOP);
  Nan::Export(ctx, "EVT_ANIM_PAUSE", get_EVT_ANIM_PAUSE);
  Nan::Export(ctx, "EVT_ANIM_ONCE", get_EVT_ANIM_ONCE);
  Nan::Export(ctx, "EVT_ANIM_END", get_EVT_ANIM_END);
  Nan::Export(ctx, "EVT_WINDOW_LOAD", get_EVT_WINDOW_LOAD);
  Nan::Export(ctx, "EVT_WIDGET_LOAD", get_EVT_WIDGET_LOAD);
  Nan::Export(ctx, "EVT_WINDOW_WILL_OPEN", get_EVT_WINDOW_WILL_OPEN);
  Nan::Export(ctx, "EVT_WINDOW_OPEN", get_EVT_WINDOW_OPEN);
  Nan::Export(ctx, "EVT_WINDOW_TO_BACKGROUND", get_EVT_WINDOW_TO_BACKGROUND);
  Nan::Export(ctx, "EVT_WINDOW_TO_FOREGROUND", get_EVT_WINDOW_TO_FOREGROUND);
  Nan::Export(ctx, "EVT_WINDOW_CLOSE", get_EVT_WINDOW_CLOSE);
  Nan::Export(ctx, "EVT_REQUEST_CLOSE_WINDOW", get_EVT_REQUEST_CLOSE_WINDOW);
  Nan::Export(ctx, "EVT_TOP_WINDOW_CHANGED", get_EVT_TOP_WINDOW_CHANGED);
  Nan::Export(ctx, "EVT_IM_COMMIT", get_EVT_IM_COMMIT);
  Nan::Export(ctx, "EVT_IM_SHOW_CANDIDATES", get_EVT_IM_SHOW_CANDIDATES);
  Nan::Export(ctx, "EVT_IM_ACTION", get_EVT_IM_ACTION);
  Nan::Export(ctx, "EVT_IM_ACTION_INFO", get_EVT_IM_ACTION_INFO);
  Nan::Export(ctx, "EVT_DRAG_START", get_EVT_DRAG_START);
  Nan::Export(ctx, "EVT_DRAG", get_EVT_DRAG);
  Nan::Export(ctx, "EVT_DRAG_END", get_EVT_DRAG_END);
  Nan::Export(ctx, "EVT_SCREEN_SAVER", get_EVT_SCREEN_SAVER);
  Nan::Export(ctx, "EVT_LOW_MEMORY", get_EVT_LOW_MEMORY);
  Nan::Export(ctx, "EVT_OUT_OF_MEMORY", get_EVT_OUT_OF_MEMORY);
  Nan::Export(ctx, "EVT_ORIENTATION_WILL_CHANGED", get_EVT_ORIENTATION_WILL_CHANGED);
  Nan::Export(ctx, "EVT_ORIENTATION_CHANGED", get_EVT_ORIENTATION_CHANGED);
  Nan::Export(ctx, "EVT_WIDGET_CREATED", get_EVT_WIDGET_CREATED);
  Nan::Export(ctx, "EVT_REQUEST_QUIT_APP", get_EVT_REQUEST_QUIT_APP);
  Nan::Export(ctx, "EVT_THEME_CHANGED", get_EVT_THEME_CHANGED);
  Nan::Export(ctx, "EVT_WIDGET_ADD_CHILD", get_EVT_WIDGET_ADD_CHILD);
  Nan::Export(ctx, "EVT_WIDGET_REMOVE_CHILD", get_EVT_WIDGET_REMOVE_CHILD);
  Nan::Export(ctx, "EVT_REQ_START", get_EVT_REQ_START);
  Nan::Export(ctx, "EVT_USER_START", get_EVT_USER_START);
  Nan::Export(ctx, "EVT_NONE", get_EVT_NONE);
  Nan::Export(ctx, "EVT_PROP_WILL_CHANGE", get_EVT_PROP_WILL_CHANGE);
  Nan::Export(ctx, "EVT_PROP_CHANGED", get_EVT_PROP_CHANGED);
  Nan::Export(ctx, "EVT_ITEMS_WILL_CHANGE", get_EVT_ITEMS_WILL_CHANGE);
  Nan::Export(ctx, "EVT_ITEMS_CHANGED", get_EVT_ITEMS_CHANGED);
  Nan::Export(ctx, "EVT_PROPS_CHANGED", get_EVT_PROPS_CHANGED);
  Nan::Export(ctx, "EVT_PROGRESS", get_EVT_PROGRESS);
  Nan::Export(ctx, "EVT_DONE", get_EVT_DONE);
  Nan::Export(ctx, "EVT_DESTROY", get_EVT_DESTROY);

 return RET_OK;
}

static void wrap_font_manager_unload_font(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  font_manager_t* fm = (font_manager_t*)jsvalue_get_pointer(ctx, argv[0], "font_manager_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  font_size_t size = (font_size_t)jsvalue_get_int_value(ctx, argv[2]);
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
  Nan::Export(ctx, "font_manager_unload_font", wrap_font_manager_unload_font);
  Nan::Export(ctx, "font_manager_unload_all", wrap_font_manager_unload_all);

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
  Nan::Export(ctx, "GLYPH_FMT_ALPHA", get_GLYPH_FMT_ALPHA);
  Nan::Export(ctx, "GLYPH_FMT_MONO", get_GLYPH_FMT_MONO);
  Nan::Export(ctx, "GLYPH_FMT_RGBA", get_GLYPH_FMT_RGBA);

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
  Nan::Export(ctx, "idle_add", wrap_idle_add);
  Nan::Export(ctx, "idle_remove", wrap_idle_remove);

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

static void wrap_image_manager_preload(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  image_manager_t* imm = (image_manager_t*)jsvalue_get_pointer(ctx, argv[0], "image_manager_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)image_manager_preload(imm, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t image_manager_t_init(v8::Local<v8::Object> ctx) {
  Nan::Export(ctx, "image_manager", wrap_image_manager);
  Nan::Export(ctx, "image_manager_get_bitmap", wrap_image_manager_get_bitmap);
  Nan::Export(ctx, "image_manager_preload", wrap_image_manager_preload);

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
  Nan::Export(ctx, "INPUT_TEXT", get_INPUT_TEXT);
  Nan::Export(ctx, "INPUT_INT", get_INPUT_INT);
  Nan::Export(ctx, "INPUT_UINT", get_INPUT_UINT);
  Nan::Export(ctx, "INPUT_HEX", get_INPUT_HEX);
  Nan::Export(ctx, "INPUT_FLOAT", get_INPUT_FLOAT);
  Nan::Export(ctx, "INPUT_UFLOAT", get_INPUT_UFLOAT);
  Nan::Export(ctx, "INPUT_EMAIL", get_INPUT_EMAIL);
  Nan::Export(ctx, "INPUT_PASSWORD", get_INPUT_PASSWORD);
  Nan::Export(ctx, "INPUT_PHONE", get_INPUT_PHONE);
  Nan::Export(ctx, "INPUT_CUSTOM", get_INPUT_CUSTOM);
  Nan::Export(ctx, "INPUT_CUSTOM_PASSWORD", get_INPUT_CUSTOM_PASSWORD);

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
  Nan::Export(ctx, "VALUE_TYPE_INVALID", get_VALUE_TYPE_INVALID);
  Nan::Export(ctx, "VALUE_TYPE_BOOL", get_VALUE_TYPE_BOOL);
  Nan::Export(ctx, "VALUE_TYPE_INT8", get_VALUE_TYPE_INT8);
  Nan::Export(ctx, "VALUE_TYPE_UINT8", get_VALUE_TYPE_UINT8);
  Nan::Export(ctx, "VALUE_TYPE_INT16", get_VALUE_TYPE_INT16);
  Nan::Export(ctx, "VALUE_TYPE_UINT16", get_VALUE_TYPE_UINT16);
  Nan::Export(ctx, "VALUE_TYPE_INT32", get_VALUE_TYPE_INT32);
  Nan::Export(ctx, "VALUE_TYPE_UINT32", get_VALUE_TYPE_UINT32);
  Nan::Export(ctx, "VALUE_TYPE_INT64", get_VALUE_TYPE_INT64);
  Nan::Export(ctx, "VALUE_TYPE_UINT64", get_VALUE_TYPE_UINT64);
  Nan::Export(ctx, "VALUE_TYPE_POINTER", get_VALUE_TYPE_POINTER);
  Nan::Export(ctx, "VALUE_TYPE_FLOAT", get_VALUE_TYPE_FLOAT);
  Nan::Export(ctx, "VALUE_TYPE_FLOAT32", get_VALUE_TYPE_FLOAT32);
  Nan::Export(ctx, "VALUE_TYPE_DOUBLE", get_VALUE_TYPE_DOUBLE);
  Nan::Export(ctx, "VALUE_TYPE_STRING", get_VALUE_TYPE_STRING);
  Nan::Export(ctx, "VALUE_TYPE_WSTRING", get_VALUE_TYPE_WSTRING);
  Nan::Export(ctx, "VALUE_TYPE_OBJECT", get_VALUE_TYPE_OBJECT);
  Nan::Export(ctx, "VALUE_TYPE_SIZED_STRING", get_VALUE_TYPE_SIZED_STRING);
  Nan::Export(ctx, "VALUE_TYPE_BINARY", get_VALUE_TYPE_BINARY);
  Nan::Export(ctx, "VALUE_TYPE_UBJSON", get_VALUE_TYPE_UBJSON);
  Nan::Export(ctx, "VALUE_TYPE_TOKEN", get_VALUE_TYPE_TOKEN);

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
  Nan::Export(ctx, "input_method_commit_text", wrap_input_method_commit_text);
  Nan::Export(ctx, "input_method_dispatch_key", wrap_input_method_dispatch_key);
  Nan::Export(ctx, "input_method", wrap_input_method);

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
  Nan::Export(ctx, "TK_KEY_RETURN", get_TK_KEY_RETURN);
  Nan::Export(ctx, "TK_KEY_ESCAPE", get_TK_KEY_ESCAPE);
  Nan::Export(ctx, "TK_KEY_BACKSPACE", get_TK_KEY_BACKSPACE);
  Nan::Export(ctx, "TK_KEY_TAB", get_TK_KEY_TAB);
  Nan::Export(ctx, "TK_KEY_SPACE", get_TK_KEY_SPACE);
  Nan::Export(ctx, "TK_KEY_EXCLAIM", get_TK_KEY_EXCLAIM);
  Nan::Export(ctx, "TK_KEY_QUOTEDBL", get_TK_KEY_QUOTEDBL);
  Nan::Export(ctx, "TK_KEY_HASH", get_TK_KEY_HASH);
  Nan::Export(ctx, "TK_KEY_PERCENT", get_TK_KEY_PERCENT);
  Nan::Export(ctx, "TK_KEY_DOLLAR", get_TK_KEY_DOLLAR);
  Nan::Export(ctx, "TK_KEY_AMPERSAND", get_TK_KEY_AMPERSAND);
  Nan::Export(ctx, "TK_KEY_QUOTE", get_TK_KEY_QUOTE);
  Nan::Export(ctx, "TK_KEY_LEFTPAREN", get_TK_KEY_LEFTPAREN);
  Nan::Export(ctx, "TK_KEY_RIGHTPAREN", get_TK_KEY_RIGHTPAREN);
  Nan::Export(ctx, "TK_KEY_ASTERISK", get_TK_KEY_ASTERISK);
  Nan::Export(ctx, "TK_KEY_PLUS", get_TK_KEY_PLUS);
  Nan::Export(ctx, "TK_KEY_COMMA", get_TK_KEY_COMMA);
  Nan::Export(ctx, "TK_KEY_MINUS", get_TK_KEY_MINUS);
  Nan::Export(ctx, "TK_KEY_PERIOD", get_TK_KEY_PERIOD);
  Nan::Export(ctx, "TK_KEY_SLASH", get_TK_KEY_SLASH);
  Nan::Export(ctx, "TK_KEY_0", get_TK_KEY_0);
  Nan::Export(ctx, "TK_KEY_1", get_TK_KEY_1);
  Nan::Export(ctx, "TK_KEY_2", get_TK_KEY_2);
  Nan::Export(ctx, "TK_KEY_3", get_TK_KEY_3);
  Nan::Export(ctx, "TK_KEY_4", get_TK_KEY_4);
  Nan::Export(ctx, "TK_KEY_5", get_TK_KEY_5);
  Nan::Export(ctx, "TK_KEY_6", get_TK_KEY_6);
  Nan::Export(ctx, "TK_KEY_7", get_TK_KEY_7);
  Nan::Export(ctx, "TK_KEY_8", get_TK_KEY_8);
  Nan::Export(ctx, "TK_KEY_9", get_TK_KEY_9);
  Nan::Export(ctx, "TK_KEY_COLON", get_TK_KEY_COLON);
  Nan::Export(ctx, "TK_KEY_SEMICOLON", get_TK_KEY_SEMICOLON);
  Nan::Export(ctx, "TK_KEY_LESS", get_TK_KEY_LESS);
  Nan::Export(ctx, "TK_KEY_EQUAL", get_TK_KEY_EQUAL);
  Nan::Export(ctx, "TK_KEY_GREATER", get_TK_KEY_GREATER);
  Nan::Export(ctx, "TK_KEY_QUESTION", get_TK_KEY_QUESTION);
  Nan::Export(ctx, "TK_KEY_AT", get_TK_KEY_AT);
  Nan::Export(ctx, "TK_KEY_LEFTBRACKET", get_TK_KEY_LEFTBRACKET);
  Nan::Export(ctx, "TK_KEY_BACKSLASH", get_TK_KEY_BACKSLASH);
  Nan::Export(ctx, "TK_KEY_RIGHTBRACKET", get_TK_KEY_RIGHTBRACKET);
  Nan::Export(ctx, "TK_KEY_CARET", get_TK_KEY_CARET);
  Nan::Export(ctx, "TK_KEY_UNDERSCORE", get_TK_KEY_UNDERSCORE);
  Nan::Export(ctx, "TK_KEY_BACKQUOTE", get_TK_KEY_BACKQUOTE);
  Nan::Export(ctx, "TK_KEY_a", get_TK_KEY_a);
  Nan::Export(ctx, "TK_KEY_b", get_TK_KEY_b);
  Nan::Export(ctx, "TK_KEY_c", get_TK_KEY_c);
  Nan::Export(ctx, "TK_KEY_d", get_TK_KEY_d);
  Nan::Export(ctx, "TK_KEY_e", get_TK_KEY_e);
  Nan::Export(ctx, "TK_KEY_f", get_TK_KEY_f);
  Nan::Export(ctx, "TK_KEY_g", get_TK_KEY_g);
  Nan::Export(ctx, "TK_KEY_h", get_TK_KEY_h);
  Nan::Export(ctx, "TK_KEY_i", get_TK_KEY_i);
  Nan::Export(ctx, "TK_KEY_j", get_TK_KEY_j);
  Nan::Export(ctx, "TK_KEY_k", get_TK_KEY_k);
  Nan::Export(ctx, "TK_KEY_l", get_TK_KEY_l);
  Nan::Export(ctx, "TK_KEY_m", get_TK_KEY_m);
  Nan::Export(ctx, "TK_KEY_n", get_TK_KEY_n);
  Nan::Export(ctx, "TK_KEY_o", get_TK_KEY_o);
  Nan::Export(ctx, "TK_KEY_p", get_TK_KEY_p);
  Nan::Export(ctx, "TK_KEY_q", get_TK_KEY_q);
  Nan::Export(ctx, "TK_KEY_r", get_TK_KEY_r);
  Nan::Export(ctx, "TK_KEY_s", get_TK_KEY_s);
  Nan::Export(ctx, "TK_KEY_t", get_TK_KEY_t);
  Nan::Export(ctx, "TK_KEY_u", get_TK_KEY_u);
  Nan::Export(ctx, "TK_KEY_v", get_TK_KEY_v);
  Nan::Export(ctx, "TK_KEY_w", get_TK_KEY_w);
  Nan::Export(ctx, "TK_KEY_x", get_TK_KEY_x);
  Nan::Export(ctx, "TK_KEY_y", get_TK_KEY_y);
  Nan::Export(ctx, "TK_KEY_z", get_TK_KEY_z);
  Nan::Export(ctx, "TK_KEY_A", get_TK_KEY_A);
  Nan::Export(ctx, "TK_KEY_B", get_TK_KEY_B);
  Nan::Export(ctx, "TK_KEY_C", get_TK_KEY_C);
  Nan::Export(ctx, "TK_KEY_D", get_TK_KEY_D);
  Nan::Export(ctx, "TK_KEY_E", get_TK_KEY_E);
  Nan::Export(ctx, "TK_KEY_F", get_TK_KEY_F);
  Nan::Export(ctx, "TK_KEY_G", get_TK_KEY_G);
  Nan::Export(ctx, "TK_KEY_H", get_TK_KEY_H);
  Nan::Export(ctx, "TK_KEY_I", get_TK_KEY_I);
  Nan::Export(ctx, "TK_KEY_J", get_TK_KEY_J);
  Nan::Export(ctx, "TK_KEY_K", get_TK_KEY_K);
  Nan::Export(ctx, "TK_KEY_L", get_TK_KEY_L);
  Nan::Export(ctx, "TK_KEY_M", get_TK_KEY_M);
  Nan::Export(ctx, "TK_KEY_N", get_TK_KEY_N);
  Nan::Export(ctx, "TK_KEY_O", get_TK_KEY_O);
  Nan::Export(ctx, "TK_KEY_P", get_TK_KEY_P);
  Nan::Export(ctx, "TK_KEY_Q", get_TK_KEY_Q);
  Nan::Export(ctx, "TK_KEY_R", get_TK_KEY_R);
  Nan::Export(ctx, "TK_KEY_S", get_TK_KEY_S);
  Nan::Export(ctx, "TK_KEY_T", get_TK_KEY_T);
  Nan::Export(ctx, "TK_KEY_U", get_TK_KEY_U);
  Nan::Export(ctx, "TK_KEY_V", get_TK_KEY_V);
  Nan::Export(ctx, "TK_KEY_W", get_TK_KEY_W);
  Nan::Export(ctx, "TK_KEY_X", get_TK_KEY_X);
  Nan::Export(ctx, "TK_KEY_Y", get_TK_KEY_Y);
  Nan::Export(ctx, "TK_KEY_Z", get_TK_KEY_Z);
  Nan::Export(ctx, "TK_KEY_DOT", get_TK_KEY_DOT);
  Nan::Export(ctx, "TK_KEY_DELETE", get_TK_KEY_DELETE);
  Nan::Export(ctx, "TK_KEY_LEFTBRACE", get_TK_KEY_LEFTBRACE);
  Nan::Export(ctx, "TK_KEY_RIGHTBRACE", get_TK_KEY_RIGHTBRACE);
  Nan::Export(ctx, "TK_KEY_LSHIFT", get_TK_KEY_LSHIFT);
  Nan::Export(ctx, "TK_KEY_RSHIFT", get_TK_KEY_RSHIFT);
  Nan::Export(ctx, "TK_KEY_LCTRL", get_TK_KEY_LCTRL);
  Nan::Export(ctx, "TK_KEY_RCTRL", get_TK_KEY_RCTRL);
  Nan::Export(ctx, "TK_KEY_LALT", get_TK_KEY_LALT);
  Nan::Export(ctx, "TK_KEY_RALT", get_TK_KEY_RALT);
  Nan::Export(ctx, "TK_KEY_CAPSLOCK", get_TK_KEY_CAPSLOCK);
  Nan::Export(ctx, "TK_KEY_HOME", get_TK_KEY_HOME);
  Nan::Export(ctx, "TK_KEY_END", get_TK_KEY_END);
  Nan::Export(ctx, "TK_KEY_INSERT", get_TK_KEY_INSERT);
  Nan::Export(ctx, "TK_KEY_UP", get_TK_KEY_UP);
  Nan::Export(ctx, "TK_KEY_DOWN", get_TK_KEY_DOWN);
  Nan::Export(ctx, "TK_KEY_LEFT", get_TK_KEY_LEFT);
  Nan::Export(ctx, "TK_KEY_RIGHT", get_TK_KEY_RIGHT);
  Nan::Export(ctx, "TK_KEY_PAGEUP", get_TK_KEY_PAGEUP);
  Nan::Export(ctx, "TK_KEY_PAGEDOWN", get_TK_KEY_PAGEDOWN);
  Nan::Export(ctx, "TK_KEY_F1", get_TK_KEY_F1);
  Nan::Export(ctx, "TK_KEY_F2", get_TK_KEY_F2);
  Nan::Export(ctx, "TK_KEY_F3", get_TK_KEY_F3);
  Nan::Export(ctx, "TK_KEY_F4", get_TK_KEY_F4);
  Nan::Export(ctx, "TK_KEY_F5", get_TK_KEY_F5);
  Nan::Export(ctx, "TK_KEY_F6", get_TK_KEY_F6);
  Nan::Export(ctx, "TK_KEY_F7", get_TK_KEY_F7);
  Nan::Export(ctx, "TK_KEY_F8", get_TK_KEY_F8);
  Nan::Export(ctx, "TK_KEY_F9", get_TK_KEY_F9);
  Nan::Export(ctx, "TK_KEY_F10", get_TK_KEY_F10);
  Nan::Export(ctx, "TK_KEY_F11", get_TK_KEY_F11);
  Nan::Export(ctx, "TK_KEY_F12", get_TK_KEY_F12);
  Nan::Export(ctx, "TK_KEY_MENU", get_TK_KEY_MENU);
  Nan::Export(ctx, "TK_KEY_COMMAND", get_TK_KEY_COMMAND);
  Nan::Export(ctx, "TK_KEY_BACK", get_TK_KEY_BACK);
  Nan::Export(ctx, "TK_KEY_CANCEL", get_TK_KEY_CANCEL);

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
  Nan::Export(ctx, "locale_info", wrap_locale_info);
  Nan::Export(ctx, "locale_info_tr", wrap_locale_info_tr);
  Nan::Export(ctx, "locale_info_change", wrap_locale_info_change);
  Nan::Export(ctx, "locale_info_off", wrap_locale_info_off);

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
  Nan::Export(ctx, "STYLE_ID_BG_COLOR", get_STYLE_ID_BG_COLOR);
  Nan::Export(ctx, "STYLE_ID_FG_COLOR", get_STYLE_ID_FG_COLOR);
  Nan::Export(ctx, "STYLE_ID_MASK_COLOR", get_STYLE_ID_MASK_COLOR);
  Nan::Export(ctx, "STYLE_ID_FONT_NAME", get_STYLE_ID_FONT_NAME);
  Nan::Export(ctx, "STYLE_ID_FONT_SIZE", get_STYLE_ID_FONT_SIZE);
  Nan::Export(ctx, "STYLE_ID_FONT_STYLE", get_STYLE_ID_FONT_STYLE);
  Nan::Export(ctx, "STYLE_ID_TEXT_COLOR", get_STYLE_ID_TEXT_COLOR);
  Nan::Export(ctx, "STYLE_ID_TIPS_TEXT_COLOR", get_STYLE_ID_TIPS_TEXT_COLOR);
  Nan::Export(ctx, "STYLE_ID_TEXT_ALIGN_H", get_STYLE_ID_TEXT_ALIGN_H);
  Nan::Export(ctx, "STYLE_ID_TEXT_ALIGN_V", get_STYLE_ID_TEXT_ALIGN_V);
  Nan::Export(ctx, "STYLE_ID_BORDER_COLOR", get_STYLE_ID_BORDER_COLOR);
  Nan::Export(ctx, "STYLE_ID_BORDER_WIDTH", get_STYLE_ID_BORDER_WIDTH);
  Nan::Export(ctx, "STYLE_ID_BORDER", get_STYLE_ID_BORDER);
  Nan::Export(ctx, "STYLE_ID_BG_IMAGE", get_STYLE_ID_BG_IMAGE);
  Nan::Export(ctx, "STYLE_ID_BG_IMAGE_DRAW_TYPE", get_STYLE_ID_BG_IMAGE_DRAW_TYPE);
  Nan::Export(ctx, "STYLE_ID_ICON", get_STYLE_ID_ICON);
  Nan::Export(ctx, "STYLE_ID_FG_IMAGE", get_STYLE_ID_FG_IMAGE);
  Nan::Export(ctx, "STYLE_ID_FG_IMAGE_DRAW_TYPE", get_STYLE_ID_FG_IMAGE_DRAW_TYPE);
  Nan::Export(ctx, "STYLE_ID_SPACER", get_STYLE_ID_SPACER);
  Nan::Export(ctx, "STYLE_ID_MARGIN", get_STYLE_ID_MARGIN);
  Nan::Export(ctx, "STYLE_ID_MARGIN_LEFT", get_STYLE_ID_MARGIN_LEFT);
  Nan::Export(ctx, "STYLE_ID_MARGIN_RIGHT", get_STYLE_ID_MARGIN_RIGHT);
  Nan::Export(ctx, "STYLE_ID_MARGIN_TOP", get_STYLE_ID_MARGIN_TOP);
  Nan::Export(ctx, "STYLE_ID_MARGIN_BOTTOM", get_STYLE_ID_MARGIN_BOTTOM);
  Nan::Export(ctx, "STYLE_ID_ICON_AT", get_STYLE_ID_ICON_AT);
  Nan::Export(ctx, "STYLE_ID_ACTIVE_ICON", get_STYLE_ID_ACTIVE_ICON);
  Nan::Export(ctx, "STYLE_ID_X_OFFSET", get_STYLE_ID_X_OFFSET);
  Nan::Export(ctx, "STYLE_ID_Y_OFFSET", get_STYLE_ID_Y_OFFSET);
  Nan::Export(ctx, "STYLE_ID_SELECTED_BG_COLOR", get_STYLE_ID_SELECTED_BG_COLOR);
  Nan::Export(ctx, "STYLE_ID_SELECTED_FG_COLOR", get_STYLE_ID_SELECTED_FG_COLOR);
  Nan::Export(ctx, "STYLE_ID_SELECTED_TEXT_COLOR", get_STYLE_ID_SELECTED_TEXT_COLOR);
  Nan::Export(ctx, "STYLE_ID_ROUND_RADIUS", get_STYLE_ID_ROUND_RADIUS);
  Nan::Export(ctx, "STYLE_ID_CHILDREN_LAYOUT", get_STYLE_ID_CHILDREN_LAYOUT);
  Nan::Export(ctx, "STYLE_ID_SELF_LAYOUT", get_STYLE_ID_SELF_LAYOUT);

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
  Nan::Export(ctx, "style_notify_widget_state_changed", wrap_style_notify_widget_state_changed);
  Nan::Export(ctx, "style_is_valid", wrap_style_is_valid);
  Nan::Export(ctx, "style_get_int", wrap_style_get_int);
  Nan::Export(ctx, "style_get_str", wrap_style_get_str);
  Nan::Export(ctx, "style_set", wrap_style_set);
  Nan::Export(ctx, "style_is_mutable", wrap_style_is_mutable);

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
  Nan::Export(ctx, "theme", wrap_theme);

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
  Nan::Export(ctx, "timer_add", wrap_timer_add);
  Nan::Export(ctx, "timer_remove", wrap_timer_remove);
  Nan::Export(ctx, "timer_reset", wrap_timer_reset);
  Nan::Export(ctx, "timer_modify", wrap_timer_modify);

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
  Nan::Export(ctx, "ALIGN_V_NONE", get_ALIGN_V_NONE);
  Nan::Export(ctx, "ALIGN_V_MIDDLE", get_ALIGN_V_MIDDLE);
  Nan::Export(ctx, "ALIGN_V_TOP", get_ALIGN_V_TOP);
  Nan::Export(ctx, "ALIGN_V_BOTTOM", get_ALIGN_V_BOTTOM);

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
  Nan::Export(ctx, "ALIGN_H_NONE", get_ALIGN_H_NONE);
  Nan::Export(ctx, "ALIGN_H_CENTER", get_ALIGN_H_CENTER);
  Nan::Export(ctx, "ALIGN_H_LEFT", get_ALIGN_H_LEFT);
  Nan::Export(ctx, "ALIGN_H_RIGHT", get_ALIGN_H_RIGHT);

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
  Nan::Export(ctx, "APP_MOBILE", get_APP_MOBILE);
  Nan::Export(ctx, "APP_SIMULATOR", get_APP_SIMULATOR);
  Nan::Export(ctx, "APP_DESKTOP", get_APP_DESKTOP);

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
  Nan::Export(ctx, "BITMAP_FMT_NONE", get_BITMAP_FMT_NONE);
  Nan::Export(ctx, "BITMAP_FMT_RGBA8888", get_BITMAP_FMT_RGBA8888);
  Nan::Export(ctx, "BITMAP_FMT_ABGR8888", get_BITMAP_FMT_ABGR8888);
  Nan::Export(ctx, "BITMAP_FMT_BGRA8888", get_BITMAP_FMT_BGRA8888);
  Nan::Export(ctx, "BITMAP_FMT_ARGB8888", get_BITMAP_FMT_ARGB8888);
  Nan::Export(ctx, "BITMAP_FMT_RGB565", get_BITMAP_FMT_RGB565);
  Nan::Export(ctx, "BITMAP_FMT_BGR565", get_BITMAP_FMT_BGR565);
  Nan::Export(ctx, "BITMAP_FMT_RGB888", get_BITMAP_FMT_RGB888);
  Nan::Export(ctx, "BITMAP_FMT_BGR888", get_BITMAP_FMT_BGR888);
  Nan::Export(ctx, "BITMAP_FMT_GRAY", get_BITMAP_FMT_GRAY);
  Nan::Export(ctx, "BITMAP_FMT_MONO", get_BITMAP_FMT_MONO);

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
  Nan::Export(ctx, "BITMAP_FLAG_NONE", get_BITMAP_FLAG_NONE);
  Nan::Export(ctx, "BITMAP_FLAG_OPAQUE", get_BITMAP_FLAG_OPAQUE);
  Nan::Export(ctx, "BITMAP_FLAG_IMMUTABLE", get_BITMAP_FLAG_IMMUTABLE);
  Nan::Export(ctx, "BITMAP_FLAG_TEXTURE", get_BITMAP_FLAG_TEXTURE);
  Nan::Export(ctx, "BITMAP_FLAG_CHANGED", get_BITMAP_FLAG_CHANGED);
  Nan::Export(ctx, "BITMAP_FLAG_PREMULTI_ALPHA", get_BITMAP_FLAG_PREMULTI_ALPHA);

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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->ratio));
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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->line_width));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_t_get_prop_global_alpha(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->global_alpha));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_vgcanvas_t_get_prop_miter_limit(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->miter_limit));
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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->font_size));
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
  Nan::Export(ctx, "vgcanvas_cast", wrap_vgcanvas_cast);
  Nan::Export(ctx, "vgcanvas_flush", wrap_vgcanvas_flush);
  Nan::Export(ctx, "vgcanvas_begin_path", wrap_vgcanvas_begin_path);
  Nan::Export(ctx, "vgcanvas_move_to", wrap_vgcanvas_move_to);
  Nan::Export(ctx, "vgcanvas_line_to", wrap_vgcanvas_line_to);
  Nan::Export(ctx, "vgcanvas_quad_to", wrap_vgcanvas_quad_to);
  Nan::Export(ctx, "vgcanvas_bezier_to", wrap_vgcanvas_bezier_to);
  Nan::Export(ctx, "vgcanvas_arc_to", wrap_vgcanvas_arc_to);
  Nan::Export(ctx, "vgcanvas_arc", wrap_vgcanvas_arc);
  Nan::Export(ctx, "vgcanvas_is_point_in_path", wrap_vgcanvas_is_point_in_path);
  Nan::Export(ctx, "vgcanvas_rect", wrap_vgcanvas_rect);
  Nan::Export(ctx, "vgcanvas_rounded_rect", wrap_vgcanvas_rounded_rect);
  Nan::Export(ctx, "vgcanvas_ellipse", wrap_vgcanvas_ellipse);
  Nan::Export(ctx, "vgcanvas_close_path", wrap_vgcanvas_close_path);
  Nan::Export(ctx, "vgcanvas_path_winding", wrap_vgcanvas_path_winding);
  Nan::Export(ctx, "vgcanvas_rotate", wrap_vgcanvas_rotate);
  Nan::Export(ctx, "vgcanvas_scale", wrap_vgcanvas_scale);
  Nan::Export(ctx, "vgcanvas_translate", wrap_vgcanvas_translate);
  Nan::Export(ctx, "vgcanvas_transform", wrap_vgcanvas_transform);
  Nan::Export(ctx, "vgcanvas_set_transform", wrap_vgcanvas_set_transform);
  Nan::Export(ctx, "vgcanvas_clip_rect", wrap_vgcanvas_clip_rect);
  Nan::Export(ctx, "vgcanvas_fill", wrap_vgcanvas_fill);
  Nan::Export(ctx, "vgcanvas_stroke", wrap_vgcanvas_stroke);
  Nan::Export(ctx, "vgcanvas_paint", wrap_vgcanvas_paint);
  Nan::Export(ctx, "vgcanvas_set_font", wrap_vgcanvas_set_font);
  Nan::Export(ctx, "vgcanvas_set_font_size", wrap_vgcanvas_set_font_size);
  Nan::Export(ctx, "vgcanvas_set_text_align", wrap_vgcanvas_set_text_align);
  Nan::Export(ctx, "vgcanvas_set_text_baseline", wrap_vgcanvas_set_text_baseline);
  Nan::Export(ctx, "vgcanvas_fill_text", wrap_vgcanvas_fill_text);
  Nan::Export(ctx, "vgcanvas_measure_text", wrap_vgcanvas_measure_text);
  Nan::Export(ctx, "vgcanvas_draw_image", wrap_vgcanvas_draw_image);
  Nan::Export(ctx, "vgcanvas_draw_icon", wrap_vgcanvas_draw_icon);
  Nan::Export(ctx, "vgcanvas_set_antialias", wrap_vgcanvas_set_antialias);
  Nan::Export(ctx, "vgcanvas_set_global_alpha", wrap_vgcanvas_set_global_alpha);
  Nan::Export(ctx, "vgcanvas_set_line_width", wrap_vgcanvas_set_line_width);
  Nan::Export(ctx, "vgcanvas_set_fill_color_str", wrap_vgcanvas_set_fill_color_str);
  Nan::Export(ctx, "vgcanvas_set_stroke_color_str", wrap_vgcanvas_set_stroke_color_str);
  Nan::Export(ctx, "vgcanvas_set_line_cap", wrap_vgcanvas_set_line_cap);
  Nan::Export(ctx, "vgcanvas_set_line_join", wrap_vgcanvas_set_line_join);
  Nan::Export(ctx, "vgcanvas_set_miter_limit", wrap_vgcanvas_set_miter_limit);
  Nan::Export(ctx, "vgcanvas_save", wrap_vgcanvas_save);
  Nan::Export(ctx, "vgcanvas_restore", wrap_vgcanvas_restore);
  Nan::Export(ctx, "vgcanvas_t_get_prop_w", wrap_vgcanvas_t_get_prop_w);
  Nan::Export(ctx, "vgcanvas_t_get_prop_h", wrap_vgcanvas_t_get_prop_h);
  Nan::Export(ctx, "vgcanvas_t_get_prop_stride", wrap_vgcanvas_t_get_prop_stride);
  Nan::Export(ctx, "vgcanvas_t_get_prop_ratio", wrap_vgcanvas_t_get_prop_ratio);
  Nan::Export(ctx, "vgcanvas_t_get_prop_anti_alias", wrap_vgcanvas_t_get_prop_anti_alias);
  Nan::Export(ctx, "vgcanvas_t_get_prop_line_width", wrap_vgcanvas_t_get_prop_line_width);
  Nan::Export(ctx, "vgcanvas_t_get_prop_global_alpha", wrap_vgcanvas_t_get_prop_global_alpha);
  Nan::Export(ctx, "vgcanvas_t_get_prop_miter_limit", wrap_vgcanvas_t_get_prop_miter_limit);
  Nan::Export(ctx, "vgcanvas_t_get_prop_line_cap", wrap_vgcanvas_t_get_prop_line_cap);
  Nan::Export(ctx, "vgcanvas_t_get_prop_line_join", wrap_vgcanvas_t_get_prop_line_join);
  Nan::Export(ctx, "vgcanvas_t_get_prop_font", wrap_vgcanvas_t_get_prop_font);
  Nan::Export(ctx, "vgcanvas_t_get_prop_font_size", wrap_vgcanvas_t_get_prop_font_size);
  Nan::Export(ctx, "vgcanvas_t_get_prop_text_align", wrap_vgcanvas_t_get_prop_text_align);
  Nan::Export(ctx, "vgcanvas_t_get_prop_text_baseline", wrap_vgcanvas_t_get_prop_text_baseline);

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

static void get_WIDGET_PROP_DIRTY_RECT_TOLERANCE(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::String> jret= Nan::New((const char*)WIDGET_PROP_DIRTY_RECT_TOLERANCE).ToLocalChecked();
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
  Nan::Export(ctx, "WIDGET_PROP_EXEC", get_WIDGET_PROP_EXEC);
  Nan::Export(ctx, "WIDGET_PROP_X", get_WIDGET_PROP_X);
  Nan::Export(ctx, "WIDGET_PROP_Y", get_WIDGET_PROP_Y);
  Nan::Export(ctx, "WIDGET_PROP_W", get_WIDGET_PROP_W);
  Nan::Export(ctx, "WIDGET_PROP_H", get_WIDGET_PROP_H);
  Nan::Export(ctx, "WIDGET_PROP_DIRTY_RECT_TOLERANCE", get_WIDGET_PROP_DIRTY_RECT_TOLERANCE);
  Nan::Export(ctx, "WIDGET_PROP_CANVAS", get_WIDGET_PROP_CANVAS);
  Nan::Export(ctx, "WIDGET_PROP_LOCALIZE_OPTIONS", get_WIDGET_PROP_LOCALIZE_OPTIONS);
  Nan::Export(ctx, "WIDGET_PROP_NATIVE_WINDOW", get_WIDGET_PROP_NATIVE_WINDOW);
  Nan::Export(ctx, "WIDGET_PROP_HIGHLIGHT", get_WIDGET_PROP_HIGHLIGHT);
  Nan::Export(ctx, "WIDGET_PROP_BAR_SIZE", get_WIDGET_PROP_BAR_SIZE);
  Nan::Export(ctx, "WIDGET_PROP_OPACITY", get_WIDGET_PROP_OPACITY);
  Nan::Export(ctx, "WIDGET_PROP_MIN_W", get_WIDGET_PROP_MIN_W);
  Nan::Export(ctx, "WIDGET_PROP_MAX_W", get_WIDGET_PROP_MAX_W);
  Nan::Export(ctx, "WIDGET_PROP_CHILDREN_LAYOUT", get_WIDGET_PROP_CHILDREN_LAYOUT);
  Nan::Export(ctx, "WIDGET_PROP_LAYOUT", get_WIDGET_PROP_LAYOUT);
  Nan::Export(ctx, "WIDGET_PROP_SELF_LAYOUT", get_WIDGET_PROP_SELF_LAYOUT);
  Nan::Export(ctx, "WIDGET_PROP_LAYOUT_W", get_WIDGET_PROP_LAYOUT_W);
  Nan::Export(ctx, "WIDGET_PROP_LAYOUT_H", get_WIDGET_PROP_LAYOUT_H);
  Nan::Export(ctx, "WIDGET_PROP_VIRTUAL_W", get_WIDGET_PROP_VIRTUAL_W);
  Nan::Export(ctx, "WIDGET_PROP_VIRTUAL_H", get_WIDGET_PROP_VIRTUAL_H);
  Nan::Export(ctx, "WIDGET_PROP_NAME", get_WIDGET_PROP_NAME);
  Nan::Export(ctx, "WIDGET_PROP_TYPE", get_WIDGET_PROP_TYPE);
  Nan::Export(ctx, "WIDGET_PROP_CLOSABLE", get_WIDGET_PROP_CLOSABLE);
  Nan::Export(ctx, "WIDGET_PROP_CURSOR", get_WIDGET_PROP_CURSOR);
  Nan::Export(ctx, "WIDGET_PROP_VALUE", get_WIDGET_PROP_VALUE);
  Nan::Export(ctx, "WIDGET_PROP_LENGTH", get_WIDGET_PROP_LENGTH);
  Nan::Export(ctx, "WIDGET_PROP_TEXT", get_WIDGET_PROP_TEXT);
  Nan::Export(ctx, "WIDGET_PROP_TR_TEXT", get_WIDGET_PROP_TR_TEXT);
  Nan::Export(ctx, "WIDGET_PROP_STYLE", get_WIDGET_PROP_STYLE);
  Nan::Export(ctx, "WIDGET_PROP_ENABLE", get_WIDGET_PROP_ENABLE);
  Nan::Export(ctx, "WIDGET_PROP_FEEDBACK", get_WIDGET_PROP_FEEDBACK);
  Nan::Export(ctx, "WIDGET_PROP_FLOATING", get_WIDGET_PROP_FLOATING);
  Nan::Export(ctx, "WIDGET_PROP_MARGIN", get_WIDGET_PROP_MARGIN);
  Nan::Export(ctx, "WIDGET_PROP_SPACING", get_WIDGET_PROP_SPACING);
  Nan::Export(ctx, "WIDGET_PROP_LEFT_MARGIN", get_WIDGET_PROP_LEFT_MARGIN);
  Nan::Export(ctx, "WIDGET_PROP_RIGHT_MARGIN", get_WIDGET_PROP_RIGHT_MARGIN);
  Nan::Export(ctx, "WIDGET_PROP_TOP_MARGIN", get_WIDGET_PROP_TOP_MARGIN);
  Nan::Export(ctx, "WIDGET_PROP_BOTTOM_MARGIN", get_WIDGET_PROP_BOTTOM_MARGIN);
  Nan::Export(ctx, "WIDGET_PROP_STEP", get_WIDGET_PROP_STEP);
  Nan::Export(ctx, "WIDGET_PROP_VISIBLE", get_WIDGET_PROP_VISIBLE);
  Nan::Export(ctx, "WIDGET_PROP_SENSITIVE", get_WIDGET_PROP_SENSITIVE);
  Nan::Export(ctx, "WIDGET_PROP_ANIMATION", get_WIDGET_PROP_ANIMATION);
  Nan::Export(ctx, "WIDGET_PROP_ANIM_HINT", get_WIDGET_PROP_ANIM_HINT);
  Nan::Export(ctx, "WIDGET_PROP_FULLSCREEN", get_WIDGET_PROP_FULLSCREEN);
  Nan::Export(ctx, "WIDGET_PROP_OPEN_ANIM_HINT", get_WIDGET_PROP_OPEN_ANIM_HINT);
  Nan::Export(ctx, "WIDGET_PROP_CLOSE_ANIM_HINT", get_WIDGET_PROP_CLOSE_ANIM_HINT);
  Nan::Export(ctx, "WIDGET_PROP_MIN", get_WIDGET_PROP_MIN);
  Nan::Export(ctx, "WIDGET_PROP_TIPS", get_WIDGET_PROP_TIPS);
  Nan::Export(ctx, "WIDGET_PROP_INPUT_TYPE", get_WIDGET_PROP_INPUT_TYPE);
  Nan::Export(ctx, "WIDGET_PROP_READONLY", get_WIDGET_PROP_READONLY);
  Nan::Export(ctx, "WIDGET_PROP_PASSWORD_VISIBLE", get_WIDGET_PROP_PASSWORD_VISIBLE);
  Nan::Export(ctx, "WIDGET_PROP_ACTIVE", get_WIDGET_PROP_ACTIVE);
  Nan::Export(ctx, "WIDGET_PROP_VERTICAL", get_WIDGET_PROP_VERTICAL);
  Nan::Export(ctx, "WIDGET_PROP_SHOW_TEXT", get_WIDGET_PROP_SHOW_TEXT);
  Nan::Export(ctx, "WIDGET_PROP_XOFFSET", get_WIDGET_PROP_XOFFSET);
  Nan::Export(ctx, "WIDGET_PROP_YOFFSET", get_WIDGET_PROP_YOFFSET);
  Nan::Export(ctx, "WIDGET_PROP_ALIGN_V", get_WIDGET_PROP_ALIGN_V);
  Nan::Export(ctx, "WIDGET_PROP_ALIGN_H", get_WIDGET_PROP_ALIGN_H);
  Nan::Export(ctx, "WIDGET_PROP_AUTO_PLAY", get_WIDGET_PROP_AUTO_PLAY);
  Nan::Export(ctx, "WIDGET_PROP_LOOP", get_WIDGET_PROP_LOOP);
  Nan::Export(ctx, "WIDGET_PROP_AUTO_FIX", get_WIDGET_PROP_AUTO_FIX);
  Nan::Export(ctx, "WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED", get_WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED);
  Nan::Export(ctx, "WIDGET_PROP_OPEN_IM_WHEN_FOCUSED", get_WIDGET_PROP_OPEN_IM_WHEN_FOCUSED);
  Nan::Export(ctx, "WIDGET_PROP_X_MIN", get_WIDGET_PROP_X_MIN);
  Nan::Export(ctx, "WIDGET_PROP_X_MAX", get_WIDGET_PROP_X_MAX);
  Nan::Export(ctx, "WIDGET_PROP_Y_MIN", get_WIDGET_PROP_Y_MIN);
  Nan::Export(ctx, "WIDGET_PROP_Y_MAX", get_WIDGET_PROP_Y_MAX);
  Nan::Export(ctx, "WIDGET_PROP_MAX", get_WIDGET_PROP_MAX);
  Nan::Export(ctx, "WIDGET_PROP_GRAB_KEYS", get_WIDGET_PROP_GRAB_KEYS);
  Nan::Export(ctx, "WIDGET_PROP_ROW", get_WIDGET_PROP_ROW);
  Nan::Export(ctx, "WIDGET_PROP_STATE_FOR_STYLE", get_WIDGET_PROP_STATE_FOR_STYLE);
  Nan::Export(ctx, "WIDGET_PROP_THEME", get_WIDGET_PROP_THEME);
  Nan::Export(ctx, "WIDGET_PROP_STAGE", get_WIDGET_PROP_STAGE);
  Nan::Export(ctx, "WIDGET_PROP_IMAGE_MANAGER", get_WIDGET_PROP_IMAGE_MANAGER);
  Nan::Export(ctx, "WIDGET_PROP_ASSETS_MANAGER", get_WIDGET_PROP_ASSETS_MANAGER);
  Nan::Export(ctx, "WIDGET_PROP_LOCALE_INFO", get_WIDGET_PROP_LOCALE_INFO);
  Nan::Export(ctx, "WIDGET_PROP_FONT_MANAGER", get_WIDGET_PROP_FONT_MANAGER);
  Nan::Export(ctx, "WIDGET_PROP_THEME_OBJ", get_WIDGET_PROP_THEME_OBJ);
  Nan::Export(ctx, "WIDGET_PROP_DEFAULT_THEME_OBJ", get_WIDGET_PROP_DEFAULT_THEME_OBJ);
  Nan::Export(ctx, "WIDGET_PROP_ITEM_WIDTH", get_WIDGET_PROP_ITEM_WIDTH);
  Nan::Export(ctx, "WIDGET_PROP_ITEM_HEIGHT", get_WIDGET_PROP_ITEM_HEIGHT);
  Nan::Export(ctx, "WIDGET_PROP_DEFAULT_ITEM_HEIGHT", get_WIDGET_PROP_DEFAULT_ITEM_HEIGHT);
  Nan::Export(ctx, "WIDGET_PROP_XSLIDABLE", get_WIDGET_PROP_XSLIDABLE);
  Nan::Export(ctx, "WIDGET_PROP_YSLIDABLE", get_WIDGET_PROP_YSLIDABLE);
  Nan::Export(ctx, "WIDGET_PROP_REPEAT", get_WIDGET_PROP_REPEAT);
  Nan::Export(ctx, "WIDGET_PROP_ENABLE_LONG_PRESS", get_WIDGET_PROP_ENABLE_LONG_PRESS);
  Nan::Export(ctx, "WIDGET_PROP_ANIMATABLE", get_WIDGET_PROP_ANIMATABLE);
  Nan::Export(ctx, "WIDGET_PROP_AUTO_HIDE_SCROLL_BAR", get_WIDGET_PROP_AUTO_HIDE_SCROLL_BAR);
  Nan::Export(ctx, "WIDGET_PROP_IMAGE", get_WIDGET_PROP_IMAGE);
  Nan::Export(ctx, "WIDGET_PROP_FORMAT", get_WIDGET_PROP_FORMAT);
  Nan::Export(ctx, "WIDGET_PROP_DRAW_TYPE", get_WIDGET_PROP_DRAW_TYPE);
  Nan::Export(ctx, "WIDGET_PROP_SELECTABLE", get_WIDGET_PROP_SELECTABLE);
  Nan::Export(ctx, "WIDGET_PROP_CLICKABLE", get_WIDGET_PROP_CLICKABLE);
  Nan::Export(ctx, "WIDGET_PROP_SCALE_X", get_WIDGET_PROP_SCALE_X);
  Nan::Export(ctx, "WIDGET_PROP_SCALE_Y", get_WIDGET_PROP_SCALE_Y);
  Nan::Export(ctx, "WIDGET_PROP_ANCHOR_X", get_WIDGET_PROP_ANCHOR_X);
  Nan::Export(ctx, "WIDGET_PROP_ANCHOR_Y", get_WIDGET_PROP_ANCHOR_Y);
  Nan::Export(ctx, "WIDGET_PROP_ROTATION", get_WIDGET_PROP_ROTATION);
  Nan::Export(ctx, "WIDGET_PROP_COMPACT", get_WIDGET_PROP_COMPACT);
  Nan::Export(ctx, "WIDGET_PROP_SCROLLABLE", get_WIDGET_PROP_SCROLLABLE);
  Nan::Export(ctx, "WIDGET_PROP_ICON", get_WIDGET_PROP_ICON);
  Nan::Export(ctx, "WIDGET_PROP_OPTIONS", get_WIDGET_PROP_OPTIONS);
  Nan::Export(ctx, "WIDGET_PROP_SELECTED", get_WIDGET_PROP_SELECTED);
  Nan::Export(ctx, "WIDGET_PROP_CHECKED", get_WIDGET_PROP_CHECKED);
  Nan::Export(ctx, "WIDGET_PROP_ACTIVE_ICON", get_WIDGET_PROP_ACTIVE_ICON);
  Nan::Export(ctx, "WIDGET_PROP_LOAD_UI", get_WIDGET_PROP_LOAD_UI);
  Nan::Export(ctx, "WIDGET_PROP_OPEN_WINDOW", get_WIDGET_PROP_OPEN_WINDOW);
  Nan::Export(ctx, "WIDGET_PROP_SELECTED_INDEX", get_WIDGET_PROP_SELECTED_INDEX);
  Nan::Export(ctx, "WIDGET_PROP_CLOSE_WHEN_CLICK", get_WIDGET_PROP_CLOSE_WHEN_CLICK);
  Nan::Export(ctx, "WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE", get_WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE);
  Nan::Export(ctx, "WIDGET_PROP_LINE_GAP", get_WIDGET_PROP_LINE_GAP);
  Nan::Export(ctx, "WIDGET_PROP_BG_COLOR", get_WIDGET_PROP_BG_COLOR);
  Nan::Export(ctx, "WIDGET_PROP_BORDER_COLOR", get_WIDGET_PROP_BORDER_COLOR);
  Nan::Export(ctx, "WIDGET_PROP_DELAY", get_WIDGET_PROP_DELAY);
  Nan::Export(ctx, "WIDGET_PROP_IS_KEYBOARD", get_WIDGET_PROP_IS_KEYBOARD);
  Nan::Export(ctx, "WIDGET_PROP_FOCUSED", get_WIDGET_PROP_FOCUSED);
  Nan::Export(ctx, "WIDGET_PROP_FOCUS", get_WIDGET_PROP_FOCUS);
  Nan::Export(ctx, "WIDGET_PROP_FOCUSABLE", get_WIDGET_PROP_FOCUSABLE);
  Nan::Export(ctx, "WIDGET_PROP_WITH_FOCUS_STATE", get_WIDGET_PROP_WITH_FOCUS_STATE);
  Nan::Export(ctx, "WIDGET_PROP_MOVE_FOCUS_PREV_KEY", get_WIDGET_PROP_MOVE_FOCUS_PREV_KEY);
  Nan::Export(ctx, "WIDGET_PROP_MOVE_FOCUS_NEXT_KEY", get_WIDGET_PROP_MOVE_FOCUS_NEXT_KEY);
  Nan::Export(ctx, "WIDGET_PROP_MOVE_FOCUS_UP_KEY", get_WIDGET_PROP_MOVE_FOCUS_UP_KEY);
  Nan::Export(ctx, "WIDGET_PROP_MOVE_FOCUS_DOWN_KEY", get_WIDGET_PROP_MOVE_FOCUS_DOWN_KEY);
  Nan::Export(ctx, "WIDGET_PROP_MOVE_FOCUS_LEFT_KEY", get_WIDGET_PROP_MOVE_FOCUS_LEFT_KEY);
  Nan::Export(ctx, "WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY", get_WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY);

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
  Nan::Export(ctx, "WIDGET_TYPE_NONE", get_WIDGET_TYPE_NONE);
  Nan::Export(ctx, "WIDGET_TYPE_WINDOW_MANAGER", get_WIDGET_TYPE_WINDOW_MANAGER);
  Nan::Export(ctx, "WIDGET_TYPE_NORMAL_WINDOW", get_WIDGET_TYPE_NORMAL_WINDOW);
  Nan::Export(ctx, "WIDGET_TYPE_OVERLAY", get_WIDGET_TYPE_OVERLAY);
  Nan::Export(ctx, "WIDGET_TYPE_TOOL_BAR", get_WIDGET_TYPE_TOOL_BAR);
  Nan::Export(ctx, "WIDGET_TYPE_DIALOG", get_WIDGET_TYPE_DIALOG);
  Nan::Export(ctx, "WIDGET_TYPE_POPUP", get_WIDGET_TYPE_POPUP);
  Nan::Export(ctx, "WIDGET_TYPE_SYSTEM_BAR", get_WIDGET_TYPE_SYSTEM_BAR);
  Nan::Export(ctx, "WIDGET_TYPE_SYSTEM_BAR_BOTTOM", get_WIDGET_TYPE_SYSTEM_BAR_BOTTOM);
  Nan::Export(ctx, "WIDGET_TYPE_SPRITE", get_WIDGET_TYPE_SPRITE);
  Nan::Export(ctx, "WIDGET_TYPE_KEYBOARD", get_WIDGET_TYPE_KEYBOARD);
  Nan::Export(ctx, "WIDGET_TYPE_DND", get_WIDGET_TYPE_DND);
  Nan::Export(ctx, "WIDGET_TYPE_LABEL", get_WIDGET_TYPE_LABEL);
  Nan::Export(ctx, "WIDGET_TYPE_BUTTON", get_WIDGET_TYPE_BUTTON);
  Nan::Export(ctx, "WIDGET_TYPE_IMAGE", get_WIDGET_TYPE_IMAGE);
  Nan::Export(ctx, "WIDGET_TYPE_EDIT", get_WIDGET_TYPE_EDIT);
  Nan::Export(ctx, "WIDGET_TYPE_PROGRESS_BAR", get_WIDGET_TYPE_PROGRESS_BAR);
  Nan::Export(ctx, "WIDGET_TYPE_GROUP_BOX", get_WIDGET_TYPE_GROUP_BOX);
  Nan::Export(ctx, "WIDGET_TYPE_CHECK_BUTTON", get_WIDGET_TYPE_CHECK_BUTTON);
  Nan::Export(ctx, "WIDGET_TYPE_RADIO_BUTTON", get_WIDGET_TYPE_RADIO_BUTTON);
  Nan::Export(ctx, "WIDGET_TYPE_DIALOG_TITLE", get_WIDGET_TYPE_DIALOG_TITLE);
  Nan::Export(ctx, "WIDGET_TYPE_DIALOG_CLIENT", get_WIDGET_TYPE_DIALOG_CLIENT);
  Nan::Export(ctx, "WIDGET_TYPE_SLIDER", get_WIDGET_TYPE_SLIDER);
  Nan::Export(ctx, "WIDGET_TYPE_VIEW", get_WIDGET_TYPE_VIEW);
  Nan::Export(ctx, "WIDGET_TYPE_COMBO_BOX", get_WIDGET_TYPE_COMBO_BOX);
  Nan::Export(ctx, "WIDGET_TYPE_COMBO_BOX_ITEM", get_WIDGET_TYPE_COMBO_BOX_ITEM);
  Nan::Export(ctx, "WIDGET_TYPE_SLIDE_VIEW", get_WIDGET_TYPE_SLIDE_VIEW);
  Nan::Export(ctx, "WIDGET_TYPE_SLIDE_INDICATOR", get_WIDGET_TYPE_SLIDE_INDICATOR);
  Nan::Export(ctx, "WIDGET_TYPE_SLIDE_INDICATOR_ARC", get_WIDGET_TYPE_SLIDE_INDICATOR_ARC);
  Nan::Export(ctx, "WIDGET_TYPE_PAGES", get_WIDGET_TYPE_PAGES);
  Nan::Export(ctx, "WIDGET_TYPE_TAB_BUTTON", get_WIDGET_TYPE_TAB_BUTTON);
  Nan::Export(ctx, "WIDGET_TYPE_TAB_CONTROL", get_WIDGET_TYPE_TAB_CONTROL);
  Nan::Export(ctx, "WIDGET_TYPE_TAB_BUTTON_GROUP", get_WIDGET_TYPE_TAB_BUTTON_GROUP);
  Nan::Export(ctx, "WIDGET_TYPE_BUTTON_GROUP", get_WIDGET_TYPE_BUTTON_GROUP);
  Nan::Export(ctx, "WIDGET_TYPE_CANDIDATES", get_WIDGET_TYPE_CANDIDATES);
  Nan::Export(ctx, "WIDGET_TYPE_SPIN_BOX", get_WIDGET_TYPE_SPIN_BOX);
  Nan::Export(ctx, "WIDGET_TYPE_DRAGGER", get_WIDGET_TYPE_DRAGGER);
  Nan::Export(ctx, "WIDGET_TYPE_SCROLL_BAR", get_WIDGET_TYPE_SCROLL_BAR);
  Nan::Export(ctx, "WIDGET_TYPE_SCROLL_BAR_DESKTOP", get_WIDGET_TYPE_SCROLL_BAR_DESKTOP);
  Nan::Export(ctx, "WIDGET_TYPE_SCROLL_BAR_MOBILE", get_WIDGET_TYPE_SCROLL_BAR_MOBILE);
  Nan::Export(ctx, "WIDGET_TYPE_SCROLL_VIEW", get_WIDGET_TYPE_SCROLL_VIEW);
  Nan::Export(ctx, "WIDGET_TYPE_LIST_VIEW", get_WIDGET_TYPE_LIST_VIEW);
  Nan::Export(ctx, "WIDGET_TYPE_LIST_VIEW_H", get_WIDGET_TYPE_LIST_VIEW_H);
  Nan::Export(ctx, "WIDGET_TYPE_LIST_ITEM", get_WIDGET_TYPE_LIST_ITEM);
  Nan::Export(ctx, "WIDGET_TYPE_COLOR_PICKER", get_WIDGET_TYPE_COLOR_PICKER);
  Nan::Export(ctx, "WIDGET_TYPE_COLOR_COMPONENT", get_WIDGET_TYPE_COLOR_COMPONENT);
  Nan::Export(ctx, "WIDGET_TYPE_COLOR_TILE", get_WIDGET_TYPE_COLOR_TILE);
  Nan::Export(ctx, "WIDGET_TYPE_CLIP_VIEW", get_WIDGET_TYPE_CLIP_VIEW);
  Nan::Export(ctx, "WIDGET_TYPE_RICH_TEXT", get_WIDGET_TYPE_RICH_TEXT);
  Nan::Export(ctx, "WIDGET_TYPE_APP_BAR", get_WIDGET_TYPE_APP_BAR);
  Nan::Export(ctx, "WIDGET_TYPE_GRID", get_WIDGET_TYPE_GRID);
  Nan::Export(ctx, "WIDGET_TYPE_GRID_ITEM", get_WIDGET_TYPE_GRID_ITEM);
  Nan::Export(ctx, "WIDGET_TYPE_ROW", get_WIDGET_TYPE_ROW);
  Nan::Export(ctx, "WIDGET_TYPE_COLUMN", get_WIDGET_TYPE_COLUMN);
  Nan::Export(ctx, "WIDGET_TYPE_CALIBRATION_WIN", get_WIDGET_TYPE_CALIBRATION_WIN);

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

static void get_WINDOW_STAGE_SUSPEND(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)WINDOW_STAGE_SUSPEND);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t window_stage_t_init(v8::Local<v8::Object> ctx) {
  Nan::Export(ctx, "WINDOW_STAGE_NONE", get_WINDOW_STAGE_NONE);
  Nan::Export(ctx, "WINDOW_STAGE_CREATED", get_WINDOW_STAGE_CREATED);
  Nan::Export(ctx, "WINDOW_STAGE_OPENED", get_WINDOW_STAGE_OPENED);
  Nan::Export(ctx, "WINDOW_STAGE_CLOSED", get_WINDOW_STAGE_CLOSED);
  Nan::Export(ctx, "WINDOW_STAGE_SUSPEND", get_WINDOW_STAGE_SUSPEND);

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
  Nan::Export(ctx, "WINDOW_CLOSABLE_YES", get_WINDOW_CLOSABLE_YES);
  Nan::Export(ctx, "WINDOW_CLOSABLE_NO", get_WINDOW_CLOSABLE_NO);
  Nan::Export(ctx, "WINDOW_CLOSABLE_CONFIRM", get_WINDOW_CLOSABLE_CONFIRM);

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
  Nan::Export(ctx, "WIDGET_STATE_NONE", get_WIDGET_STATE_NONE);
  Nan::Export(ctx, "WIDGET_STATE_NORMAL", get_WIDGET_STATE_NORMAL);
  Nan::Export(ctx, "WIDGET_STATE_PRESSED", get_WIDGET_STATE_PRESSED);
  Nan::Export(ctx, "WIDGET_STATE_OVER", get_WIDGET_STATE_OVER);
  Nan::Export(ctx, "WIDGET_STATE_DISABLE", get_WIDGET_STATE_DISABLE);
  Nan::Export(ctx, "WIDGET_STATE_FOCUSED", get_WIDGET_STATE_FOCUSED);
  Nan::Export(ctx, "WIDGET_STATE_CHECKED", get_WIDGET_STATE_CHECKED);
  Nan::Export(ctx, "WIDGET_STATE_UNCHECKED", get_WIDGET_STATE_UNCHECKED);
  Nan::Export(ctx, "WIDGET_STATE_EMPTY", get_WIDGET_STATE_EMPTY);
  Nan::Export(ctx, "WIDGET_STATE_EMPTY_FOCUS", get_WIDGET_STATE_EMPTY_FOCUS);
  Nan::Export(ctx, "WIDGET_STATE_ERROR", get_WIDGET_STATE_ERROR);
  Nan::Export(ctx, "WIDGET_STATE_SELECTED", get_WIDGET_STATE_SELECTED);
  Nan::Export(ctx, "WIDGET_STATE_NORMAL_OF_CHECKED", get_WIDGET_STATE_NORMAL_OF_CHECKED);
  Nan::Export(ctx, "WIDGET_STATE_PRESSED_OF_CHECKED", get_WIDGET_STATE_PRESSED_OF_CHECKED);
  Nan::Export(ctx, "WIDGET_STATE_OVER_OF_CHECKED", get_WIDGET_STATE_OVER_OF_CHECKED);
  Nan::Export(ctx, "WIDGET_STATE_FOCUSED_OF_CHECKED", get_WIDGET_STATE_FOCUSED_OF_CHECKED);
  Nan::Export(ctx, "WIDGET_STATE_NORMAL_OF_ACTIVE", get_WIDGET_STATE_NORMAL_OF_ACTIVE);
  Nan::Export(ctx, "WIDGET_STATE_PRESSED_OF_ACTIVE", get_WIDGET_STATE_PRESSED_OF_ACTIVE);
  Nan::Export(ctx, "WIDGET_STATE_OVER_OF_ACTIVE", get_WIDGET_STATE_OVER_OF_ACTIVE);
  Nan::Export(ctx, "WIDGET_STATE_FOCUSED_OF_ACTIVE", get_WIDGET_STATE_FOCUSED_OF_ACTIVE);

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

static void wrap_widget_set_dirty_rect_tolerance(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint16_t dirty_rect_tolerance = (uint16_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)widget_set_dirty_rect_tolerance(widget, dirty_rect_tolerance);

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

static void wrap_widget_is_opened_popup(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  bool_t ret = (bool_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)widget_is_opened_popup(widget);

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

static void wrap_widget_t_get_prop_dirty_rect_tolerance(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->dirty_rect_tolerance));
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
  Nan::Export(ctx, "widget_count_children", wrap_widget_count_children);
  Nan::Export(ctx, "widget_get_child", wrap_widget_get_child);
  Nan::Export(ctx, "widget_index_of", wrap_widget_index_of);
  Nan::Export(ctx, "widget_close_window", wrap_widget_close_window);
  Nan::Export(ctx, "widget_move", wrap_widget_move);
  Nan::Export(ctx, "widget_resize", wrap_widget_resize);
  Nan::Export(ctx, "widget_move_resize", wrap_widget_move_resize);
  Nan::Export(ctx, "widget_set_value", wrap_widget_set_value);
  Nan::Export(ctx, "widget_animate_value_to", wrap_widget_animate_value_to);
  Nan::Export(ctx, "widget_add_value", wrap_widget_add_value);
  Nan::Export(ctx, "widget_use_style", wrap_widget_use_style);
  Nan::Export(ctx, "widget_set_text_utf8", wrap_widget_set_text_utf8);
  Nan::Export(ctx, "widget_set_tr_text", wrap_widget_set_tr_text);
  Nan::Export(ctx, "widget_get_value", wrap_widget_get_value);
  Nan::Export(ctx, "widget_get_text", wrap_widget_get_text);
  Nan::Export(ctx, "widget_set_name", wrap_widget_set_name);
  Nan::Export(ctx, "widget_set_theme", wrap_widget_set_theme);
  Nan::Export(ctx, "widget_set_pointer_cursor", wrap_widget_set_pointer_cursor);
  Nan::Export(ctx, "widget_set_animation", wrap_widget_set_animation);
  Nan::Export(ctx, "widget_create_animator", wrap_widget_create_animator);
  Nan::Export(ctx, "widget_start_animator", wrap_widget_start_animator);
  Nan::Export(ctx, "widget_set_animator_time_scale", wrap_widget_set_animator_time_scale);
  Nan::Export(ctx, "widget_pause_animator", wrap_widget_pause_animator);
  Nan::Export(ctx, "widget_stop_animator", wrap_widget_stop_animator);
  Nan::Export(ctx, "widget_destroy_animator", wrap_widget_destroy_animator);
  Nan::Export(ctx, "widget_set_enable", wrap_widget_set_enable);
  Nan::Export(ctx, "widget_set_feedback", wrap_widget_set_feedback);
  Nan::Export(ctx, "widget_set_floating", wrap_widget_set_floating);
  Nan::Export(ctx, "widget_set_focused", wrap_widget_set_focused);
  Nan::Export(ctx, "widget_set_focusable", wrap_widget_set_focusable);
  Nan::Export(ctx, "widget_set_state", wrap_widget_set_state);
  Nan::Export(ctx, "widget_set_opacity", wrap_widget_set_opacity);
  Nan::Export(ctx, "widget_set_dirty_rect_tolerance", wrap_widget_set_dirty_rect_tolerance);
  Nan::Export(ctx, "widget_destroy_children", wrap_widget_destroy_children);
  Nan::Export(ctx, "widget_add_child", wrap_widget_add_child);
  Nan::Export(ctx, "widget_remove_child", wrap_widget_remove_child);
  Nan::Export(ctx, "widget_insert_child", wrap_widget_insert_child);
  Nan::Export(ctx, "widget_restack", wrap_widget_restack);
  Nan::Export(ctx, "widget_child", wrap_widget_child);
  Nan::Export(ctx, "widget_lookup", wrap_widget_lookup);
  Nan::Export(ctx, "widget_lookup_by_type", wrap_widget_lookup_by_type);
  Nan::Export(ctx, "widget_set_visible", wrap_widget_set_visible);
  Nan::Export(ctx, "widget_set_visible_only", wrap_widget_set_visible_only);
  Nan::Export(ctx, "widget_set_sensitive", wrap_widget_set_sensitive);
  Nan::Export(ctx, "widget_on", wrap_widget_on);
  Nan::Export(ctx, "widget_off", wrap_widget_off);
  Nan::Export(ctx, "widget_invalidate_force", wrap_widget_invalidate_force);
  Nan::Export(ctx, "widget_set_prop_str", wrap_widget_set_prop_str);
  Nan::Export(ctx, "widget_get_prop_str", wrap_widget_get_prop_str);
  Nan::Export(ctx, "widget_set_prop_int", wrap_widget_set_prop_int);
  Nan::Export(ctx, "widget_get_prop_int", wrap_widget_get_prop_int);
  Nan::Export(ctx, "widget_set_prop_bool", wrap_widget_set_prop_bool);
  Nan::Export(ctx, "widget_get_prop_bool", wrap_widget_get_prop_bool);
  Nan::Export(ctx, "widget_is_window_opened", wrap_widget_is_window_opened);
  Nan::Export(ctx, "widget_is_window", wrap_widget_is_window);
  Nan::Export(ctx, "widget_is_designing_window", wrap_widget_is_designing_window);
  Nan::Export(ctx, "widget_is_window_manager", wrap_widget_is_window_manager);
  Nan::Export(ctx, "widget_foreach", wrap_widget_foreach);
  Nan::Export(ctx, "widget_get_window", wrap_widget_get_window);
  Nan::Export(ctx, "widget_get_window_manager", wrap_widget_get_window_manager);
  Nan::Export(ctx, "widget_get_type", wrap_widget_get_type);
  Nan::Export(ctx, "widget_clone", wrap_widget_clone);
  Nan::Export(ctx, "widget_equal", wrap_widget_equal);
  Nan::Export(ctx, "widget_cast", wrap_widget_cast);
  Nan::Export(ctx, "widget_destroy", wrap_widget_destroy);
  Nan::Export(ctx, "widget_unref", wrap_widget_unref);
  Nan::Export(ctx, "widget_is_system_bar", wrap_widget_is_system_bar);
  Nan::Export(ctx, "widget_is_normal_window", wrap_widget_is_normal_window);
  Nan::Export(ctx, "widget_is_dialog", wrap_widget_is_dialog);
  Nan::Export(ctx, "widget_is_popup", wrap_widget_is_popup);
  Nan::Export(ctx, "widget_is_opened_popup", wrap_widget_is_opened_popup);
  Nan::Export(ctx, "widget_layout", wrap_widget_layout);
  Nan::Export(ctx, "widget_set_self_layout", wrap_widget_set_self_layout);
  Nan::Export(ctx, "widget_set_children_layout", wrap_widget_set_children_layout);
  Nan::Export(ctx, "widget_set_self_layout_params", wrap_widget_set_self_layout_params);
  Nan::Export(ctx, "widget_set_style_int", wrap_widget_set_style_int);
  Nan::Export(ctx, "widget_set_style_str", wrap_widget_set_style_str);
  Nan::Export(ctx, "widget_set_style_color", wrap_widget_set_style_color);
  Nan::Export(ctx, "widget_t_get_prop_x", wrap_widget_t_get_prop_x);
  Nan::Export(ctx, "widget_t_get_prop_y", wrap_widget_t_get_prop_y);
  Nan::Export(ctx, "widget_t_get_prop_w", wrap_widget_t_get_prop_w);
  Nan::Export(ctx, "widget_t_get_prop_h", wrap_widget_t_get_prop_h);
  Nan::Export(ctx, "widget_t_get_prop_name", wrap_widget_t_get_prop_name);
  Nan::Export(ctx, "widget_t_get_prop_tr_text", wrap_widget_t_get_prop_tr_text);
  Nan::Export(ctx, "widget_t_get_prop_style", wrap_widget_t_get_prop_style);
  Nan::Export(ctx, "widget_t_get_prop_animation", wrap_widget_t_get_prop_animation);
  Nan::Export(ctx, "widget_t_get_prop_enable", wrap_widget_t_get_prop_enable);
  Nan::Export(ctx, "widget_t_get_prop_feedback", wrap_widget_t_get_prop_feedback);
  Nan::Export(ctx, "widget_t_set_prop_visible", wrap_widget_t_set_prop_visible);
  Nan::Export(ctx, "widget_t_get_prop_visible", wrap_widget_t_get_prop_visible);
  Nan::Export(ctx, "widget_t_set_prop_sensitive", wrap_widget_t_set_prop_sensitive);
  Nan::Export(ctx, "widget_t_get_prop_sensitive", wrap_widget_t_get_prop_sensitive);
  Nan::Export(ctx, "widget_t_set_prop_focusable", wrap_widget_t_set_prop_focusable);
  Nan::Export(ctx, "widget_t_get_prop_focusable", wrap_widget_t_get_prop_focusable);
  Nan::Export(ctx, "widget_t_set_prop_with_focus_state", wrap_widget_t_set_prop_with_focus_state);
  Nan::Export(ctx, "widget_t_get_prop_with_focus_state", wrap_widget_t_get_prop_with_focus_state);
  Nan::Export(ctx, "widget_t_get_prop_floating", wrap_widget_t_get_prop_floating);
  Nan::Export(ctx, "widget_t_get_prop_dirty_rect_tolerance", wrap_widget_t_get_prop_dirty_rect_tolerance);
  Nan::Export(ctx, "widget_t_get_prop_parent", wrap_widget_t_get_prop_parent);

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
  Nan::Export(ctx, "RET_OK", get_RET_OK);
  Nan::Export(ctx, "RET_OOM", get_RET_OOM);
  Nan::Export(ctx, "RET_FAIL", get_RET_FAIL);
  Nan::Export(ctx, "RET_NOT_IMPL", get_RET_NOT_IMPL);
  Nan::Export(ctx, "RET_QUIT", get_RET_QUIT);
  Nan::Export(ctx, "RET_FOUND", get_RET_FOUND);
  Nan::Export(ctx, "RET_BUSY", get_RET_BUSY);
  Nan::Export(ctx, "RET_REMOVE", get_RET_REMOVE);
  Nan::Export(ctx, "RET_REPEAT", get_RET_REPEAT);
  Nan::Export(ctx, "RET_NOT_FOUND", get_RET_NOT_FOUND);
  Nan::Export(ctx, "RET_DONE", get_RET_DONE);
  Nan::Export(ctx, "RET_STOP", get_RET_STOP);
  Nan::Export(ctx, "RET_SKIP", get_RET_SKIP);
  Nan::Export(ctx, "RET_CONTINUE", get_RET_CONTINUE);
  Nan::Export(ctx, "RET_OBJECT_CHANGED", get_RET_OBJECT_CHANGED);
  Nan::Export(ctx, "RET_ITEMS_CHANGED", get_RET_ITEMS_CHANGED);
  Nan::Export(ctx, "RET_BAD_PARAMS", get_RET_BAD_PARAMS);
  Nan::Export(ctx, "RET_TIMEOUT", get_RET_TIMEOUT);
  Nan::Export(ctx, "RET_CRC", get_RET_CRC);
  Nan::Export(ctx, "RET_IO", get_RET_IO);
  Nan::Export(ctx, "RET_EOS", get_RET_EOS);

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
  Nan::Export(ctx, "time_now_s", wrap_time_now_s);
  Nan::Export(ctx, "time_now_ms", wrap_time_now_ms);

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

static void get_IMAGE_DRAW_REPEAT9(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)IMAGE_DRAW_REPEAT9);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_IMAGE_DRAW_REPEAT3_X(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)IMAGE_DRAW_REPEAT3_X);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void get_IMAGE_DRAW_REPEAT3_Y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  v8::Local<v8::Int32> jret= Nan::New((int32_t)IMAGE_DRAW_REPEAT3_Y);
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t image_draw_type_t_init(v8::Local<v8::Object> ctx) {
  Nan::Export(ctx, "IMAGE_DRAW_DEFAULT", get_IMAGE_DRAW_DEFAULT);
  Nan::Export(ctx, "IMAGE_DRAW_CENTER", get_IMAGE_DRAW_CENTER);
  Nan::Export(ctx, "IMAGE_DRAW_ICON", get_IMAGE_DRAW_ICON);
  Nan::Export(ctx, "IMAGE_DRAW_SCALE", get_IMAGE_DRAW_SCALE);
  Nan::Export(ctx, "IMAGE_DRAW_SCALE_AUTO", get_IMAGE_DRAW_SCALE_AUTO);
  Nan::Export(ctx, "IMAGE_DRAW_SCALE_DOWN", get_IMAGE_DRAW_SCALE_DOWN);
  Nan::Export(ctx, "IMAGE_DRAW_SCALE_W", get_IMAGE_DRAW_SCALE_W);
  Nan::Export(ctx, "IMAGE_DRAW_SCALE_H", get_IMAGE_DRAW_SCALE_H);
  Nan::Export(ctx, "IMAGE_DRAW_REPEAT", get_IMAGE_DRAW_REPEAT);
  Nan::Export(ctx, "IMAGE_DRAW_REPEAT_X", get_IMAGE_DRAW_REPEAT_X);
  Nan::Export(ctx, "IMAGE_DRAW_REPEAT_Y", get_IMAGE_DRAW_REPEAT_Y);
  Nan::Export(ctx, "IMAGE_DRAW_REPEAT_Y_INVERSE", get_IMAGE_DRAW_REPEAT_Y_INVERSE);
  Nan::Export(ctx, "IMAGE_DRAW_PATCH9", get_IMAGE_DRAW_PATCH9);
  Nan::Export(ctx, "IMAGE_DRAW_PATCH3_X", get_IMAGE_DRAW_PATCH3_X);
  Nan::Export(ctx, "IMAGE_DRAW_PATCH3_Y", get_IMAGE_DRAW_PATCH3_Y);
  Nan::Export(ctx, "IMAGE_DRAW_PATCH3_X_SCALE_Y", get_IMAGE_DRAW_PATCH3_X_SCALE_Y);
  Nan::Export(ctx, "IMAGE_DRAW_PATCH3_Y_SCALE_X", get_IMAGE_DRAW_PATCH3_Y_SCALE_X);
  Nan::Export(ctx, "IMAGE_DRAW_REPEAT9", get_IMAGE_DRAW_REPEAT9);
  Nan::Export(ctx, "IMAGE_DRAW_REPEAT3_X", get_IMAGE_DRAW_REPEAT3_X);
  Nan::Export(ctx, "IMAGE_DRAW_REPEAT3_Y", get_IMAGE_DRAW_REPEAT3_Y);

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
  font_size_t size = (font_size_t)jsvalue_get_int_value(ctx, argv[2]);
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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
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
  image_draw_type_t draw_type = (image_draw_type_t)jsvalue_get_int_value(ctx, argv[2]);
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
  Nan::Export(ctx, "canvas_get_width", wrap_canvas_get_width);
  Nan::Export(ctx, "canvas_get_height", wrap_canvas_get_height);
  Nan::Export(ctx, "canvas_get_clip_rect", wrap_canvas_get_clip_rect);
  Nan::Export(ctx, "canvas_set_clip_rect", wrap_canvas_set_clip_rect);
  Nan::Export(ctx, "canvas_set_clip_rect_ex", wrap_canvas_set_clip_rect_ex);
  Nan::Export(ctx, "canvas_set_fill_color_str", wrap_canvas_set_fill_color_str);
  Nan::Export(ctx, "canvas_set_text_color_str", wrap_canvas_set_text_color_str);
  Nan::Export(ctx, "canvas_set_stroke_color_str", wrap_canvas_set_stroke_color_str);
  Nan::Export(ctx, "canvas_set_global_alpha", wrap_canvas_set_global_alpha);
  Nan::Export(ctx, "canvas_translate", wrap_canvas_translate);
  Nan::Export(ctx, "canvas_untranslate", wrap_canvas_untranslate);
  Nan::Export(ctx, "canvas_draw_vline", wrap_canvas_draw_vline);
  Nan::Export(ctx, "canvas_draw_hline", wrap_canvas_draw_hline);
  Nan::Export(ctx, "canvas_fill_rect", wrap_canvas_fill_rect);
  Nan::Export(ctx, "canvas_stroke_rect", wrap_canvas_stroke_rect);
  Nan::Export(ctx, "canvas_set_font", wrap_canvas_set_font);
  Nan::Export(ctx, "canvas_measure_utf8", wrap_canvas_measure_utf8);
  Nan::Export(ctx, "canvas_draw_utf8", wrap_canvas_draw_utf8);
  Nan::Export(ctx, "canvas_draw_utf8_in_rect", wrap_canvas_draw_utf8_in_rect);
  Nan::Export(ctx, "canvas_draw_icon", wrap_canvas_draw_icon);
  Nan::Export(ctx, "canvas_draw_image", wrap_canvas_draw_image);
  Nan::Export(ctx, "canvas_draw_image_ex", wrap_canvas_draw_image_ex);
  Nan::Export(ctx, "canvas_get_vgcanvas", wrap_canvas_get_vgcanvas);
  Nan::Export(ctx, "canvas_cast", wrap_canvas_cast);
  Nan::Export(ctx, "canvas_reset", wrap_canvas_reset);
  Nan::Export(ctx, "canvas_t_get_prop_ox", wrap_canvas_t_get_prop_ox);
  Nan::Export(ctx, "canvas_t_get_prop_oy", wrap_canvas_t_get_prop_oy);
  Nan::Export(ctx, "canvas_t_get_prop_font_name", wrap_canvas_t_get_prop_font_name);
  Nan::Export(ctx, "canvas_t_get_prop_font_size", wrap_canvas_t_get_prop_font_size);
  Nan::Export(ctx, "canvas_t_get_prop_global_alpha", wrap_canvas_t_get_prop_global_alpha);

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
  Nan::Export(ctx, "named_value_create", wrap_named_value_create);
  Nan::Export(ctx, "named_value_cast", wrap_named_value_cast);
  Nan::Export(ctx, "named_value_set_name", wrap_named_value_set_name);
  Nan::Export(ctx, "named_value_set_value", wrap_named_value_set_value);
  Nan::Export(ctx, "named_value_get_value", wrap_named_value_get_value);
  Nan::Export(ctx, "named_value_t_get_prop_name", wrap_named_value_t_get_prop_name);

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
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_ENVOY", get_MIME_TYPE_APPLICATION_ENVOY);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_FRACTALS", get_MIME_TYPE_APPLICATION_FRACTALS);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_FUTURESPLASH", get_MIME_TYPE_APPLICATION_FUTURESPLASH);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_HTA", get_MIME_TYPE_APPLICATION_HTA);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_JSON", get_MIME_TYPE_APPLICATION_JSON);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_UBJSON", get_MIME_TYPE_APPLICATION_UBJSON);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_MAC_BINHEX40", get_MIME_TYPE_APPLICATION_MAC_BINHEX40);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_MSWORD", get_MIME_TYPE_APPLICATION_MSWORD);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_OCTET_STREAM", get_MIME_TYPE_APPLICATION_OCTET_STREAM);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_ODA", get_MIME_TYPE_APPLICATION_ODA);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_OLESCRIPT", get_MIME_TYPE_APPLICATION_OLESCRIPT);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_PDF", get_MIME_TYPE_APPLICATION_PDF);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_PICS_RULES", get_MIME_TYPE_APPLICATION_PICS_RULES);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_PKCS10", get_MIME_TYPE_APPLICATION_PKCS10);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_PKIX_CRL", get_MIME_TYPE_APPLICATION_PKIX_CRL);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_POSTSCRIPT", get_MIME_TYPE_APPLICATION_POSTSCRIPT);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_RTF", get_MIME_TYPE_APPLICATION_RTF);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_VND_MS_EXCEL", get_MIME_TYPE_APPLICATION_VND_MS_EXCEL);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_VND_MS_OUTLOOK", get_MIME_TYPE_APPLICATION_VND_MS_OUTLOOK);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE", get_MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_VND_MS_PKISECCAT", get_MIME_TYPE_APPLICATION_VND_MS_PKISECCAT);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_VND_MS_PKISTL", get_MIME_TYPE_APPLICATION_VND_MS_PKISTL);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_VND_MS_POWERPOINT", get_MIME_TYPE_APPLICATION_VND_MS_POWERPOINT);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_VND_MS_PROJECT", get_MIME_TYPE_APPLICATION_VND_MS_PROJECT);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_VND_MS_WORKS", get_MIME_TYPE_APPLICATION_VND_MS_WORKS);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_WINHLP", get_MIME_TYPE_APPLICATION_WINHLP);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_BCPIO", get_MIME_TYPE_APPLICATION_X_BCPIO);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_CDF", get_MIME_TYPE_APPLICATION_X_CDF);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_COMPRESS", get_MIME_TYPE_APPLICATION_X_COMPRESS);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_COMPRESSED", get_MIME_TYPE_APPLICATION_X_COMPRESSED);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_CPIO", get_MIME_TYPE_APPLICATION_X_CPIO);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_CSH", get_MIME_TYPE_APPLICATION_X_CSH);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_DIRECTOR", get_MIME_TYPE_APPLICATION_X_DIRECTOR);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_DVI", get_MIME_TYPE_APPLICATION_X_DVI);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_GTAR", get_MIME_TYPE_APPLICATION_X_GTAR);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_GZIP", get_MIME_TYPE_APPLICATION_X_GZIP);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_HDF", get_MIME_TYPE_APPLICATION_X_HDF);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_IPHONE", get_MIME_TYPE_APPLICATION_X_IPHONE);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_JAVASCRIPT", get_MIME_TYPE_APPLICATION_X_JAVASCRIPT);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_LATEX", get_MIME_TYPE_APPLICATION_X_LATEX);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_MSACCESS", get_MIME_TYPE_APPLICATION_X_MSACCESS);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_MSCARDFILE", get_MIME_TYPE_APPLICATION_X_MSCARDFILE);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_MSCLIP", get_MIME_TYPE_APPLICATION_X_MSCLIP);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_MSDOWNLOAD", get_MIME_TYPE_APPLICATION_X_MSDOWNLOAD);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_MSMEDIAVIEW", get_MIME_TYPE_APPLICATION_X_MSMEDIAVIEW);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_MSMETAFILE", get_MIME_TYPE_APPLICATION_X_MSMETAFILE);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_MSMONEY", get_MIME_TYPE_APPLICATION_X_MSMONEY);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_MSPUBLISHER", get_MIME_TYPE_APPLICATION_X_MSPUBLISHER);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_MSSCHEDULE", get_MIME_TYPE_APPLICATION_X_MSSCHEDULE);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_MSTERMINAL", get_MIME_TYPE_APPLICATION_X_MSTERMINAL);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_MSWRITE", get_MIME_TYPE_APPLICATION_X_MSWRITE);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_NETCDF", get_MIME_TYPE_APPLICATION_X_NETCDF);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_PERFMON", get_MIME_TYPE_APPLICATION_X_PERFMON);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_PKCS12", get_MIME_TYPE_APPLICATION_X_PKCS12);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_SH", get_MIME_TYPE_APPLICATION_X_SH);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_SHAR", get_MIME_TYPE_APPLICATION_X_SHAR);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH", get_MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_STUFFIT", get_MIME_TYPE_APPLICATION_X_STUFFIT);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_SV4CPIO", get_MIME_TYPE_APPLICATION_X_SV4CPIO);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_SV4CRC", get_MIME_TYPE_APPLICATION_X_SV4CRC);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_TAR", get_MIME_TYPE_APPLICATION_X_TAR);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_TCL", get_MIME_TYPE_APPLICATION_X_TCL);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_TEX", get_MIME_TYPE_APPLICATION_X_TEX);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_TEXINFO", get_MIME_TYPE_APPLICATION_X_TEXINFO);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_TROFF", get_MIME_TYPE_APPLICATION_X_TROFF);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_X_USTAR", get_MIME_TYPE_APPLICATION_X_USTAR);
  Nan::Export(ctx, "MIME_TYPE_APPLICATION_ZIP", get_MIME_TYPE_APPLICATION_ZIP);
  Nan::Export(ctx, "MIME_TYPE_AUDIO_BASIC", get_MIME_TYPE_AUDIO_BASIC);
  Nan::Export(ctx, "MIME_TYPE_AUDIO_MID", get_MIME_TYPE_AUDIO_MID);
  Nan::Export(ctx, "MIME_TYPE_AUDIO_MPEG", get_MIME_TYPE_AUDIO_MPEG);
  Nan::Export(ctx, "MIME_TYPE_AUDIO_X_AIFF", get_MIME_TYPE_AUDIO_X_AIFF);
  Nan::Export(ctx, "MIME_TYPE_AUDIO_X_MPEGURL", get_MIME_TYPE_AUDIO_X_MPEGURL);
  Nan::Export(ctx, "MIME_TYPE_AUDIO_X_WAV", get_MIME_TYPE_AUDIO_X_WAV);
  Nan::Export(ctx, "MIME_TYPE_IMAGE_BMP", get_MIME_TYPE_IMAGE_BMP);
  Nan::Export(ctx, "MIME_TYPE_IMAGE_CIS_COD", get_MIME_TYPE_IMAGE_CIS_COD);
  Nan::Export(ctx, "MIME_TYPE_IMAGE_GIF", get_MIME_TYPE_IMAGE_GIF);
  Nan::Export(ctx, "MIME_TYPE_IMAGE_IEF", get_MIME_TYPE_IMAGE_IEF);
  Nan::Export(ctx, "MIME_TYPE_IMAGE_JPEG", get_MIME_TYPE_IMAGE_JPEG);
  Nan::Export(ctx, "MIME_TYPE_IMAGE_PIPEG", get_MIME_TYPE_IMAGE_PIPEG);
  Nan::Export(ctx, "MIME_TYPE_IMAGE_SVG_XML", get_MIME_TYPE_IMAGE_SVG_XML);
  Nan::Export(ctx, "MIME_TYPE_IMAGE_TIFF", get_MIME_TYPE_IMAGE_TIFF);
  Nan::Export(ctx, "MIME_TYPE_IMAGE_X_CMX", get_MIME_TYPE_IMAGE_X_CMX);
  Nan::Export(ctx, "MIME_TYPE_IMAGE_X_ICON", get_MIME_TYPE_IMAGE_X_ICON);
  Nan::Export(ctx, "MIME_TYPE_IMAGE_X_RGB", get_MIME_TYPE_IMAGE_X_RGB);
  Nan::Export(ctx, "MIME_TYPE_IMAGE_X_XBITMAP", get_MIME_TYPE_IMAGE_X_XBITMAP);
  Nan::Export(ctx, "MIME_TYPE_IMAGE_X_XPIXMAP", get_MIME_TYPE_IMAGE_X_XPIXMAP);
  Nan::Export(ctx, "MIME_TYPE_IMAGE_X_XWINDOWDUMP", get_MIME_TYPE_IMAGE_X_XWINDOWDUMP);
  Nan::Export(ctx, "MIME_TYPE_MESSAGE_RFC822", get_MIME_TYPE_MESSAGE_RFC822);
  Nan::Export(ctx, "MIME_TYPE_TEXT_CSS", get_MIME_TYPE_TEXT_CSS);
  Nan::Export(ctx, "MIME_TYPE_TEXT_H323", get_MIME_TYPE_TEXT_H323);
  Nan::Export(ctx, "MIME_TYPE_TEXT_HTML", get_MIME_TYPE_TEXT_HTML);
  Nan::Export(ctx, "MIME_TYPE_TEXT_IULS", get_MIME_TYPE_TEXT_IULS);
  Nan::Export(ctx, "MIME_TYPE_TEXT_PLAIN", get_MIME_TYPE_TEXT_PLAIN);
  Nan::Export(ctx, "MIME_TYPE_TEXT_RICHTEXT", get_MIME_TYPE_TEXT_RICHTEXT);
  Nan::Export(ctx, "MIME_TYPE_TEXT_SCRIPTLET", get_MIME_TYPE_TEXT_SCRIPTLET);
  Nan::Export(ctx, "MIME_TYPE_TEXT_WEBVIEWHTML", get_MIME_TYPE_TEXT_WEBVIEWHTML);
  Nan::Export(ctx, "MIME_TYPE_TEXT_X_COMPONENT", get_MIME_TYPE_TEXT_X_COMPONENT);
  Nan::Export(ctx, "MIME_TYPE_TEXT_X_SETEXT", get_MIME_TYPE_TEXT_X_SETEXT);
  Nan::Export(ctx, "MIME_TYPE_TEXT_X_VCARD", get_MIME_TYPE_TEXT_X_VCARD);
  Nan::Export(ctx, "MIME_TYPE_VIDEO_MPEG", get_MIME_TYPE_VIDEO_MPEG);
  Nan::Export(ctx, "MIME_TYPE_VIDEO_QUICKTIME", get_MIME_TYPE_VIDEO_QUICKTIME);
  Nan::Export(ctx, "MIME_TYPE_VIDEO_X_MSVIDEO", get_MIME_TYPE_VIDEO_X_MSVIDEO);

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
  Nan::Export(ctx, "INDICATOR_DEFAULT_PAINT_AUTO", get_INDICATOR_DEFAULT_PAINT_AUTO);
  Nan::Export(ctx, "INDICATOR_DEFAULT_PAINT_FILL_DOT", get_INDICATOR_DEFAULT_PAINT_FILL_DOT);
  Nan::Export(ctx, "INDICATOR_DEFAULT_PAINT_STROKE_DOT", get_INDICATOR_DEFAULT_PAINT_STROKE_DOT);
  Nan::Export(ctx, "INDICATOR_DEFAULT_PAINT_FILL_RECT", get_INDICATOR_DEFAULT_PAINT_FILL_RECT);
  Nan::Export(ctx, "INDICATOR_DEFAULT_PAINT_STROKE_RECT", get_INDICATOR_DEFAULT_PAINT_STROKE_RECT);

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
  Nan::Export(ctx, "CLIP_BOARD_DATA_TYPE_NONE", get_CLIP_BOARD_DATA_TYPE_NONE);
  Nan::Export(ctx, "CLIP_BOARD_DATA_TYPE_TEXT", get_CLIP_BOARD_DATA_TYPE_TEXT);

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
  Nan::Export(ctx, "clip_board_set_text", wrap_clip_board_set_text);
  Nan::Export(ctx, "clip_board_get_text", wrap_clip_board_get_text);

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
  Nan::Export(ctx, "EASING_LINEAR", get_EASING_LINEAR);
  Nan::Export(ctx, "EASING_QUADRATIC_IN", get_EASING_QUADRATIC_IN);
  Nan::Export(ctx, "EASING_QUADRATIC_OUT", get_EASING_QUADRATIC_OUT);
  Nan::Export(ctx, "EASING_QUADRATIC_INOUT", get_EASING_QUADRATIC_INOUT);
  Nan::Export(ctx, "EASING_CUBIC_IN", get_EASING_CUBIC_IN);
  Nan::Export(ctx, "EASING_CUBIC_OUT", get_EASING_CUBIC_OUT);
  Nan::Export(ctx, "EASING_SIN_IN", get_EASING_SIN_IN);
  Nan::Export(ctx, "EASING_SIN_OUT", get_EASING_SIN_OUT);
  Nan::Export(ctx, "EASING_SIN_INOUT", get_EASING_SIN_INOUT);
  Nan::Export(ctx, "EASING_POW_IN", get_EASING_POW_IN);
  Nan::Export(ctx, "EASING_POW_OUT", get_EASING_POW_OUT);
  Nan::Export(ctx, "EASING_POW_INOUT", get_EASING_POW_INOUT);
  Nan::Export(ctx, "EASING_CIRCULAR_IN", get_EASING_CIRCULAR_IN);
  Nan::Export(ctx, "EASING_CIRCULAR_OUT", get_EASING_CIRCULAR_OUT);
  Nan::Export(ctx, "EASING_CIRCULAR_INOUT", get_EASING_CIRCULAR_INOUT);
  Nan::Export(ctx, "EASING_ELASTIC_IN", get_EASING_ELASTIC_IN);
  Nan::Export(ctx, "EASING_ELASTIC_OUT", get_EASING_ELASTIC_OUT);
  Nan::Export(ctx, "EASING_ELASTIC_INOUT", get_EASING_ELASTIC_INOUT);
  Nan::Export(ctx, "EASING_BACK_IN", get_EASING_BACK_IN);
  Nan::Export(ctx, "EASING_BACK_OUT", get_EASING_BACK_OUT);
  Nan::Export(ctx, "EASING_BACK_INOUT", get_EASING_BACK_INOUT);
  Nan::Export(ctx, "EASING_BOUNCE_IN", get_EASING_BOUNCE_IN);
  Nan::Export(ctx, "EASING_BOUNCE_OUT", get_EASING_BOUNCE_OUT);
  Nan::Export(ctx, "EASING_BOUNCE_INOUT", get_EASING_BOUNCE_INOUT);

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

static void wrap_date_time_from_time(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  date_time_t* dt = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");
  uint64_t time = (uint64_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)date_time_from_time(dt, time);

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
  Nan::Export(ctx, "date_time_create", wrap_date_time_create);
  Nan::Export(ctx, "date_time_set", wrap_date_time_set);
  Nan::Export(ctx, "date_time_from_time", wrap_date_time_from_time);
  Nan::Export(ctx, "date_time_t_get_prop_second", wrap_date_time_t_get_prop_second);
  Nan::Export(ctx, "date_time_t_get_prop_minute", wrap_date_time_t_get_prop_minute);
  Nan::Export(ctx, "date_time_t_get_prop_hour", wrap_date_time_t_get_prop_hour);
  Nan::Export(ctx, "date_time_t_get_prop_day", wrap_date_time_t_get_prop_day);
  Nan::Export(ctx, "date_time_t_get_prop_wday", wrap_date_time_t_get_prop_wday);
  Nan::Export(ctx, "date_time_t_get_prop_month", wrap_date_time_t_get_prop_month);
  Nan::Export(ctx, "date_time_t_get_prop_year", wrap_date_time_t_get_prop_year);

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
  Nan::Export(ctx, "color_create", wrap_color_create);
  Nan::Export(ctx, "color_from_str", wrap_color_from_str);
  Nan::Export(ctx, "color_r", wrap_color_r);
  Nan::Export(ctx, "color_g", wrap_color_g);
  Nan::Export(ctx, "color_b", wrap_color_b);
  Nan::Export(ctx, "color_a", wrap_color_a);
  Nan::Export(ctx, "color_cast", wrap_color_cast);
  Nan::Export(ctx, "color_t_set_prop_color", wrap_color_t_set_prop_color);
  Nan::Export(ctx, "color_t_get_prop_color", wrap_color_t_get_prop_color);

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
  Nan::Export(ctx, "asset_info_t_get_prop_type", wrap_asset_info_t_get_prop_type);
  Nan::Export(ctx, "asset_info_t_get_prop_subtype", wrap_asset_info_t_get_prop_subtype);
  Nan::Export(ctx, "asset_info_t_get_prop_is_in_rom", wrap_asset_info_t_get_prop_is_in_rom);
  Nan::Export(ctx, "asset_info_t_get_prop_size", wrap_asset_info_t_get_prop_size);
  Nan::Export(ctx, "asset_info_t_get_prop_refcount", wrap_asset_info_t_get_prop_refcount);
  Nan::Export(ctx, "asset_info_t_get_prop_name", wrap_asset_info_t_get_prop_name);

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
  Nan::Export(ctx, "ASSET_TYPE_NONE", get_ASSET_TYPE_NONE);
  Nan::Export(ctx, "ASSET_TYPE_FONT", get_ASSET_TYPE_FONT);
  Nan::Export(ctx, "ASSET_TYPE_IMAGE", get_ASSET_TYPE_IMAGE);
  Nan::Export(ctx, "ASSET_TYPE_STYLE", get_ASSET_TYPE_STYLE);
  Nan::Export(ctx, "ASSET_TYPE_UI", get_ASSET_TYPE_UI);
  Nan::Export(ctx, "ASSET_TYPE_XML", get_ASSET_TYPE_XML);
  Nan::Export(ctx, "ASSET_TYPE_STRINGS", get_ASSET_TYPE_STRINGS);
  Nan::Export(ctx, "ASSET_TYPE_SCRIPT", get_ASSET_TYPE_SCRIPT);
  Nan::Export(ctx, "ASSET_TYPE_DATA", get_ASSET_TYPE_DATA);

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
  asset_type_t type = (asset_type_t)jsvalue_get_int_value(ctx, argv[1]);
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
  Nan::Export(ctx, "assets_manager", wrap_assets_manager);
  Nan::Export(ctx, "assets_manager_ref", wrap_assets_manager_ref);
  Nan::Export(ctx, "assets_manager_unref", wrap_assets_manager_unref);

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
  Nan::Export(ctx, "color_component_cast", wrap_color_component_cast);

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
  Nan::Export(ctx, "time_clock_create", wrap_time_clock_create);
  Nan::Export(ctx, "time_clock_cast", wrap_time_clock_cast);
  Nan::Export(ctx, "time_clock_set_hour", wrap_time_clock_set_hour);
  Nan::Export(ctx, "time_clock_set_minute", wrap_time_clock_set_minute);
  Nan::Export(ctx, "time_clock_set_second", wrap_time_clock_set_second);
  Nan::Export(ctx, "time_clock_set_hour_image", wrap_time_clock_set_hour_image);
  Nan::Export(ctx, "time_clock_set_minute_image", wrap_time_clock_set_minute_image);
  Nan::Export(ctx, "time_clock_set_second_image", wrap_time_clock_set_second_image);
  Nan::Export(ctx, "time_clock_set_bg_image", wrap_time_clock_set_bg_image);
  Nan::Export(ctx, "time_clock_set_image", wrap_time_clock_set_image);
  Nan::Export(ctx, "time_clock_set_hour_anchor", wrap_time_clock_set_hour_anchor);
  Nan::Export(ctx, "time_clock_set_minute_anchor", wrap_time_clock_set_minute_anchor);
  Nan::Export(ctx, "time_clock_set_second_anchor", wrap_time_clock_set_second_anchor);
  Nan::Export(ctx, "time_clock_t_get_prop_hour", wrap_time_clock_t_get_prop_hour);
  Nan::Export(ctx, "time_clock_t_get_prop_minute", wrap_time_clock_t_get_prop_minute);
  Nan::Export(ctx, "time_clock_t_get_prop_second", wrap_time_clock_t_get_prop_second);
  Nan::Export(ctx, "time_clock_t_get_prop_image", wrap_time_clock_t_get_prop_image);
  Nan::Export(ctx, "time_clock_t_get_prop_bg_image", wrap_time_clock_t_get_prop_bg_image);
  Nan::Export(ctx, "time_clock_t_get_prop_hour_image", wrap_time_clock_t_get_prop_hour_image);
  Nan::Export(ctx, "time_clock_t_get_prop_minute_image", wrap_time_clock_t_get_prop_minute_image);
  Nan::Export(ctx, "time_clock_t_get_prop_second_image", wrap_time_clock_t_get_prop_second_image);
  Nan::Export(ctx, "time_clock_t_get_prop_hour_anchor_x", wrap_time_clock_t_get_prop_hour_anchor_x);
  Nan::Export(ctx, "time_clock_t_get_prop_hour_anchor_y", wrap_time_clock_t_get_prop_hour_anchor_y);
  Nan::Export(ctx, "time_clock_t_get_prop_minute_anchor_x", wrap_time_clock_t_get_prop_minute_anchor_x);
  Nan::Export(ctx, "time_clock_t_get_prop_minute_anchor_y", wrap_time_clock_t_get_prop_minute_anchor_y);
  Nan::Export(ctx, "time_clock_t_get_prop_second_anchor_x", wrap_time_clock_t_get_prop_second_anchor_x);
  Nan::Export(ctx, "time_clock_t_get_prop_second_anchor_y", wrap_time_clock_t_get_prop_second_anchor_y);

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
  Nan::Export(ctx, "text_selector_create", wrap_text_selector_create);
  Nan::Export(ctx, "text_selector_cast", wrap_text_selector_cast);
  Nan::Export(ctx, "text_selector_reset_options", wrap_text_selector_reset_options);
  Nan::Export(ctx, "text_selector_count_options", wrap_text_selector_count_options);
  Nan::Export(ctx, "text_selector_append_option", wrap_text_selector_append_option);
  Nan::Export(ctx, "text_selector_set_options", wrap_text_selector_set_options);
  Nan::Export(ctx, "text_selector_set_range_options", wrap_text_selector_set_range_options);
  Nan::Export(ctx, "text_selector_get_value", wrap_text_selector_get_value);
  Nan::Export(ctx, "text_selector_set_value", wrap_text_selector_set_value);
  Nan::Export(ctx, "text_selector_get_text", wrap_text_selector_get_text);
  Nan::Export(ctx, "text_selector_set_text", wrap_text_selector_set_text);
  Nan::Export(ctx, "text_selector_set_selected_index", wrap_text_selector_set_selected_index);
  Nan::Export(ctx, "text_selector_set_visible_nr", wrap_text_selector_set_visible_nr);
  Nan::Export(ctx, "text_selector_t_get_prop_visible_nr", wrap_text_selector_t_get_prop_visible_nr);
  Nan::Export(ctx, "text_selector_t_get_prop_selected_index", wrap_text_selector_t_get_prop_selected_index);
  Nan::Export(ctx, "text_selector_t_get_prop_options", wrap_text_selector_t_get_prop_options);

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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->max_xoffset_ratio));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t switch_t_init(v8::Local<v8::Object> ctx) {
  Nan::Export(ctx, "switch_create", wrap_switch_create);
  Nan::Export(ctx, "switch_set_value", wrap_switch_set_value);
  Nan::Export(ctx, "switch_cast", wrap_switch_cast);
  Nan::Export(ctx, "switch_t_get_prop_value", wrap_switch_t_get_prop_value);
  Nan::Export(ctx, "switch_t_get_prop_max_xoffset_ratio", wrap_switch_t_get_prop_max_xoffset_ratio);

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
  Nan::Export(ctx, "view_create", wrap_view_create);
  Nan::Export(ctx, "view_cast", wrap_view_cast);

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
  Nan::Export(ctx, "prop_change_event_cast", wrap_prop_change_event_cast);
  Nan::Export(ctx, "prop_change_event_t_get_prop_name", wrap_prop_change_event_t_get_prop_name);
  Nan::Export(ctx, "prop_change_event_t_get_prop_value", wrap_prop_change_event_t_get_prop_value);

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
  Nan::Export(ctx, "progress_event_cast", wrap_progress_event_cast);
  Nan::Export(ctx, "progress_event_t_get_prop_percent", wrap_progress_event_t_get_prop_percent);

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
  Nan::Export(ctx, "slide_view_create", wrap_slide_view_create);
  Nan::Export(ctx, "slide_view_cast", wrap_slide_view_cast);
  Nan::Export(ctx, "slide_view_set_auto_play", wrap_slide_view_set_auto_play);
  Nan::Export(ctx, "slide_view_set_active", wrap_slide_view_set_active);
  Nan::Export(ctx, "slide_view_set_vertical", wrap_slide_view_set_vertical);
  Nan::Export(ctx, "slide_view_set_anim_hint", wrap_slide_view_set_anim_hint);
  Nan::Export(ctx, "slide_view_set_loop", wrap_slide_view_set_loop);
  Nan::Export(ctx, "slide_view_t_get_prop_vertical", wrap_slide_view_t_get_prop_vertical);
  Nan::Export(ctx, "slide_view_t_get_prop_auto_play", wrap_slide_view_t_get_prop_auto_play);
  Nan::Export(ctx, "slide_view_t_get_prop_loop", wrap_slide_view_t_get_prop_loop);
  Nan::Export(ctx, "slide_view_t_get_prop_anim_hint", wrap_slide_view_t_get_prop_anim_hint);

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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->spacing));
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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->anchor_x));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slide_indicator_t_get_prop_anchor_y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->anchor_y));
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
  Nan::Export(ctx, "slide_indicator_create", wrap_slide_indicator_create);
  Nan::Export(ctx, "slide_indicator_create_linear", wrap_slide_indicator_create_linear);
  Nan::Export(ctx, "slide_indicator_create_arc", wrap_slide_indicator_create_arc);
  Nan::Export(ctx, "slide_indicator_cast", wrap_slide_indicator_cast);
  Nan::Export(ctx, "slide_indicator_set_value", wrap_slide_indicator_set_value);
  Nan::Export(ctx, "slide_indicator_set_max", wrap_slide_indicator_set_max);
  Nan::Export(ctx, "slide_indicator_set_default_paint", wrap_slide_indicator_set_default_paint);
  Nan::Export(ctx, "slide_indicator_set_auto_hide", wrap_slide_indicator_set_auto_hide);
  Nan::Export(ctx, "slide_indicator_set_margin", wrap_slide_indicator_set_margin);
  Nan::Export(ctx, "slide_indicator_set_spacing", wrap_slide_indicator_set_spacing);
  Nan::Export(ctx, "slide_indicator_set_size", wrap_slide_indicator_set_size);
  Nan::Export(ctx, "slide_indicator_set_anchor", wrap_slide_indicator_set_anchor);
  Nan::Export(ctx, "slide_indicator_set_indicated_target", wrap_slide_indicator_set_indicated_target);
  Nan::Export(ctx, "slide_indicator_t_get_prop_value", wrap_slide_indicator_t_get_prop_value);
  Nan::Export(ctx, "slide_indicator_t_get_prop_max", wrap_slide_indicator_t_get_prop_max);
  Nan::Export(ctx, "slide_indicator_t_get_prop_default_paint", wrap_slide_indicator_t_get_prop_default_paint);
  Nan::Export(ctx, "slide_indicator_t_get_prop_auto_hide", wrap_slide_indicator_t_get_prop_auto_hide);
  Nan::Export(ctx, "slide_indicator_t_get_prop_margin", wrap_slide_indicator_t_get_prop_margin);
  Nan::Export(ctx, "slide_indicator_t_get_prop_spacing", wrap_slide_indicator_t_get_prop_spacing);
  Nan::Export(ctx, "slide_indicator_t_get_prop_size", wrap_slide_indicator_t_get_prop_size);
  Nan::Export(ctx, "slide_indicator_t_get_prop_anchor_x", wrap_slide_indicator_t_get_prop_anchor_x);
  Nan::Export(ctx, "slide_indicator_t_get_prop_anchor_y", wrap_slide_indicator_t_get_prop_anchor_y);
  Nan::Export(ctx, "slide_indicator_t_get_prop_indicated_target", wrap_slide_indicator_t_get_prop_indicated_target);

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
  align_v_t align_v = (align_v_t)jsvalue_get_int_value(ctx, argv[1]);
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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->align_v));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slide_menu_t_get_prop_min_scale(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slide_menu_t* obj = (slide_menu_t*)jsvalue_get_pointer(ctx, argv[0], "slide_menu_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->min_scale));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t slide_menu_t_init(v8::Local<v8::Object> ctx) {
  Nan::Export(ctx, "slide_menu_create", wrap_slide_menu_create);
  Nan::Export(ctx, "slide_menu_cast", wrap_slide_menu_cast);
  Nan::Export(ctx, "slide_menu_set_value", wrap_slide_menu_set_value);
  Nan::Export(ctx, "slide_menu_set_align_v", wrap_slide_menu_set_align_v);
  Nan::Export(ctx, "slide_menu_set_min_scale", wrap_slide_menu_set_min_scale);
  Nan::Export(ctx, "slide_menu_t_get_prop_value", wrap_slide_menu_t_get_prop_value);
  Nan::Export(ctx, "slide_menu_t_get_prop_align_v", wrap_slide_menu_t_get_prop_align_v);
  Nan::Export(ctx, "slide_menu_t_get_prop_min_scale", wrap_slide_menu_t_get_prop_min_scale);

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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->xspeed_scale));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_scroll_view_t_get_prop_yspeed_scale(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->yspeed_scale));
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
  Nan::Export(ctx, "scroll_view_create", wrap_scroll_view_create);
  Nan::Export(ctx, "scroll_view_cast", wrap_scroll_view_cast);
  Nan::Export(ctx, "scroll_view_set_virtual_w", wrap_scroll_view_set_virtual_w);
  Nan::Export(ctx, "scroll_view_set_virtual_h", wrap_scroll_view_set_virtual_h);
  Nan::Export(ctx, "scroll_view_set_xslidable", wrap_scroll_view_set_xslidable);
  Nan::Export(ctx, "scroll_view_set_yslidable", wrap_scroll_view_set_yslidable);
  Nan::Export(ctx, "scroll_view_set_offset", wrap_scroll_view_set_offset);
  Nan::Export(ctx, "scroll_view_set_speed_scale", wrap_scroll_view_set_speed_scale);
  Nan::Export(ctx, "scroll_view_scroll_to", wrap_scroll_view_scroll_to);
  Nan::Export(ctx, "scroll_view_scroll_delta_to", wrap_scroll_view_scroll_delta_to);
  Nan::Export(ctx, "scroll_view_t_get_prop_virtual_w", wrap_scroll_view_t_get_prop_virtual_w);
  Nan::Export(ctx, "scroll_view_t_get_prop_virtual_h", wrap_scroll_view_t_get_prop_virtual_h);
  Nan::Export(ctx, "scroll_view_t_get_prop_xoffset", wrap_scroll_view_t_get_prop_xoffset);
  Nan::Export(ctx, "scroll_view_t_get_prop_yoffset", wrap_scroll_view_t_get_prop_yoffset);
  Nan::Export(ctx, "scroll_view_t_get_prop_xspeed_scale", wrap_scroll_view_t_get_prop_xspeed_scale);
  Nan::Export(ctx, "scroll_view_t_get_prop_yspeed_scale", wrap_scroll_view_t_get_prop_yspeed_scale);
  Nan::Export(ctx, "scroll_view_t_get_prop_xslidable", wrap_scroll_view_t_get_prop_xslidable);
  Nan::Export(ctx, "scroll_view_t_get_prop_yslidable", wrap_scroll_view_t_get_prop_yslidable);

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
  Nan::Export(ctx, "scroll_bar_create", wrap_scroll_bar_create);
  Nan::Export(ctx, "scroll_bar_cast", wrap_scroll_bar_cast);
  Nan::Export(ctx, "scroll_bar_create_mobile", wrap_scroll_bar_create_mobile);
  Nan::Export(ctx, "scroll_bar_create_desktop", wrap_scroll_bar_create_desktop);
  Nan::Export(ctx, "scroll_bar_set_params", wrap_scroll_bar_set_params);
  Nan::Export(ctx, "scroll_bar_scroll_to", wrap_scroll_bar_scroll_to);
  Nan::Export(ctx, "scroll_bar_set_value", wrap_scroll_bar_set_value);
  Nan::Export(ctx, "scroll_bar_add_delta", wrap_scroll_bar_add_delta);
  Nan::Export(ctx, "scroll_bar_scroll_delta", wrap_scroll_bar_scroll_delta);
  Nan::Export(ctx, "scroll_bar_set_value_only", wrap_scroll_bar_set_value_only);
  Nan::Export(ctx, "scroll_bar_is_mobile", wrap_scroll_bar_is_mobile);
  Nan::Export(ctx, "scroll_bar_t_get_prop_virtual_size", wrap_scroll_bar_t_get_prop_virtual_size);
  Nan::Export(ctx, "scroll_bar_t_get_prop_value", wrap_scroll_bar_t_get_prop_value);
  Nan::Export(ctx, "scroll_bar_t_get_prop_row", wrap_scroll_bar_t_get_prop_row);
  Nan::Export(ctx, "scroll_bar_t_get_prop_animatable", wrap_scroll_bar_t_get_prop_animatable);

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

static void wrap_list_view_reinit(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)list_view_reinit(widget);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
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
  Nan::Export(ctx, "list_view_create", wrap_list_view_create);
  Nan::Export(ctx, "list_view_set_item_height", wrap_list_view_set_item_height);
  Nan::Export(ctx, "list_view_set_default_item_height", wrap_list_view_set_default_item_height);
  Nan::Export(ctx, "list_view_set_auto_hide_scroll_bar", wrap_list_view_set_auto_hide_scroll_bar);
  Nan::Export(ctx, "list_view_cast", wrap_list_view_cast);
  Nan::Export(ctx, "list_view_reinit", wrap_list_view_reinit);
  Nan::Export(ctx, "list_view_t_get_prop_item_height", wrap_list_view_t_get_prop_item_height);
  Nan::Export(ctx, "list_view_t_get_prop_default_item_height", wrap_list_view_t_get_prop_default_item_height);
  Nan::Export(ctx, "list_view_t_get_prop_auto_hide_scroll_bar", wrap_list_view_t_get_prop_auto_hide_scroll_bar);

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
  Nan::Export(ctx, "tab_control_create", wrap_tab_control_create);
  Nan::Export(ctx, "tab_control_cast", wrap_tab_control_cast);

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
  Nan::Export(ctx, "list_view_h_create", wrap_list_view_h_create);
  Nan::Export(ctx, "list_view_h_set_item_width", wrap_list_view_h_set_item_width);
  Nan::Export(ctx, "list_view_h_set_spacing", wrap_list_view_h_set_spacing);
  Nan::Export(ctx, "list_view_h_cast", wrap_list_view_h_cast);
  Nan::Export(ctx, "list_view_h_t_get_prop_item_width", wrap_list_view_h_t_get_prop_item_width);
  Nan::Export(ctx, "list_view_h_t_get_prop_spacing", wrap_list_view_h_t_get_prop_spacing);

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
  Nan::Export(ctx, "list_item_create", wrap_list_item_create);
  Nan::Export(ctx, "list_item_cast", wrap_list_item_cast);

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
  Nan::Export(ctx, "tab_button_create", wrap_tab_button_create);
  Nan::Export(ctx, "tab_button_cast", wrap_tab_button_cast);
  Nan::Export(ctx, "tab_button_set_value", wrap_tab_button_set_value);
  Nan::Export(ctx, "tab_button_set_icon", wrap_tab_button_set_icon);
  Nan::Export(ctx, "tab_button_set_active_icon", wrap_tab_button_set_active_icon);
  Nan::Export(ctx, "tab_button_set_load_ui", wrap_tab_button_set_load_ui);
  Nan::Export(ctx, "tab_button_t_get_prop_value", wrap_tab_button_t_get_prop_value);
  Nan::Export(ctx, "tab_button_t_get_prop_load_ui", wrap_tab_button_t_get_prop_load_ui);
  Nan::Export(ctx, "tab_button_t_get_prop_active_icon", wrap_tab_button_t_get_prop_active_icon);
  Nan::Export(ctx, "tab_button_t_get_prop_icon", wrap_tab_button_t_get_prop_icon);

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
  Nan::Export(ctx, "tab_button_group_create", wrap_tab_button_group_create);
  Nan::Export(ctx, "tab_button_group_set_compact", wrap_tab_button_group_set_compact);
  Nan::Export(ctx, "tab_button_group_set_scrollable", wrap_tab_button_group_set_scrollable);
  Nan::Export(ctx, "tab_button_group_cast", wrap_tab_button_group_cast);
  Nan::Export(ctx, "tab_button_group_t_get_prop_compact", wrap_tab_button_group_t_get_prop_compact);
  Nan::Export(ctx, "tab_button_group_t_get_prop_scrollable", wrap_tab_button_group_t_get_prop_scrollable);

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
  Nan::Export(ctx, "hscroll_label_create", wrap_hscroll_label_create);
  Nan::Export(ctx, "hscroll_label_set_lull", wrap_hscroll_label_set_lull);
  Nan::Export(ctx, "hscroll_label_set_duration", wrap_hscroll_label_set_duration);
  Nan::Export(ctx, "hscroll_label_set_only_focus", wrap_hscroll_label_set_only_focus);
  Nan::Export(ctx, "hscroll_label_set_only_parent_focus", wrap_hscroll_label_set_only_parent_focus);
  Nan::Export(ctx, "hscroll_label_set_loop", wrap_hscroll_label_set_loop);
  Nan::Export(ctx, "hscroll_label_set_yoyo", wrap_hscroll_label_set_yoyo);
  Nan::Export(ctx, "hscroll_label_set_ellipses", wrap_hscroll_label_set_ellipses);
  Nan::Export(ctx, "hscroll_label_set_xoffset", wrap_hscroll_label_set_xoffset);
  Nan::Export(ctx, "hscroll_label_start", wrap_hscroll_label_start);
  Nan::Export(ctx, "hscroll_label_stop", wrap_hscroll_label_stop);
  Nan::Export(ctx, "hscroll_label_cast", wrap_hscroll_label_cast);
  Nan::Export(ctx, "hscroll_label_t_get_prop_only_focus", wrap_hscroll_label_t_get_prop_only_focus);
  Nan::Export(ctx, "hscroll_label_t_get_prop_only_parent_focus", wrap_hscroll_label_t_get_prop_only_parent_focus);
  Nan::Export(ctx, "hscroll_label_t_get_prop_loop", wrap_hscroll_label_t_get_prop_loop);
  Nan::Export(ctx, "hscroll_label_t_get_prop_yoyo", wrap_hscroll_label_t_get_prop_yoyo);
  Nan::Export(ctx, "hscroll_label_t_get_prop_ellipses", wrap_hscroll_label_t_get_prop_ellipses);
  Nan::Export(ctx, "hscroll_label_t_get_prop_lull", wrap_hscroll_label_t_get_prop_lull);
  Nan::Export(ctx, "hscroll_label_t_get_prop_duration", wrap_hscroll_label_t_get_prop_duration);
  Nan::Export(ctx, "hscroll_label_t_get_prop_xoffset", wrap_hscroll_label_t_get_prop_xoffset);
  Nan::Export(ctx, "hscroll_label_t_get_prop_text_w", wrap_hscroll_label_t_get_prop_text_w);

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
  Nan::Export(ctx, "rich_text_create", wrap_rich_text_create);
  Nan::Export(ctx, "rich_text_set_text", wrap_rich_text_set_text);
  Nan::Export(ctx, "rich_text_cast", wrap_rich_text_cast);
  Nan::Export(ctx, "rich_text_t_get_prop_line_gap", wrap_rich_text_t_get_prop_line_gap);
  Nan::Export(ctx, "rich_text_t_get_prop_margin", wrap_rich_text_t_get_prop_margin);

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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->value));
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
  Nan::Export(ctx, "progress_circle_create", wrap_progress_circle_create);
  Nan::Export(ctx, "progress_circle_cast", wrap_progress_circle_cast);
  Nan::Export(ctx, "progress_circle_set_value", wrap_progress_circle_set_value);
  Nan::Export(ctx, "progress_circle_set_max", wrap_progress_circle_set_max);
  Nan::Export(ctx, "progress_circle_set_line_width", wrap_progress_circle_set_line_width);
  Nan::Export(ctx, "progress_circle_set_start_angle", wrap_progress_circle_set_start_angle);
  Nan::Export(ctx, "progress_circle_set_unit", wrap_progress_circle_set_unit);
  Nan::Export(ctx, "progress_circle_set_show_text", wrap_progress_circle_set_show_text);
  Nan::Export(ctx, "progress_circle_set_counter_clock_wise", wrap_progress_circle_set_counter_clock_wise);
  Nan::Export(ctx, "progress_circle_t_get_prop_value", wrap_progress_circle_t_get_prop_value);
  Nan::Export(ctx, "progress_circle_t_get_prop_max", wrap_progress_circle_t_get_prop_max);
  Nan::Export(ctx, "progress_circle_t_get_prop_start_angle", wrap_progress_circle_t_get_prop_start_angle);
  Nan::Export(ctx, "progress_circle_t_get_prop_line_width", wrap_progress_circle_t_get_prop_line_width);
  Nan::Export(ctx, "progress_circle_t_get_prop_unit", wrap_progress_circle_t_get_prop_unit);
  Nan::Export(ctx, "progress_circle_t_get_prop_counter_clock_wise", wrap_progress_circle_t_get_prop_counter_clock_wise);
  Nan::Export(ctx, "progress_circle_t_get_prop_show_text", wrap_progress_circle_t_get_prop_show_text);

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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->value));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slider_t_get_prop_min(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->min));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slider_t_get_prop_max(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->max));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_slider_t_get_prop_step(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->step));
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
  Nan::Export(ctx, "slider_create", wrap_slider_create);
  Nan::Export(ctx, "slider_cast", wrap_slider_cast);
  Nan::Export(ctx, "slider_set_value", wrap_slider_set_value);
  Nan::Export(ctx, "slider_set_min", wrap_slider_set_min);
  Nan::Export(ctx, "slider_set_max", wrap_slider_set_max);
  Nan::Export(ctx, "slider_set_step", wrap_slider_set_step);
  Nan::Export(ctx, "slider_set_bar_size", wrap_slider_set_bar_size);
  Nan::Export(ctx, "slider_set_vertical", wrap_slider_set_vertical);
  Nan::Export(ctx, "slider_t_get_prop_value", wrap_slider_t_get_prop_value);
  Nan::Export(ctx, "slider_t_get_prop_min", wrap_slider_t_get_prop_min);
  Nan::Export(ctx, "slider_t_get_prop_max", wrap_slider_t_get_prop_max);
  Nan::Export(ctx, "slider_t_get_prop_step", wrap_slider_t_get_prop_step);
  Nan::Export(ctx, "slider_t_get_prop_vertical", wrap_slider_t_get_prop_vertical);
  Nan::Export(ctx, "slider_t_get_prop_bar_size", wrap_slider_t_get_prop_bar_size);
  Nan::Export(ctx, "slider_t_get_prop_dragger_size", wrap_slider_t_get_prop_dragger_size);
  Nan::Export(ctx, "slider_t_get_prop_dragger_adapt_to_icon", wrap_slider_t_get_prop_dragger_adapt_to_icon);
  Nan::Export(ctx, "slider_t_get_prop_slide_with_bar", wrap_slider_t_get_prop_slide_with_bar);

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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->scroll_line));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t mledit_t_init(v8::Local<v8::Object> ctx) {
  Nan::Export(ctx, "mledit_create", wrap_mledit_create);
  Nan::Export(ctx, "mledit_set_readonly", wrap_mledit_set_readonly);
  Nan::Export(ctx, "mledit_set_focus", wrap_mledit_set_focus);
  Nan::Export(ctx, "mledit_set_wrap_word", wrap_mledit_set_wrap_word);
  Nan::Export(ctx, "mledit_set_max_lines", wrap_mledit_set_max_lines);
  Nan::Export(ctx, "mledit_set_input_tips", wrap_mledit_set_input_tips);
  Nan::Export(ctx, "mledit_set_cursor", wrap_mledit_set_cursor);
  Nan::Export(ctx, "mledit_set_scroll_line", wrap_mledit_set_scroll_line);
  Nan::Export(ctx, "mledit_cast", wrap_mledit_cast);
  Nan::Export(ctx, "mledit_t_get_prop_readonly", wrap_mledit_t_get_prop_readonly);
  Nan::Export(ctx, "mledit_t_get_prop_tips", wrap_mledit_t_get_prop_tips);
  Nan::Export(ctx, "mledit_t_get_prop_wrap_word", wrap_mledit_t_get_prop_wrap_word);
  Nan::Export(ctx, "mledit_t_get_prop_max_lines", wrap_mledit_t_get_prop_max_lines);
  Nan::Export(ctx, "mledit_t_get_prop_scroll_line", wrap_mledit_t_get_prop_scroll_line);

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
  Nan::Export(ctx, "line_number_create", wrap_line_number_create);
  Nan::Export(ctx, "line_number_set_top_margin", wrap_line_number_set_top_margin);
  Nan::Export(ctx, "line_number_set_bottom_margin", wrap_line_number_set_bottom_margin);
  Nan::Export(ctx, "line_number_set_line_height", wrap_line_number_set_line_height);
  Nan::Export(ctx, "line_number_set_yoffset", wrap_line_number_set_yoffset);
  Nan::Export(ctx, "line_number_cast", wrap_line_number_cast);

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
  Nan::Export(ctx, "row_create", wrap_row_create);
  Nan::Export(ctx, "row_cast", wrap_row_cast);

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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->value));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_progress_bar_t_get_prop_max(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->max));
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
  Nan::Export(ctx, "progress_bar_create", wrap_progress_bar_create);
  Nan::Export(ctx, "progress_bar_cast", wrap_progress_bar_cast);
  Nan::Export(ctx, "progress_bar_set_value", wrap_progress_bar_set_value);
  Nan::Export(ctx, "progress_bar_set_max", wrap_progress_bar_set_max);
  Nan::Export(ctx, "progress_bar_set_vertical", wrap_progress_bar_set_vertical);
  Nan::Export(ctx, "progress_bar_set_show_text", wrap_progress_bar_set_show_text);
  Nan::Export(ctx, "progress_bar_get_percent", wrap_progress_bar_get_percent);
  Nan::Export(ctx, "progress_bar_t_get_prop_value", wrap_progress_bar_t_get_prop_value);
  Nan::Export(ctx, "progress_bar_t_get_prop_max", wrap_progress_bar_t_get_prop_max);
  Nan::Export(ctx, "progress_bar_t_get_prop_vertical", wrap_progress_bar_t_get_prop_vertical);
  Nan::Export(ctx, "progress_bar_t_get_prop_show_text", wrap_progress_bar_t_get_prop_show_text);

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
  Nan::Export(ctx, "pages_create", wrap_pages_create);
  Nan::Export(ctx, "pages_cast", wrap_pages_cast);
  Nan::Export(ctx, "pages_set_active", wrap_pages_set_active);
  Nan::Export(ctx, "pages_set_active_by_name", wrap_pages_set_active_by_name);
  Nan::Export(ctx, "pages_t_get_prop_active", wrap_pages_t_get_prop_active);

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
  Nan::Export(ctx, "overlay_create", wrap_overlay_create);
  Nan::Export(ctx, "overlay_cast", wrap_overlay_cast);

 return RET_OK;
}

static void wrap_candidates_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)candidates_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t candidates_t_init(v8::Local<v8::Object> ctx) {
  Nan::Export(ctx, "candidates_cast", wrap_candidates_cast);

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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->value));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t image_value_t_init(v8::Local<v8::Object> ctx) {
  Nan::Export(ctx, "image_value_create", wrap_image_value_create);
  Nan::Export(ctx, "image_value_set_image", wrap_image_value_set_image);
  Nan::Export(ctx, "image_value_set_format", wrap_image_value_set_format);
  Nan::Export(ctx, "image_value_set_value", wrap_image_value_set_value);
  Nan::Export(ctx, "image_value_cast", wrap_image_value_cast);
  Nan::Export(ctx, "image_value_t_get_prop_image", wrap_image_value_t_get_prop_image);
  Nan::Export(ctx, "image_value_t_get_prop_format", wrap_image_value_t_get_prop_format);
  Nan::Export(ctx, "image_value_t_get_prop_value", wrap_image_value_t_get_prop_value);

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
  Nan::Export(ctx, "image_animation_create", wrap_image_animation_create);
  Nan::Export(ctx, "image_animation_set_loop", wrap_image_animation_set_loop);
  Nan::Export(ctx, "image_animation_set_image", wrap_image_animation_set_image);
  Nan::Export(ctx, "image_animation_set_interval", wrap_image_animation_set_interval);
  Nan::Export(ctx, "image_animation_set_delay", wrap_image_animation_set_delay);
  Nan::Export(ctx, "image_animation_set_auto_play", wrap_image_animation_set_auto_play);
  Nan::Export(ctx, "image_animation_set_sequence", wrap_image_animation_set_sequence);
  Nan::Export(ctx, "image_animation_set_range_sequence", wrap_image_animation_set_range_sequence);
  Nan::Export(ctx, "image_animation_play", wrap_image_animation_play);
  Nan::Export(ctx, "image_animation_stop", wrap_image_animation_stop);
  Nan::Export(ctx, "image_animation_pause", wrap_image_animation_pause);
  Nan::Export(ctx, "image_animation_next", wrap_image_animation_next);
  Nan::Export(ctx, "image_animation_set_format", wrap_image_animation_set_format);
  Nan::Export(ctx, "image_animation_set_unload_after_paint", wrap_image_animation_set_unload_after_paint);
  Nan::Export(ctx, "image_animation_cast", wrap_image_animation_cast);
  Nan::Export(ctx, "image_animation_t_get_prop_image", wrap_image_animation_t_get_prop_image);
  Nan::Export(ctx, "image_animation_t_get_prop_sequence", wrap_image_animation_t_get_prop_sequence);
  Nan::Export(ctx, "image_animation_t_get_prop_start_index", wrap_image_animation_t_get_prop_start_index);
  Nan::Export(ctx, "image_animation_t_get_prop_end_index", wrap_image_animation_t_get_prop_end_index);
  Nan::Export(ctx, "image_animation_t_get_prop_loop", wrap_image_animation_t_get_prop_loop);
  Nan::Export(ctx, "image_animation_t_get_prop_auto_play", wrap_image_animation_t_get_prop_auto_play);
  Nan::Export(ctx, "image_animation_t_get_prop_unload_after_paint", wrap_image_animation_t_get_prop_unload_after_paint);
  Nan::Export(ctx, "image_animation_t_get_prop_format", wrap_image_animation_t_get_prop_format);
  Nan::Export(ctx, "image_animation_t_get_prop_interval", wrap_image_animation_t_get_prop_interval);
  Nan::Export(ctx, "image_animation_t_get_prop_delay", wrap_image_animation_t_get_prop_delay);

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
  image_draw_type_t draw_type = (image_draw_type_t)jsvalue_get_int_value(ctx, argv[1]);
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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->draw_type));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t guage_t_init(v8::Local<v8::Object> ctx) {
  Nan::Export(ctx, "guage_create", wrap_guage_create);
  Nan::Export(ctx, "guage_cast", wrap_guage_cast);
  Nan::Export(ctx, "guage_set_image", wrap_guage_set_image);
  Nan::Export(ctx, "guage_set_draw_type", wrap_guage_set_draw_type);
  Nan::Export(ctx, "guage_t_get_prop_image", wrap_guage_t_get_prop_image);
  Nan::Export(ctx, "guage_t_get_prop_draw_type", wrap_guage_t_get_prop_draw_type);

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

  const char* str_temp = obj->anchor_x;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_guage_pointer_t_get_prop_anchor_y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  guage_pointer_t* obj = (guage_pointer_t*)jsvalue_get_pointer(ctx, argv[0], "guage_pointer_t*");

  const char* str_temp = obj->anchor_y;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t guage_pointer_t_init(v8::Local<v8::Object> ctx) {
  Nan::Export(ctx, "guage_pointer_create", wrap_guage_pointer_create);
  Nan::Export(ctx, "guage_pointer_cast", wrap_guage_pointer_cast);
  Nan::Export(ctx, "guage_pointer_set_angle", wrap_guage_pointer_set_angle);
  Nan::Export(ctx, "guage_pointer_set_image", wrap_guage_pointer_set_image);
  Nan::Export(ctx, "guage_pointer_set_anchor", wrap_guage_pointer_set_anchor);
  Nan::Export(ctx, "guage_pointer_t_get_prop_angle", wrap_guage_pointer_t_get_prop_angle);
  Nan::Export(ctx, "guage_pointer_t_get_prop_image", wrap_guage_pointer_t_get_prop_image);
  Nan::Export(ctx, "guage_pointer_t_get_prop_anchor_x", wrap_guage_pointer_t_get_prop_anchor_x);
  Nan::Export(ctx, "guage_pointer_t_get_prop_anchor_y", wrap_guage_pointer_t_get_prop_anchor_y);

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
  Nan::Export(ctx, "label_create", wrap_label_create);
  Nan::Export(ctx, "label_set_length", wrap_label_set_length);
  Nan::Export(ctx, "label_resize_to_content", wrap_label_resize_to_content);
  Nan::Export(ctx, "label_cast", wrap_label_cast);
  Nan::Export(ctx, "label_t_get_prop_length", wrap_label_t_get_prop_length);

 return RET_OK;
}

static void wrap_file_chooser_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 0) {
  file_chooser_t* ret = NULL;
  ret = (file_chooser_t*)file_chooser_create();

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_file_chooser_set_init_dir(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  file_chooser_t* chooser = (file_chooser_t*)jsvalue_get_pointer(ctx, argv[0], "file_chooser_t*");
  const char* init_dir = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)file_chooser_set_init_dir(chooser, init_dir);
  jsvalue_free_str(ctx, init_dir);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_file_chooser_set_filter(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  file_chooser_t* chooser = (file_chooser_t*)jsvalue_get_pointer(ctx, argv[0], "file_chooser_t*");
  const char* filter = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)file_chooser_set_filter(chooser, filter);
  jsvalue_free_str(ctx, filter);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_file_chooser_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  file_chooser_t* ret = NULL;
  file_chooser_t* chooser = (file_chooser_t*)jsvalue_get_pointer(ctx, argv[0], "file_chooser_t*");
  ret = (file_chooser_t*)file_chooser_cast(chooser);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_file_chooser_choose_file_for_save(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  file_chooser_t* chooser = (file_chooser_t*)jsvalue_get_pointer(ctx, argv[0], "file_chooser_t*");
  ret = (ret_t)file_chooser_choose_file_for_save(chooser);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_file_chooser_choose_file_for_open(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  file_chooser_t* chooser = (file_chooser_t*)jsvalue_get_pointer(ctx, argv[0], "file_chooser_t*");
  ret = (ret_t)file_chooser_choose_file_for_open(chooser);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_file_chooser_choose_folder(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  ret_t ret = (ret_t)0;
  file_chooser_t* chooser = (file_chooser_t*)jsvalue_get_pointer(ctx, argv[0], "file_chooser_t*");
  ret = (ret_t)file_chooser_choose_folder(chooser);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_file_chooser_get_dir(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  const char* ret = NULL;
  file_chooser_t* chooser = (file_chooser_t*)jsvalue_get_pointer(ctx, argv[0], "file_chooser_t*");
  ret = (const char*)file_chooser_get_dir(chooser);

  const char* str_temp = ret;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_file_chooser_get_filename(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  const char* ret = NULL;
  file_chooser_t* chooser = (file_chooser_t*)jsvalue_get_pointer(ctx, argv[0], "file_chooser_t*");
  ret = (const char*)file_chooser_get_filename(chooser);

  const char* str_temp = ret;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_file_chooser_is_aborted(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  bool_t ret = (bool_t)0;
  file_chooser_t* chooser = (file_chooser_t*)jsvalue_get_pointer(ctx, argv[0], "file_chooser_t*");
  ret = (bool_t)file_chooser_is_aborted(chooser);

  v8::Local<v8::Boolean> jret= Nan::New((bool)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t file_chooser_t_init(v8::Local<v8::Object> ctx) {
  Nan::Export(ctx, "file_chooser_create", wrap_file_chooser_create);
  Nan::Export(ctx, "file_chooser_set_init_dir", wrap_file_chooser_set_init_dir);
  Nan::Export(ctx, "file_chooser_set_filter", wrap_file_chooser_set_filter);
  Nan::Export(ctx, "file_chooser_cast", wrap_file_chooser_cast);
  Nan::Export(ctx, "file_chooser_choose_file_for_save", wrap_file_chooser_choose_file_for_save);
  Nan::Export(ctx, "file_chooser_choose_file_for_open", wrap_file_chooser_choose_file_for_open);
  Nan::Export(ctx, "file_chooser_choose_folder", wrap_file_chooser_choose_folder);
  Nan::Export(ctx, "file_chooser_get_dir", wrap_file_chooser_get_dir);
  Nan::Export(ctx, "file_chooser_get_filename", wrap_file_chooser_get_filename);
  Nan::Export(ctx, "file_chooser_is_aborted", wrap_file_chooser_is_aborted);

 return RET_OK;
}

static void wrap_file_browser_view_create(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)file_browser_view_create(parent, x, y, w, h);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_file_browser_view_cast(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)file_browser_view_cast(widget);

  v8::Local<v8::Number> jret= Nan::New((double)((int64_t)(ret)));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_file_browser_view_set_init_dir(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* init_dir = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)file_browser_view_set_init_dir(widget, init_dir);
  jsvalue_free_str(ctx, init_dir);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_file_browser_view_set_ignore_hidden_files(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t ignore_hidden_files = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)file_browser_view_set_ignore_hidden_files(widget, ignore_hidden_files);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_file_browser_view_set_sort_ascending(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t sort_ascending = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)file_browser_view_set_sort_ascending(widget, sort_ascending);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_file_browser_view_set_show_check_button(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t show_check_button = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)file_browser_view_set_show_check_button(widget, show_check_button);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_file_browser_view_set_sort_by(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* sort_by = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)file_browser_view_set_sort_by(widget, sort_by);
  jsvalue_free_str(ctx, sort_by);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_file_browser_view_get_cwd(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  const char* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (const char*)file_browser_view_get_cwd(widget);

  const char* str_temp = ret;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_file_browser_view_create_dir(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 2) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)file_browser_view_create_dir(widget, name);
  jsvalue_free_str(ctx, name);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_file_browser_view_create_file(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 4) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* data = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  uint32_t size = (uint32_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)file_browser_view_create_file(widget, name, data, size);
  jsvalue_free_str(ctx, name);
  jsvalue_free_str(ctx, data);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

static void wrap_file_browser_view_t_get_prop_init_dir(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  file_browser_view_t* obj = (file_browser_view_t*)jsvalue_get_pointer(ctx, argv[0], "file_browser_view_t*");

  const char* str_temp = obj->init_dir;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_file_browser_view_t_get_prop_ignore_hidden_files(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  file_browser_view_t* obj = (file_browser_view_t*)jsvalue_get_pointer(ctx, argv[0], "file_browser_view_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->ignore_hidden_files));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_file_browser_view_t_get_prop_sort_ascending(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  file_browser_view_t* obj = (file_browser_view_t*)jsvalue_get_pointer(ctx, argv[0], "file_browser_view_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->sort_ascending));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_file_browser_view_t_get_prop_show_check_button(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  file_browser_view_t* obj = (file_browser_view_t*)jsvalue_get_pointer(ctx, argv[0], "file_browser_view_t*");

  v8::Local<v8::Boolean> jret= Nan::New((bool)(obj->show_check_button));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_file_browser_view_t_get_prop_sort_by(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  file_browser_view_t* obj = (file_browser_view_t*)jsvalue_get_pointer(ctx, argv[0], "file_browser_view_t*");

  const char* str_temp = obj->sort_by;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t file_browser_view_t_init(v8::Local<v8::Object> ctx) {
  Nan::Export(ctx, "file_browser_view_create", wrap_file_browser_view_create);
  Nan::Export(ctx, "file_browser_view_cast", wrap_file_browser_view_cast);
  Nan::Export(ctx, "file_browser_view_set_init_dir", wrap_file_browser_view_set_init_dir);
  Nan::Export(ctx, "file_browser_view_set_ignore_hidden_files", wrap_file_browser_view_set_ignore_hidden_files);
  Nan::Export(ctx, "file_browser_view_set_sort_ascending", wrap_file_browser_view_set_sort_ascending);
  Nan::Export(ctx, "file_browser_view_set_show_check_button", wrap_file_browser_view_set_show_check_button);
  Nan::Export(ctx, "file_browser_view_set_sort_by", wrap_file_browser_view_set_sort_by);
  Nan::Export(ctx, "file_browser_view_get_cwd", wrap_file_browser_view_get_cwd);
  Nan::Export(ctx, "file_browser_view_create_dir", wrap_file_browser_view_create_dir);
  Nan::Export(ctx, "file_browser_view_create_file", wrap_file_browser_view_create_file);
  Nan::Export(ctx, "file_browser_view_t_get_prop_init_dir", wrap_file_browser_view_t_get_prop_init_dir);
  Nan::Export(ctx, "file_browser_view_t_get_prop_ignore_hidden_files", wrap_file_browser_view_t_get_prop_ignore_hidden_files);
  Nan::Export(ctx, "file_browser_view_t_get_prop_sort_ascending", wrap_file_browser_view_t_get_prop_sort_ascending);
  Nan::Export(ctx, "file_browser_view_t_get_prop_show_check_button", wrap_file_browser_view_t_get_prop_show_check_button);
  Nan::Export(ctx, "file_browser_view_t_get_prop_sort_by", wrap_file_browser_view_t_get_prop_sort_by);

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
  Nan::Export(ctx, "draggable_create", wrap_draggable_create);
  Nan::Export(ctx, "draggable_cast", wrap_draggable_cast);
  Nan::Export(ctx, "draggable_set_top", wrap_draggable_set_top);
  Nan::Export(ctx, "draggable_set_bottom", wrap_draggable_set_bottom);
  Nan::Export(ctx, "draggable_set_left", wrap_draggable_set_left);
  Nan::Export(ctx, "draggable_set_right", wrap_draggable_set_right);
  Nan::Export(ctx, "draggable_set_vertical_only", wrap_draggable_set_vertical_only);
  Nan::Export(ctx, "draggable_set_horizontal_only", wrap_draggable_set_horizontal_only);
  Nan::Export(ctx, "draggable_set_drag_window", wrap_draggable_set_drag_window);
  Nan::Export(ctx, "draggable_t_get_prop_top", wrap_draggable_t_get_prop_top);
  Nan::Export(ctx, "draggable_t_get_prop_bottom", wrap_draggable_t_get_prop_bottom);
  Nan::Export(ctx, "draggable_t_get_prop_left", wrap_draggable_t_get_prop_left);
  Nan::Export(ctx, "draggable_t_get_prop_right", wrap_draggable_t_get_prop_right);
  Nan::Export(ctx, "draggable_t_get_prop_vertical_only", wrap_draggable_t_get_prop_vertical_only);
  Nan::Export(ctx, "draggable_t_get_prop_horizontal_only", wrap_draggable_t_get_prop_horizontal_only);
  Nan::Export(ctx, "draggable_t_get_prop_drag_window", wrap_draggable_t_get_prop_drag_window);

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
  Nan::Export(ctx, "color_picker_create", wrap_color_picker_create);
  Nan::Export(ctx, "color_picker_set_color", wrap_color_picker_set_color);
  Nan::Export(ctx, "color_picker_cast", wrap_color_picker_cast);
  Nan::Export(ctx, "color_picker_t_get_prop_value", wrap_color_picker_t_get_prop_value);

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
  Nan::Export(ctx, "canvas_widget_create", wrap_canvas_widget_create);
  Nan::Export(ctx, "canvas_widget_cast", wrap_canvas_widget_cast);

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
  Nan::Export(ctx, "group_box_create", wrap_group_box_create);
  Nan::Export(ctx, "group_box_cast", wrap_group_box_cast);

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
  Nan::Export(ctx, "grid_create", wrap_grid_create);
  Nan::Export(ctx, "grid_cast", wrap_grid_cast);

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

static void wrap_window_manager_is_animating(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 1) {
  bool_t ret = (bool_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)window_manager_is_animating(widget);

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

static void wrap_window_manager_resize(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  if(argc >= 3) {
  ret_t ret = (ret_t)0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[1]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)window_manager_resize(widget, w, h);

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
  argv.GetReturnValue().Set(jret);
  }
  (void)argc;(void)ctx;
}

ret_t window_manager_t_init(v8::Local<v8::Object> ctx) {
  Nan::Export(ctx, "window_manager", wrap_window_manager);
  Nan::Export(ctx, "window_manager_cast", wrap_window_manager_cast);
  Nan::Export(ctx, "window_manager_get_top_main_window", wrap_window_manager_get_top_main_window);
  Nan::Export(ctx, "window_manager_get_top_window", wrap_window_manager_get_top_window);
  Nan::Export(ctx, "window_manager_get_prev_window", wrap_window_manager_get_prev_window);
  Nan::Export(ctx, "window_manager_get_pointer_x", wrap_window_manager_get_pointer_x);
  Nan::Export(ctx, "window_manager_get_pointer_y", wrap_window_manager_get_pointer_y);
  Nan::Export(ctx, "window_manager_get_pointer_pressed", wrap_window_manager_get_pointer_pressed);
  Nan::Export(ctx, "window_manager_is_animating", wrap_window_manager_is_animating);
  Nan::Export(ctx, "window_manager_set_show_fps", wrap_window_manager_set_show_fps);
  Nan::Export(ctx, "window_manager_set_screen_saver_time", wrap_window_manager_set_screen_saver_time);
  Nan::Export(ctx, "window_manager_set_cursor", wrap_window_manager_set_cursor);
  Nan::Export(ctx, "window_manager_back", wrap_window_manager_back);
  Nan::Export(ctx, "window_manager_back_to_home", wrap_window_manager_back_to_home);
  Nan::Export(ctx, "window_manager_back_to", wrap_window_manager_back_to);
  Nan::Export(ctx, "window_manager_resize", wrap_window_manager_resize);

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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->closable));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_window_base_t_get_prop_open_anim_hint(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  const char* str_temp = obj->open_anim_hint;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_window_base_t_get_prop_close_anim_hint(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  const char* str_temp = obj->close_anim_hint;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_window_base_t_get_prop_move_focus_prev_key(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  const char* str_temp = obj->move_focus_prev_key;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_window_base_t_get_prop_move_focus_next_key(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  const char* str_temp = obj->move_focus_next_key;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_window_base_t_get_prop_move_focus_up_key(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  const char* str_temp = obj->move_focus_up_key;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_window_base_t_get_prop_move_focus_down_key(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  const char* str_temp = obj->move_focus_down_key;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_window_base_t_get_prop_move_focus_left_key(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  const char* str_temp = obj->move_focus_left_key;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_window_base_t_get_prop_move_focus_right_key(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  const char* str_temp = obj->move_focus_right_key;
  str_temp = (str_temp != NULL) ? str_temp : "";
  v8::Local<v8::String> jret= Nan::New((const char*)(str_temp)).ToLocalChecked();
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t window_base_t_init(v8::Local<v8::Object> ctx) {
  Nan::Export(ctx, "window_base_cast", wrap_window_base_cast);
  Nan::Export(ctx, "window_base_t_get_prop_theme", wrap_window_base_t_get_prop_theme);
  Nan::Export(ctx, "window_base_t_get_prop_closable", wrap_window_base_t_get_prop_closable);
  Nan::Export(ctx, "window_base_t_get_prop_open_anim_hint", wrap_window_base_t_get_prop_open_anim_hint);
  Nan::Export(ctx, "window_base_t_get_prop_close_anim_hint", wrap_window_base_t_get_prop_close_anim_hint);
  Nan::Export(ctx, "window_base_t_get_prop_move_focus_prev_key", wrap_window_base_t_get_prop_move_focus_prev_key);
  Nan::Export(ctx, "window_base_t_get_prop_move_focus_next_key", wrap_window_base_t_get_prop_move_focus_next_key);
  Nan::Export(ctx, "window_base_t_get_prop_move_focus_up_key", wrap_window_base_t_get_prop_move_focus_up_key);
  Nan::Export(ctx, "window_base_t_get_prop_move_focus_down_key", wrap_window_base_t_get_prop_move_focus_down_key);
  Nan::Export(ctx, "window_base_t_get_prop_move_focus_left_key", wrap_window_base_t_get_prop_move_focus_left_key);
  Nan::Export(ctx, "window_base_t_get_prop_move_focus_right_key", wrap_window_base_t_get_prop_move_focus_right_key);

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
  Nan::Export(ctx, "grid_item_create", wrap_grid_item_create);
  Nan::Export(ctx, "grid_item_cast", wrap_grid_item_cast);

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
  Nan::Export(ctx, "style_mutable_set_name", wrap_style_mutable_set_name);
  Nan::Export(ctx, "style_mutable_set_int", wrap_style_mutable_set_int);
  Nan::Export(ctx, "style_mutable_cast", wrap_style_mutable_cast);
  Nan::Export(ctx, "style_mutable_create", wrap_style_mutable_create);
  Nan::Export(ctx, "style_mutable_t_get_prop_name", wrap_style_mutable_t_get_prop_name);

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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
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
  input_type_t type = (input_type_t)jsvalue_get_int_value(ctx, argv[1]);
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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->input_type));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_edit_t_get_prop_min(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->min));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_edit_t_get_prop_max(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->max));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_edit_t_get_prop_step(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->step));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t edit_t_init(v8::Local<v8::Object> ctx) {
  Nan::Export(ctx, "edit_create", wrap_edit_create);
  Nan::Export(ctx, "edit_cast", wrap_edit_cast);
  Nan::Export(ctx, "edit_get_int", wrap_edit_get_int);
  Nan::Export(ctx, "edit_get_double", wrap_edit_get_double);
  Nan::Export(ctx, "edit_set_int", wrap_edit_set_int);
  Nan::Export(ctx, "edit_set_double", wrap_edit_set_double);
  Nan::Export(ctx, "edit_set_text_limit", wrap_edit_set_text_limit);
  Nan::Export(ctx, "edit_set_int_limit", wrap_edit_set_int_limit);
  Nan::Export(ctx, "edit_set_float_limit", wrap_edit_set_float_limit);
  Nan::Export(ctx, "edit_set_readonly", wrap_edit_set_readonly);
  Nan::Export(ctx, "edit_set_auto_fix", wrap_edit_set_auto_fix);
  Nan::Export(ctx, "edit_set_select_none_when_focused", wrap_edit_set_select_none_when_focused);
  Nan::Export(ctx, "edit_set_open_im_when_focused", wrap_edit_set_open_im_when_focused);
  Nan::Export(ctx, "edit_set_input_type", wrap_edit_set_input_type);
  Nan::Export(ctx, "edit_set_input_tips", wrap_edit_set_input_tips);
  Nan::Export(ctx, "edit_set_password_visible", wrap_edit_set_password_visible);
  Nan::Export(ctx, "edit_set_focus", wrap_edit_set_focus);
  Nan::Export(ctx, "edit_set_cursor", wrap_edit_set_cursor);
  Nan::Export(ctx, "edit_t_get_prop_readonly", wrap_edit_t_get_prop_readonly);
  Nan::Export(ctx, "edit_t_get_prop_password_visible", wrap_edit_t_get_prop_password_visible);
  Nan::Export(ctx, "edit_t_get_prop_auto_fix", wrap_edit_t_get_prop_auto_fix);
  Nan::Export(ctx, "edit_t_get_prop_select_none_when_focused", wrap_edit_t_get_prop_select_none_when_focused);
  Nan::Export(ctx, "edit_t_get_prop_open_im_when_focused", wrap_edit_t_get_prop_open_im_when_focused);
  Nan::Export(ctx, "edit_t_get_prop_tips", wrap_edit_t_get_prop_tips);
  Nan::Export(ctx, "edit_t_get_prop_input_type", wrap_edit_t_get_prop_input_type);
  Nan::Export(ctx, "edit_t_get_prop_min", wrap_edit_t_get_prop_min);
  Nan::Export(ctx, "edit_t_get_prop_max", wrap_edit_t_get_prop_max);
  Nan::Export(ctx, "edit_t_get_prop_step", wrap_edit_t_get_prop_step);

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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->anchor_x));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_base_t_get_prop_anchor_y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->anchor_y));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_base_t_get_prop_scale_x(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->scale_x));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_base_t_get_prop_scale_y(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->scale_y));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

static void wrap_image_base_t_get_prop_rotation(const Nan::FunctionCallbackInfo<v8::Value>& argv) {
  JSContext* ctx = NULL; 
  int32_t argc = (int32_t)(argv.Length()); 
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->rotation));
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
  Nan::Export(ctx, "image_base_set_image", wrap_image_base_set_image);
  Nan::Export(ctx, "image_base_set_rotation", wrap_image_base_set_rotation);
  Nan::Export(ctx, "image_base_set_scale", wrap_image_base_set_scale);
  Nan::Export(ctx, "image_base_set_anchor", wrap_image_base_set_anchor);
  Nan::Export(ctx, "image_base_set_selected", wrap_image_base_set_selected);
  Nan::Export(ctx, "image_base_set_selectable", wrap_image_base_set_selectable);
  Nan::Export(ctx, "image_base_set_clickable", wrap_image_base_set_clickable);
  Nan::Export(ctx, "image_base_cast", wrap_image_base_cast);
  Nan::Export(ctx, "image_base_t_get_prop_image", wrap_image_base_t_get_prop_image);
  Nan::Export(ctx, "image_base_t_get_prop_anchor_x", wrap_image_base_t_get_prop_anchor_x);
  Nan::Export(ctx, "image_base_t_get_prop_anchor_y", wrap_image_base_t_get_prop_anchor_y);
  Nan::Export(ctx, "image_base_t_get_prop_scale_x", wrap_image_base_t_get_prop_scale_x);
  Nan::Export(ctx, "image_base_t_get_prop_scale_y", wrap_image_base_t_get_prop_scale_y);
  Nan::Export(ctx, "image_base_t_get_prop_rotation", wrap_image_base_t_get_prop_rotation);
  Nan::Export(ctx, "image_base_t_get_prop_clickable", wrap_image_base_t_get_prop_clickable);
  Nan::Export(ctx, "image_base_t_get_prop_selectable", wrap_image_base_t_get_prop_selectable);
  Nan::Export(ctx, "image_base_t_get_prop_selected", wrap_image_base_t_get_prop_selected);

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
  Nan::Export(ctx, "window_event_cast", wrap_window_event_cast);
  Nan::Export(ctx, "window_event_t_get_prop_window", wrap_window_event_t_get_prop_window);

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
  Nan::Export(ctx, "paint_event_cast", wrap_paint_event_cast);
  Nan::Export(ctx, "paint_event_t_get_prop_c", wrap_paint_event_t_get_prop_c);

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
  Nan::Export(ctx, "key_event_cast", wrap_key_event_cast);
  Nan::Export(ctx, "key_event_t_get_prop_key", wrap_key_event_t_get_prop_key);
  Nan::Export(ctx, "key_event_t_get_prop_alt", wrap_key_event_t_get_prop_alt);
  Nan::Export(ctx, "key_event_t_get_prop_lalt", wrap_key_event_t_get_prop_lalt);
  Nan::Export(ctx, "key_event_t_get_prop_ralt", wrap_key_event_t_get_prop_ralt);
  Nan::Export(ctx, "key_event_t_get_prop_ctrl", wrap_key_event_t_get_prop_ctrl);
  Nan::Export(ctx, "key_event_t_get_prop_lctrl", wrap_key_event_t_get_prop_lctrl);
  Nan::Export(ctx, "key_event_t_get_prop_rctrl", wrap_key_event_t_get_prop_rctrl);
  Nan::Export(ctx, "key_event_t_get_prop_shift", wrap_key_event_t_get_prop_shift);
  Nan::Export(ctx, "key_event_t_get_prop_lshift", wrap_key_event_t_get_prop_lshift);
  Nan::Export(ctx, "key_event_t_get_prop_rshift", wrap_key_event_t_get_prop_rshift);
  Nan::Export(ctx, "key_event_t_get_prop_cmd", wrap_key_event_t_get_prop_cmd);
  Nan::Export(ctx, "key_event_t_get_prop_menu", wrap_key_event_t_get_prop_menu);
  Nan::Export(ctx, "key_event_t_get_prop_capslock", wrap_key_event_t_get_prop_capslock);

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
  Nan::Export(ctx, "pointer_event_cast", wrap_pointer_event_cast);
  Nan::Export(ctx, "pointer_event_t_get_prop_x", wrap_pointer_event_t_get_prop_x);
  Nan::Export(ctx, "pointer_event_t_get_prop_y", wrap_pointer_event_t_get_prop_y);
  Nan::Export(ctx, "pointer_event_t_get_prop_button", wrap_pointer_event_t_get_prop_button);
  Nan::Export(ctx, "pointer_event_t_get_prop_pressed", wrap_pointer_event_t_get_prop_pressed);
  Nan::Export(ctx, "pointer_event_t_get_prop_alt", wrap_pointer_event_t_get_prop_alt);
  Nan::Export(ctx, "pointer_event_t_get_prop_ctrl", wrap_pointer_event_t_get_prop_ctrl);
  Nan::Export(ctx, "pointer_event_t_get_prop_cmd", wrap_pointer_event_t_get_prop_cmd);
  Nan::Export(ctx, "pointer_event_t_get_prop_menu", wrap_pointer_event_t_get_prop_menu);
  Nan::Export(ctx, "pointer_event_t_get_prop_shift", wrap_pointer_event_t_get_prop_shift);

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
  Nan::Export(ctx, "orientation_event_cast", wrap_orientation_event_cast);
  Nan::Export(ctx, "orientation_event_t_get_prop_orientation", wrap_orientation_event_t_get_prop_orientation);

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
  Nan::Export(ctx, "wheel_event_cast", wrap_wheel_event_cast);
  Nan::Export(ctx, "wheel_event_t_get_prop_dy", wrap_wheel_event_t_get_prop_dy);
  Nan::Export(ctx, "wheel_event_t_get_prop_alt", wrap_wheel_event_t_get_prop_alt);
  Nan::Export(ctx, "wheel_event_t_get_prop_ctrl", wrap_wheel_event_t_get_prop_ctrl);
  Nan::Export(ctx, "wheel_event_t_get_prop_shift", wrap_wheel_event_t_get_prop_shift);

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
  Nan::Export(ctx, "app_bar_create", wrap_app_bar_create);
  Nan::Export(ctx, "app_bar_cast", wrap_app_bar_cast);

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
  Nan::Export(ctx, "button_group_create", wrap_button_group_create);
  Nan::Export(ctx, "button_group_cast", wrap_button_group_cast);

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
  Nan::Export(ctx, "button_create", wrap_button_create);
  Nan::Export(ctx, "button_cast", wrap_button_cast);
  Nan::Export(ctx, "button_set_repeat", wrap_button_set_repeat);
  Nan::Export(ctx, "button_set_enable_long_press", wrap_button_set_enable_long_press);
  Nan::Export(ctx, "button_t_get_prop_repeat", wrap_button_t_get_prop_repeat);
  Nan::Export(ctx, "button_t_get_prop_enable_long_press", wrap_button_t_get_prop_enable_long_press);

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
  Nan::Export(ctx, "dragger_create", wrap_dragger_create);
  Nan::Export(ctx, "dragger_cast", wrap_dragger_cast);
  Nan::Export(ctx, "dragger_set_range", wrap_dragger_set_range);
  Nan::Export(ctx, "dragger_t_get_prop_x_min", wrap_dragger_t_get_prop_x_min);
  Nan::Export(ctx, "dragger_t_get_prop_y_min", wrap_dragger_t_get_prop_y_min);
  Nan::Export(ctx, "dragger_t_get_prop_x_max", wrap_dragger_t_get_prop_x_max);
  Nan::Export(ctx, "dragger_t_get_prop_y_max", wrap_dragger_t_get_prop_y_max);

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
  Nan::Export(ctx, "check_button_create", wrap_check_button_create);
  Nan::Export(ctx, "check_button_create_radio", wrap_check_button_create_radio);
  Nan::Export(ctx, "check_button_set_value", wrap_check_button_set_value);
  Nan::Export(ctx, "check_button_cast", wrap_check_button_cast);
  Nan::Export(ctx, "check_button_t_get_prop_value", wrap_check_button_t_get_prop_value);

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
  Nan::Export(ctx, "clip_view_create", wrap_clip_view_create);
  Nan::Export(ctx, "clip_view_cast", wrap_clip_view_cast);

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
  Nan::Export(ctx, "color_tile_create", wrap_color_tile_create);
  Nan::Export(ctx, "color_tile_cast", wrap_color_tile_cast);
  Nan::Export(ctx, "color_tile_set_bg_color", wrap_color_tile_set_bg_color);
  Nan::Export(ctx, "color_tile_t_get_prop_bg_color", wrap_color_tile_t_get_prop_bg_color);
  Nan::Export(ctx, "color_tile_t_get_prop_border_color", wrap_color_tile_t_get_prop_border_color);

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
  Nan::Export(ctx, "column_create", wrap_column_create);
  Nan::Export(ctx, "column_cast", wrap_column_cast);

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
  Nan::Export(ctx, "combo_box_item_create", wrap_combo_box_item_create);
  Nan::Export(ctx, "combo_box_item_cast", wrap_combo_box_item_cast);
  Nan::Export(ctx, "combo_box_item_set_checked", wrap_combo_box_item_set_checked);
  Nan::Export(ctx, "combo_box_item_set_value", wrap_combo_box_item_set_value);
  Nan::Export(ctx, "combo_box_item_t_get_prop_value", wrap_combo_box_item_t_get_prop_value);
  Nan::Export(ctx, "combo_box_item_t_get_prop_checked", wrap_combo_box_item_t_get_prop_checked);

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
  Nan::Export(ctx, "digit_clock_create", wrap_digit_clock_create);
  Nan::Export(ctx, "digit_clock_cast", wrap_digit_clock_cast);
  Nan::Export(ctx, "digit_clock_set_format", wrap_digit_clock_set_format);
  Nan::Export(ctx, "digit_clock_t_get_prop_format", wrap_digit_clock_t_get_prop_format);

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
  Nan::Export(ctx, "dialog_client_create", wrap_dialog_client_create);
  Nan::Export(ctx, "dialog_client_cast", wrap_dialog_client_cast);

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
  Nan::Export(ctx, "dialog_title_create", wrap_dialog_title_create);
  Nan::Export(ctx, "dialog_title_cast", wrap_dialog_title_cast);

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
  Nan::Export(ctx, "object_default_create", wrap_object_default_create);
  Nan::Export(ctx, "object_default_clear_props", wrap_object_default_clear_props);
  Nan::Export(ctx, "object_default_t_get_prop_props_size", wrap_object_default_t_get_prop_props_size);

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
  Nan::Export(ctx, "combo_box_create", wrap_combo_box_create);
  Nan::Export(ctx, "combo_box_cast", wrap_combo_box_cast);
  Nan::Export(ctx, "combo_box_set_open_window", wrap_combo_box_set_open_window);
  Nan::Export(ctx, "combo_box_reset_options", wrap_combo_box_reset_options);
  Nan::Export(ctx, "combo_box_count_options", wrap_combo_box_count_options);
  Nan::Export(ctx, "combo_box_set_selected_index", wrap_combo_box_set_selected_index);
  Nan::Export(ctx, "combo_box_set_localize_options", wrap_combo_box_set_localize_options);
  Nan::Export(ctx, "combo_box_set_value", wrap_combo_box_set_value);
  Nan::Export(ctx, "combo_box_set_item_height", wrap_combo_box_set_item_height);
  Nan::Export(ctx, "combo_box_append_option", wrap_combo_box_append_option);
  Nan::Export(ctx, "combo_box_set_options", wrap_combo_box_set_options);
  Nan::Export(ctx, "combo_box_get_value", wrap_combo_box_get_value);
  Nan::Export(ctx, "combo_box_get_text", wrap_combo_box_get_text);
  Nan::Export(ctx, "combo_box_t_get_prop_open_window", wrap_combo_box_t_get_prop_open_window);
  Nan::Export(ctx, "combo_box_t_get_prop_selected_index", wrap_combo_box_t_get_prop_selected_index);
  Nan::Export(ctx, "combo_box_t_get_prop_value", wrap_combo_box_t_get_prop_value);
  Nan::Export(ctx, "combo_box_t_get_prop_localize_options", wrap_combo_box_t_get_prop_localize_options);
  Nan::Export(ctx, "combo_box_t_get_prop_options", wrap_combo_box_t_get_prop_options);
  Nan::Export(ctx, "combo_box_t_get_prop_item_height", wrap_combo_box_t_get_prop_item_height);

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
  Nan::Export(ctx, "window_create", wrap_window_create);
  Nan::Export(ctx, "window_create_default", wrap_window_create_default);
  Nan::Export(ctx, "window_set_fullscreen", wrap_window_set_fullscreen);
  Nan::Export(ctx, "window_open", wrap_window_open);
  Nan::Export(ctx, "window_open_and_close", wrap_window_open_and_close);
  Nan::Export(ctx, "window_close", wrap_window_close);
  Nan::Export(ctx, "window_close_force", wrap_window_close_force);
  Nan::Export(ctx, "window_cast", wrap_window_cast);
  Nan::Export(ctx, "window_t_get_prop_fullscreen", wrap_window_t_get_prop_fullscreen);

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
  Nan::Export(ctx, "timer_info_cast", wrap_timer_info_cast);
  Nan::Export(ctx, "timer_info_t_get_prop_ctx", wrap_timer_info_t_get_prop_ctx);
  Nan::Export(ctx, "timer_info_t_get_prop_id", wrap_timer_info_t_get_prop_id);
  Nan::Export(ctx, "timer_info_t_get_prop_now", wrap_timer_info_t_get_prop_now);

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
  image_draw_type_t draw_type = (image_draw_type_t)jsvalue_get_int_value(ctx, argv[1]);
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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(obj->draw_type));
  argv.GetReturnValue().Set(jret);
  (void)argc;(void)ctx;
}

ret_t image_t_init(v8::Local<v8::Object> ctx) {
  Nan::Export(ctx, "image_create", wrap_image_create);
  Nan::Export(ctx, "image_set_draw_type", wrap_image_set_draw_type);
  Nan::Export(ctx, "image_cast", wrap_image_cast);
  Nan::Export(ctx, "image_t_get_prop_draw_type", wrap_image_t_get_prop_draw_type);

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
  Nan::Export(ctx, "gif_image_create", wrap_gif_image_create);
  Nan::Export(ctx, "gif_image_cast", wrap_gif_image_cast);

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
  Nan::Export(ctx, "keyboard_create", wrap_keyboard_create);
  Nan::Export(ctx, "keyboard_cast", wrap_keyboard_cast);

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
  Nan::Export(ctx, "popup_create", wrap_popup_create);
  Nan::Export(ctx, "popup_cast", wrap_popup_cast);
  Nan::Export(ctx, "popup_set_close_when_click", wrap_popup_set_close_when_click);
  Nan::Export(ctx, "popup_set_close_when_click_outside", wrap_popup_set_close_when_click_outside);
  Nan::Export(ctx, "popup_t_get_prop_close_when_click", wrap_popup_t_get_prop_close_when_click);
  Nan::Export(ctx, "popup_t_get_prop_close_when_click_outside", wrap_popup_t_get_prop_close_when_click_outside);

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
  Nan::Export(ctx, "calibration_win_cast", wrap_calibration_win_cast);

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
  Nan::Export(ctx, "object_array_create", wrap_object_array_create);
  Nan::Export(ctx, "object_array_clear_props", wrap_object_array_clear_props);
  Nan::Export(ctx, "object_array_t_get_prop_props_size", wrap_object_array_t_get_prop_props_size);

 return RET_OK;
}

ret_t mutable_image_t_init(v8::Local<v8::Object> ctx) {

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
  Nan::Export(ctx, "spin_box_create", wrap_spin_box_create);
  Nan::Export(ctx, "spin_box_cast", wrap_spin_box_cast);

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
  Nan::Export(ctx, "system_bar_create", wrap_system_bar_create);
  Nan::Export(ctx, "system_bar_cast", wrap_system_bar_cast);

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
  Nan::Export(ctx, "idle_info_cast", wrap_idle_info_cast);
  Nan::Export(ctx, "idle_info_t_get_prop_ctx", wrap_idle_info_t_get_prop_ctx);
  Nan::Export(ctx, "idle_info_t_get_prop_id", wrap_idle_info_t_get_prop_id);

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
  Nan::Export(ctx, "svg_image_create", wrap_svg_image_create);
  Nan::Export(ctx, "svg_image_set_image", wrap_svg_image_set_image);
  Nan::Export(ctx, "svg_image_cast", wrap_svg_image_cast);

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

  v8::Local<v8::Int32> jret= Nan::New((int32_t)(ret));
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
  Nan::Export(ctx, "dialog_create", wrap_dialog_create);
  Nan::Export(ctx, "dialog_create_simple", wrap_dialog_create_simple);
  Nan::Export(ctx, "dialog_cast", wrap_dialog_cast);
  Nan::Export(ctx, "dialog_get_title", wrap_dialog_get_title);
  Nan::Export(ctx, "dialog_get_client", wrap_dialog_get_client);
  Nan::Export(ctx, "dialog_open", wrap_dialog_open);
  Nan::Export(ctx, "dialog_set_title", wrap_dialog_set_title);
  Nan::Export(ctx, "dialog_modal", wrap_dialog_modal);
  Nan::Export(ctx, "dialog_quit", wrap_dialog_quit);
  Nan::Export(ctx, "dialog_is_quited", wrap_dialog_is_quited);
  Nan::Export(ctx, "dialog_is_modal", wrap_dialog_is_modal);
  Nan::Export(ctx, "dialog_toast", wrap_dialog_toast);
  Nan::Export(ctx, "dialog_info", wrap_dialog_info);
  Nan::Export(ctx, "dialog_warn", wrap_dialog_warn);
  Nan::Export(ctx, "dialog_confirm", wrap_dialog_confirm);
  Nan::Export(ctx, "dialog_t_get_prop_highlight", wrap_dialog_t_get_prop_highlight);

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
  Nan::Export(ctx, "combo_box_ex_create", wrap_combo_box_ex_create);

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
  color_component_t_init(ctx);
  time_clock_t_init(ctx);
  text_selector_t_init(ctx);
  switch_t_init(ctx);
  view_t_init(ctx);
  prop_change_event_t_init(ctx);
  progress_event_t_init(ctx);
  slide_view_t_init(ctx);
  slide_indicator_t_init(ctx);
  slide_menu_t_init(ctx);
  scroll_view_t_init(ctx);
  scroll_bar_t_init(ctx);
  list_view_t_init(ctx);
  tab_control_t_init(ctx);
  list_view_h_t_init(ctx);
  list_item_t_init(ctx);
  tab_button_t_init(ctx);
  tab_button_group_t_init(ctx);
  hscroll_label_t_init(ctx);
  rich_text_t_init(ctx);
  progress_circle_t_init(ctx);
  slider_t_init(ctx);
  mledit_t_init(ctx);
  line_number_t_init(ctx);
  row_t_init(ctx);
  progress_bar_t_init(ctx);
  pages_t_init(ctx);
  overlay_t_init(ctx);
  candidates_t_init(ctx);
  image_value_t_init(ctx);
  image_animation_t_init(ctx);
  guage_t_init(ctx);
  guage_pointer_t_init(ctx);
  label_t_init(ctx);
  file_chooser_t_init(ctx);
  file_browser_view_t_init(ctx);
  draggable_t_init(ctx);
  color_picker_t_init(ctx);
  canvas_widget_t_init(ctx);
  group_box_t_init(ctx);
  grid_t_init(ctx);
  window_manager_t_init(ctx);
  window_base_t_init(ctx);
  grid_item_t_init(ctx);
  style_mutable_t_init(ctx);
  edit_t_init(ctx);
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
  dragger_t_init(ctx);
  check_button_t_init(ctx);
  clip_view_t_init(ctx);
  color_tile_t_init(ctx);
  column_t_init(ctx);
  combo_box_item_t_init(ctx);
  digit_clock_t_init(ctx);
  dialog_client_t_init(ctx);
  dialog_title_t_init(ctx);
  object_default_t_init(ctx);
  combo_box_t_init(ctx);
  window_t_init(ctx);
  timer_info_t_init(ctx);
  image_t_init(ctx);
  gif_image_t_init(ctx);
  keyboard_t_init(ctx);
  popup_t_init(ctx);
  calibration_win_t_init(ctx);
  object_array_t_init(ctx);
  mutable_image_t_init(ctx);
  spin_box_t_init(ctx);
  system_bar_t_init(ctx);
  idle_info_t_init(ctx);
  svg_image_t_init(ctx);
  dialog_t_init(ctx);
  combo_box_ex_t_init(ctx);

  return RET_OK;
}


void Init(v8::Local<v8::Object> exports, v8::Local<v8::Value> module, void* priv) {
  v8::Local<v8::Object> global =  Nan::GetCurrentContext()->Global();

  Nan::Export(exports, "init", wrap_awtk_init);
  Nan::Export(exports, "step", wrap_awtk_main_loop_step);

  awtk_js_init(global);
}

NODE_MODULE(awtk, Init)
