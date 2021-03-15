cmake_minimum_required(VERSION 3.17)
project(Cpp_Learning)

set(CMAKE_CXX_STANDARD 20)

add_executable(CppLearning main.cpp)
add_executable(CMakeLists CMakeLists.txt)
add_executable(README README.md)
add_executable(main main.cpp)

add_executable(plugin plugin.h)