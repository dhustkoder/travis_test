cmake_minimum_required(VERSION 2.6)
project(PROJ)
#:set(CMAKE_CXX_COMPILER "$COMPILER")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED on)

message(status "using compiler: ${CMAKE_CXX_COMPILER}")
add_executable(${PROJECT_NAME} src/test.cpp)







