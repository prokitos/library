cmake_minimum_required(VERSION 3.5)
project(cProject VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(cProject main.cpp)
add_executable(tests testing.cpp)
add_test(fTest tests)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
