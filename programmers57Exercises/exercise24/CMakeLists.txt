cmake_minimum_required(VERSION 3.8)
project(anagram)
add_executable(anagram exercise24.cpp)
add_custom_target(run 
    COMMAND anagram
    DEPENDS anagram
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Finding Anagram")