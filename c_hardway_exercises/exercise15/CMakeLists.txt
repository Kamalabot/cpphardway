cmake_minimum_required(VERSION 3.8)
project(exercise15)
add_executable(exercise15 exercise15.c)
target_compile_options(exercise15 PRIVATE -O3 -Wall -g)