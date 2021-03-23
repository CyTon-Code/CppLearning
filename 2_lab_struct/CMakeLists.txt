cmake_minimum_required(VERSION 3.17)
project(2_lab_struct)

set(CMAKE_CXX_STANDARD 20)

add_executable(2_lab_struct main.cpp)
add_executable(main main.cpp)



add_executable(file_in data/file_in.txt)
add_executable(file_out data/file_out.txt)