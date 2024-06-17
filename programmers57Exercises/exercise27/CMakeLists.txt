cmake_minimum_required(VERSION 3.8)
project(validator)
add_executable(validator exercise27.cpp)
add_custom_target(run 
    COMMAND validator
    DEPENDS validator
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Running Validator")