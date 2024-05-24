# cmake_minimum_required(VERSION 3.29.3)
# project(adder)
# add_library(adlib adder.cpp)

cmake_minimum_required(VERSION 3.29.3)
project(useadder)
add_executable(useadder useadder.cpp)
target_link_directories(useadder PRIVATE ${CMAKE_SOURCE_DIR}/cmake-build)
target_link_libraries(useadder adlib)