cmake_minimum_required(VERSION 3.8)
project(taxer)
add_executable(taxer exercise20.cpp)
add_custom_target(run 
    COMMAND taxer
    DEPENDS taxer
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Executing taxer app")