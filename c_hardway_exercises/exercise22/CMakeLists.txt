cmake_minimum_required(VERSION 3.8)
project(duffdevice)
add_executable(duffdevice exercise22.c)
target_compile_options(duffdevice PRIVATE -g -Wall -O3)
add_custom_target(run
    COMMAND duffdevice 
    DEPENDS duffdevice 
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Executing duffdevice")