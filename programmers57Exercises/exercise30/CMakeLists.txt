cmake_minimum_required(VERSION 3.8)
project(mult)
add_executable(mult exercise30.cpp)
add_custom_target(run 
    COMMAND mult
    DEPENDS mult
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Multiplication table")