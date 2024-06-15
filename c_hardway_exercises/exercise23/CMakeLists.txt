cmake_minimum_required(VERSION 3.8)
project(fileio)
add_executable(fileio exercise23.c)
target_compile_options(fileio PRIVATE -g -Wall -O0)
add_custom_target(run
    COMMAND fileio 
    DEPENDS fileio 
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Executing fileio")