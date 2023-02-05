cmake_minimum_required(VERSION 3.10)

set(This Example)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

set(Headers 
    temperature.h
)

set(Sources 
    main.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)

add_executable(main main.cpp)