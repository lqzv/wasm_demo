cmake_minimum_required(VERSION 3.10)
project(wasm_module)

add_executable(wasm_module src/add.cpp) 

set_target_properties(wasm_module PROPERTIES LINK_FLAGS "-s EXPORTED_RUNTIME_METHODS=['stringToNewUTF8'] -s EXPORTED_FUNCTIONS=['_malloc','_free']")
