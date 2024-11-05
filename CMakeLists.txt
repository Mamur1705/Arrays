cmake_minimum_required(VERSION 3.27)
project(Arrays)

set(CMAKE_CXX_STANDARD 14)

add_executable(Arrays
        main.cpp
        probrem.cpp
        cmake-build-debug/problem1.cpp
        problem2.cpp
        problem4.cpp
        problem7.cpp)
add_executable(problem probrem.cpp)
add_executable(problem1 cmake-build-debug/problem1.cpp)
add_executable(problem2 problem2.cpp)
add_executable(problem4 problem4.cpp)
add_executable(problem7 problem7.cpp)
