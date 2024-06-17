cmake_minimum_required(VERSION 3.8)
project(magicball)
add_executable(magicball exercise33.cpp)
add_custom_target(run 
    COMMAND magicball
    DEPENDS magicball
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Magic Ball 8")