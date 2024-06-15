cmake_minimum_required(VERSION 3.8)
project(bmi)
add_executable(bmi exercise19.cpp)
add_custom_target(run 
    COMMAND bmi
    DEPENDS bmi
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Executing BMI app")