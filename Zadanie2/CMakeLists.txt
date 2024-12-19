cmake_minimum_required(VERSION 3.10)
project(sum)

include_directories(z2)

add_library(sum STATIC sum.cpp)
add_executable(z2 main.cpp)
target_link_libraries(z2 sum)
