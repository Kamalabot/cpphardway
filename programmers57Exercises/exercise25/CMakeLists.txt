cmake_minimum_required(VERSION 3.8)
project(GTestProject)
enable_testing()
set(CMAKE_CXX_STANDARD 14)
# include(FetchContent)
# FetchContent_Declare(
   # googletest 
   # URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip 
# )
# set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
# FetchContent_MakeAvailable(googletest)
add_subdirectory(googletest)
include_directories(googletest/googletest/include)
include_directories(include)
add_library(utils utils.cpp)
add_executable(passchek exercise25.cpp)
# target_link_directories(passchek PRIVATE ${CMAKE_SOURCE_DIR}/cmake-build)
target_link_libraries(passchek utils)
add_custom_target(run 
    COMMAND passchek
    DEPENDS passchek
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Run passchek")
add_executable(pass_tester pass_tester.cpp)
target_link_libraries(pass_tester utils gtest gtest_main)
add_test(NAME AddTest COMMAND pass_tester)
add_custom_target(run_tests 
    COMMAND ${CMAKE_CTEST_COMMAND} --output-on-failure 
    DEPENDS pass_tester
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Running All Tests")