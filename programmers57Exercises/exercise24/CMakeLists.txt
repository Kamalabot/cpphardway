cmake_minimum_required(VERSION 3.8)
# project(helper)
# add_library(helper exercise24.cpp)
project(anagram)
add_executable(anagram exercise24main.cpp)
# target_link_directories(anagram PRIVATE ${CMAKE_SOURCE_DIR}/cmake-build)
# target_link_libraries(anagram helper)
add_custom_target(run 
    COMMAND anagram
    DEPENDS anagram
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Finding Anagram")