cmake_minimum_required(VERSION 3.8)
project(duffdevice)
add_executable(duffdevice exercise22.c)
target_compile_options(gdbtest PRIVATE -g -Wall -O0)
add_custom_target(run
    COMMAND gdbtest
    DEPENDS gdbtest
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Executing Executable")