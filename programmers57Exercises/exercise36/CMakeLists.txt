cmake_minimum_required(VERSION 3.8)
project(stddev)
add_executable(stddev exercise36.cpp)
add_custom_target(run 
    COMMAND stddev 
    DEPENDS stddev
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Get StdDev")