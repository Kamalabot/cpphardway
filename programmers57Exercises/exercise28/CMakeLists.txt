cmake_minimum_required(VERSION 3.8)
project(repe)
add_executable(repe exercise28.cpp)
add_custom_target(run 
    COMMAND repe
    DEPENDS repe
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Working repetition")