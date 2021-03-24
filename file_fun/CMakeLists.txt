cmake_minimum_required(VERSION 3.17)
project(file_fun)

set(CMAKE_CXX_STANDARD 20)

add_executable(file_fun main.cpp)
add_executable(main main.cpp)
add_executable(CMakeLists CMakeLists.txt)



add_executable(file_write libs/file_write.h)
add_executable(check_file_open libs/check_file_open.h)
#add_executable(fstream /usr/include/c++/10.2.0/fstream)
add_executable(library libs/library.h)
add_executable(in cmake-build-debug/in.txt)
add_executable(error_classes libs/error_classes.h)
add_executable(file_clear libs/file_clear.h)
add_executable(file_edit libs/file_edit.h)

add_executable(file_read libs/file_read.h)

add_executable(file_read_n libs/file_read_n.h)
add_executable(file libs/file.h)