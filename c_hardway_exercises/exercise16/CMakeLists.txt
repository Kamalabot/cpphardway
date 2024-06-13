cmake_minimum_required(VERSION 3.8)
project(exercise16)
add_executable(exercise16 exercise16.c)
target_compile_options(exercise16 PRIVATE -O3 -Wall -g)