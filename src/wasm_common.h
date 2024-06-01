
#ifndef __WASM_COMMON_H_
#define __WASM_COMMON_H_

#ifndef EM_PORT_API
#  if defined(__EMSCRIPTEN__)
#    include <emscripten.h>
#    if defined(__cplusplus)
#      define EM_PORT_API extern "C"  EMSCRIPTEN_KEEPALIVE
#    else
#      define EM_PORT_API EMSCRIPTEN_KEEPALIVE
#    endif
#  else
#    if defined(_cplusplus)
#      define EM_PORT_API extern "C" 
#    else
#      define EM_PORT_API 
#    endif
#  endif
#endif

#endif