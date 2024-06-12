cmake_minimum_required(VERSION 3.8)
project(exercise8)
add_executable(exercise8 exercise8.c)
target_compile_options(exercise8 PRIVATE -O3 -Wall -g)