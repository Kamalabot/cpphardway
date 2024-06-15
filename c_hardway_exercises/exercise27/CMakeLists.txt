cmake_minimum_required(VERSION 3.8)
project(safecopy)
add_executable(safecopy exercise27.c)
target_compile_options(safecopy PRIVATE -O0 -Wall -g)
add_custom_target(run 
    COMMAND safecopy
    DEPENDS safecopy
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Executing safecopy")