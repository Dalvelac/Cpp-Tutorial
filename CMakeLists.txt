cmake_minimum_required(VERSION 3.29)

project(Testing_stuff)

set(CMAKE_CXX_STANDARD 20)

add_executable(Testing_stuff typedef.cpp
        arithmetic_operators.cpp
        namespaces.cpp)

# utilizar compiladores de c++ 20 para poder compilar los codigos, dado a que hay varios mains!
# https://www.programiz.com/cpp-programming/online-compiler/