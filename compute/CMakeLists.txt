cmake_minimum_required(VERSION 3.16)
project(compute_module)

set(CMAKE_CXX_STANDARD 20)

add_executable(FastFileSystem main.cpp src/data_compute/include/compute_util.h src/data_compute/include/data_transfer.h src/data_compute/include/data_struct.h src/data_compute/compute_module.cpp src/data_compute/include/compute_constant.h)