cmake_minimum_required(VERSION 3.8)
project(exercise3)
add_executable(exercise3 exercise3.c)
target_compile_options(exercise3 PRIVATE -O3 -Wall -g)