cmake_minimum_required(VERSION 3.8)
project(cTest CXX)
set(CMAKE_CXX_STANDARD 14)

set(SOURCE_LIB testing.cpp)
add_library(test STATIC ${SOURCE_LIB})