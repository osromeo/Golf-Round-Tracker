cmake_minimum_required(VERSION 3.15)
project(M1OEP)

set(CMAKE_CXX_STANDARD 17)

add_executable(M1OEP main.cpp
        hole.h
        hole.cpp
        round.cpp
        round.h
        par3.h
        par4.h
        par5.h
        par3.cpp
        par4.cpp
        par5.cpp
        testingCases.cpp)