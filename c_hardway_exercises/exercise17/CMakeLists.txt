cmake_minimum_required(VERSION 3.8)
project(exercise17)
add_executable(exercise17 exercise17.c)
target_compile_options(exercise17 PRIVATE -O3 -Wall -g)