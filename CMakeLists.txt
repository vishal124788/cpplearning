cmake_minimum_required(VERSION 3.10)
project(hello Version 1.0.0)

add_subdirectory(src)



message(STATUS "I am a Message")


add_executable(hello main.cpp)lio