cmake_minimum_required(VERSION 3.2)
project(Subuntu)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    src/Installer.c
    src/Login.c
    src/Login.h
    src/Terminal.c
    src/Terminal.h)

add_executable(Subuntu ${SOURCE_FILES})