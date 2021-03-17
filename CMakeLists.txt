cmake_minimum_required(VERSION 3.17)
project(Cpp_Learning)

set(CMAKE_CXX_STANDARD 20)

add_executable(CppLearning main.cpp)
add_executable(CMakeLists CMakeLists.txt)
add_executable(README README.md)
add_executable(main main.cpp)



add_executable(2 temp/2.h)
add_executable(List lib/scripts/list/List.h)
add_executable(len lib/scripts/list/len/len.h)
add_executable(3 temp/3.h)
add_executable(python lib/syntax/python.h)
add_executable(e lib/syntax/python/e.h)