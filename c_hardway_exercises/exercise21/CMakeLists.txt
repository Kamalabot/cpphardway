# cmake_minimum_required(VERSION 3.8)
# project(exercise21)
# add_library(exercise21 exercise21.c)

cmake_minimum_required(VERSION 3.8)
project(main21)
add_executable(main21 exercise21main.c)
target_link_directories(main21 PRIVATE ${CMAKE_SOURCE_DIR}/cmake-build)
target_link_libraries(main21 exercise21)