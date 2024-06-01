cmake_minimum_required(VERSION 3.10)
project(wasm_module)

add_executable(wasm_module src/add.cpp) 


# 设置编译器为Emscripten的emcc  
# set(CMAKE_CXX_COMPILER emcc)  
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s WASM=1 -s STANDALONE_WASM -O3")  
# Here you can add -s flag during compiling object files
# add_definitions("-s EXPORTED_RUNTIME_METHODS='[\"ccall\",\"cwrap\"]'")
# add_definitions("-s EXTRA_EXPORTED_RUNTIME_METHODS='[\"ccall\",\"cwrap\"]'")
# add_definitions("-s EXPORTED_FUNCTIONS='[\"_free\"]'")
# Here you can add -s flag during linking
# set_target_properties(wasm_module PROPERTIES LINK_FLAGS "-s EXTRA_EXPORTED_RUNTIME_METHODS=['ccall','cwrap','stringToNewUTF8']")
set_target_properties(wasm_module PROPERTIES LINK_FLAGS "-s EXPORTED_RUNTIME_METHODS=['stringToNewUTF8'] -s EXPORTED_FUNCTIONS=['_malloc','_free']")
# Set this if you want to to generate sample html file
# set(CMAKE_EXECUTABLE_SUFFIX ".html")
  


# 添加可执行文件
# add_executable(wasm_module add.cpp) 
