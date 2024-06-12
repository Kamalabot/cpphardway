cmake_minimum_required(VERSION 3.8)
project(exercise9)
add_executable(exercise9 exercise9.c)
target_compile_options(exercise9 PRIVATE -O3 -Wall -g)