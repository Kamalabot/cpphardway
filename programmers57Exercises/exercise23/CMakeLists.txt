cmake_minimum_required(VERSION 3.8)
project(serv)
add_executable(serv exercise23.cpp)
target_compile_options(serv PRIVATE -O0 -Wall -g)
add_custom_target(run 
    COMMAND serv
    DEPENDS serv
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Running Service")