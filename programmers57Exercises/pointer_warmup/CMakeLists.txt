cmake_minimum_required(VERSION 3.8)
project(warmup)
add_executable(warmup pointer_warmup.cpp)
add_custom_target(run
    COMMAND warmup
    DEPENDS warmup
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR})