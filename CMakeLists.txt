cmake_minimum_required(VERSION 3.18 FATAL_ERROR)
project(test)

add_executable(test  "test.cpp")
target_compile_features(test PRIVATE cxx_std_17)
