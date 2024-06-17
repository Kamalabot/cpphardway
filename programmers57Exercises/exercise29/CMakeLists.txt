cmake_minimum_required(VERSION 3.8)
project(doubler)
add_executable(doubler exercise29.cpp)
add_custom_target(run 
    COMMAND doubler
    DEPENDS doubler
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Execute doubler")