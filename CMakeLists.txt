cmake_minimum_required(VERSION 3.29)
project(lofs)

set(CMAKE_CXX_STANDARD 20)

add_executable(lofs main.cpp param.h lofs.h
        bitmap.h
)

add_executable(test test.cpp)
