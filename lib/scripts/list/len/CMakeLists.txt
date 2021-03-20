cmake_minimum_required(VERSION 3.17)
project(len)

set(CMAKE_CXX_STANDARD 20)

add_library(len SHARED library.cpp library.h)
add_executable(len_error len_error.h)
add_executable(library library.cpp)