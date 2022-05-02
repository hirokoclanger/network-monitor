# minimum require version
cmake_minimum_required(VERSION 3.17 FATAL_ERROR)
# project name
project(network-monitor)
# set the source folder from where to pull the source code
set(SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp")
# where to store the executable
add_executable(network-monitor ${SOURCES})
# target cmake - same folder, version of c++ to use
target_compile_features(network-monitor
    PRIVATE
    cxx_std_11
)
