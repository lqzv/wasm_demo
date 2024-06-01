// #include <emscripten/emscripten.h>
#include "wasm_common.h"
#include "add.h"
#include <iostream>
#include <string>
// #include <stdio.h>

EM_PORT_API int add(int a, int b)
{
  return d(a, b);
}

EM_PORT_API void greeting(char *name)
{
  std::cout << name << std::endl;
  //   printf("Hello, %s\n", name);
}

// 向js传递字符串
EM_PORT_API const char *get_string()
{
  std::string str = "Hello, wolrd! 你好，世界！";
  char *result = new char[str.length() + 1];
  std::strcpy(result, str.c_str());
  return result;
}

EM_PORT_API void free_string(const char *str)
{
  delete[] str;
}

// extern "C" {
//     EMSCRIPTEN_KEEPALIVE
//     int add(int a, int b) {
//         return d(a, b);
//     }
// }