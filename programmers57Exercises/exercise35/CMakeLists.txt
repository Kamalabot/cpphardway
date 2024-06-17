cmake_minimum_required(VERSION 3.8)
project(picker)
add_executable(picker exercise35.cpp)
add_custom_target(run 
    COMMAND picker
    DEPENDS picker
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Picker Packer")