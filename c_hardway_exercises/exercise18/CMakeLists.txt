cmake_minimum_required(VERSION 3.8)
project(exercise18)
add_executable(exercise18 exercise18.c)
target_compile_options(exercise18 PRIVATE -O3 -Wall -g)