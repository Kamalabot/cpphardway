cmake_minimum_required(VERSION 3.8)
project(vararg)
add_executable(vararg exercise24.c)
target_compile_options(vararg PRIVATE -g -Wall -O0)
add_custom_target(run
    COMMAND vararg 
    DEPENDS vararg 
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Executing vararg")