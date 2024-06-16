cmake_minimum_required(VERSION 3.8)
project(utils)
add_library(utils utils.cpp)
project(passchek)
add_executable(passchek exercise25.cpp)
target_link_directories(passchek PRIVATE ${CMAKE_SOURCE_DIR}/cmake-build)
target_link_libraries(passchek utils)
add_custom_target(run 
    COMMAND passchek
    DEPENDS passchek
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Run passchek")