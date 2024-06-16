cmake_minimum_required(VERSION 3.8)
project(comp)
add_executable(comp exercise22.cpp)
target_compile_options(comp PRIVATE -Wall -O0 -g)
add_custom_target(run 
    COMMAND comp
    DEPENDS comp
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Executing Comp")