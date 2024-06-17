cmake_minimum_required(VERSION 3.8)
project(guess)
add_executable(guess exercise32.cpp)
add_custom_target(run 
    COMMAND guess
    DEPENDS guess
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Guessing Game")