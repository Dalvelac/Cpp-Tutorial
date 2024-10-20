cmake_minimum_required(VERSION 3.29)

project(Testing_stuff)

set(CMAKE_CXX_STANDARD 20)

add_executable(Testing_stuff typedef.cpp
        namespaces.cpp
        conversion_de_tipos.cpp
        operadores_aritmeticos.cpp
        input_de_usuario.cpp
        statements_"if".cpp
        funciones_matematicas.cpp
        solucion.cpp)
