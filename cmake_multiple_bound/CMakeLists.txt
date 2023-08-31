cmake_minimum_required(VERSION 3.8)
project(cProject CXX)
set(CMAKE_CXX_STANDARD 14)



include_directories(test)
add_executable(cProject main.cpp)
add_subdirectory( test )
target_link_libraries(cProject test)

