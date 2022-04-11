cmake_minimum_required(VERSION 3.21)
project(apollo_amory)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(apollo_amory
        main.cpp
        main.h)
