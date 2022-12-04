cmake_minimum_required(VERSION 3.21 FATAL_ERROR)
project(10queue)

set(CMAKE_CXX_STANDARD 17)

add_executable(10queue Queue.h testqueue.cpp)