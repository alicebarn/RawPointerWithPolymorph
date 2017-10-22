cmake_minimum_required(VERSION 3.8)
project(RawPointerWithPolymorph)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Human.h Parent.cpp Parent.h Child.cpp Child.h)
add_executable(RawPointerWithPolymorph ${SOURCE_FILES})