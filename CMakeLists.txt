cmake_minimum_required(VERSION 3.23)
project(CPP)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(CPP
        include/add.h
        src/add.cpp
        src/main.cpp)
