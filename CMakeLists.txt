cmake_minimum_required(VERSION 3.10)

project(Myproject)
include_directories(include)

file(GLOB Source src/*.cpp)

add_executable(Main Main.cpp ${Source})