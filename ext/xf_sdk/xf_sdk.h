#ifndef XF_SDK_H
#define XF_SDK_H 1

#include "ruby.h"

VALUE tts(VALUE mod, VALUE text, VALUE dest_path, VALUE params);
VALUE is_success(VALUE mod, VALUE code);

#endif /* XF_SDK_H */
