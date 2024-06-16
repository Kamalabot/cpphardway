cmake_minimum_required(VERSION 3.8)
project(months)
add_executable(months exercise21.cpp)
target_compile_options(months PRIVATE -Wall -O0 -g)
add_custom_target(run 
    COMMAND months
    DEPENDS months
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Executing Months")