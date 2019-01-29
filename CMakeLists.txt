cmake_minimum_required(VERSION 3.13)
project(geometry)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        geometry
        main.cpp
        2d/point.h
        util.h
        geometry2.h
        2d/vector.h
)
