cmake_minimum_required(VERSION 3.8)
project(exercise12)
add_executable(exercise12 exercise12.c)
target_compile_options(exercise12 PRIVATE -O3 -Wall -g)