cmake_minimum_required(VERSION 3.8)
project(employee)
add_executable(employee exercise34.cpp)
add_custom_target(run 
    COMMAND employee 
    DEPENDS employee
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Employee DB")