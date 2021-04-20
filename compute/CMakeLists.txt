cmake_minimum_required(VERSION 3.16)
project(FastFileSystem)

set(CMAKE_CXX_STANDARD 20)

add_executable(FastFileSystem main.cpp os/fast/include/compute_util.h)