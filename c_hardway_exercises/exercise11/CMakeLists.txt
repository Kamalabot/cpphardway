cmake_minimum_required(VERSION 3.8)
project(exercise11)
add_executable(exercise11 exercise11.c)
target_compile_options(exercise11 PRIVATE -O3 -Wall -g)