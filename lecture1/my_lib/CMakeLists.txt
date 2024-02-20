cmake_minimum_required(VERSION 3.1)
project(my_library)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(.)

add_library(tools tools.cpp)
add_executable(main main.cpp)
target_link_libraries(main tools)