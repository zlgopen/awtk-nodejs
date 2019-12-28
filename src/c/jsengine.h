#ifndef JS_ENGINE_H
#define JS_ENGINE_H

#include "tkc/utils.h"
typedef void JSContext;
typedef v8::Local<v8::Value> jsvalue_t;

#define jsvalue_ref(ctx, v) v 
#define jsvalue_unref(ctx, v) 
#define jsvalue_free_str(ctx, v) TKMEM_FREE(v)
#define jsfunc_call(ctx, func, this_value, argc, argv) 

#define JSFUNC_DECL(func_name)                                                      \
static void func_name(const Nan::FunctionCallbackInfo<v8::Value>& argv) { 


static inline char* jsvalue_get_utf8_string(JSContext* ctx, jsvalue_t v) {
  Nan::Utf8String str(v->ToString());

  return tk_strdup(*str);
}

static inline void* jsvalue_get_pointer(JSContext* ctx, jsvalue_t v, const char* type) {
  return v->IntegerValue() + ((char*)NULL);
}

static inline int32_t jsvalue_get_int_value(JSContext* ctx, jsvalue_t v) {
  return v->Int32Value();
}

static inline double jsvalue_get_number_value(JSContext* ctx, jsvalue_t v) {
  return v->NumberValue();
}

static inline bool_t jsvalue_get_boolean_value(JSContext* ctx, jsvalue_t v) {
  return TRUE;
}

wchar_t *jsvalue_get_wstring(JSContext *ctx, jsvalue_t v) {
  uint32_t size = 0;
  wchar_t *wstr = NULL;
  char *str = (char *)jsvalue_get_utf8_string(ctx, v);
  return_value_if_fail(str != NULL, NULL);

  size = strlen(str);
  wstr = (wchar_t *)TKMEM_ALLOC(sizeof(wchar_t) * (size + 1));
  if (wstr != NULL) {
    tk_utf8_to_utf16(str, wstr, size + 1);
    wstr[size] = '\0';
  }
  jsvalue_free_str(ctx, str);

  return wstr;
}

#endif /*JS_ENGINE_H*/
