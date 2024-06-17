cmake_minimum_required(VERSION 3.8)
project(apr)
set(CMAKE_CXX_STANDARD 14)
add_library(utils utils.cpp)
add_executable(apr exercise26.cpp)
target_link_libraries(apr utils)
add_custom_target(run 
    COMMAND apr
    DEPENDS apr
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Get APR payment")