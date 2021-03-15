cmake_minimum_required(VERSION 3.17)
project(Cpp_Learning)

set(CMAKE_CXX_STANDARD 20)

add_executable(CppLearning main.cpp)
add_executable(CMakeLists CMakeLists.txt)
add_executable(README README.md)
add_executable(main main.cpp)

add_executable(plugin plugin.h)
add_executable(sort_1 lib/scripts/list/sort/sort_1.h)
add_executable(echo lib/scripts/echo/echo.h)
add_executable(search lib/scripts/list/search/search.h)
