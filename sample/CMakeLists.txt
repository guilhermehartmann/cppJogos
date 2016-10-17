cmake_minimum_required(VERSION 3.6)
project(sample)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES test/main.cpp src/Console.cpp src/Console.h test/STDConsole.cpp test/STDConsole.h)
add_executable(sample ${SOURCE_FILES})