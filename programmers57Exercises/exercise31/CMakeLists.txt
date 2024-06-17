cmake_minimum_required(VERSION 3.8)
project(karvonen)
add_executable(karvonen exercise31.cpp)
add_custom_target(run 
    COMMAND karvonen 
    DEPENDS karvonen 
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Karvonen Rates")