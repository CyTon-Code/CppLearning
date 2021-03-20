cmake_minimum_required(VERSION 3.17)
project(Cpp_Learning)

set(CMAKE_CXX_STANDARD 20)

add_executable(CppLearning main.cpp)
add_executable(CMakeLists CMakeLists.txt)
add_executable(README README.md)
add_executable(main main.cpp)




add_executable(data_in data_in.txt)
add_executable(data_out data_out.txt)
add_executable(main_1 main_1.cpp)
add_executable(len_error lib/scripts/list/len/len_error.h)