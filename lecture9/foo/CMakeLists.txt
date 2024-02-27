cmake_minimum_required(VERSION 3.1)
project(my_library)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)

include_directories(.)
add_executable(main src/main.cpp)