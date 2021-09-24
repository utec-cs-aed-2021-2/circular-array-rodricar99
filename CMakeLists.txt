cmake_minimum_required(VERSION 3.19)
project(circular_array_rodricar99)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(circular_array_rodricar99
        circulararray.h
        main.cpp
        queue.h
        stack.h
        tester.h)
