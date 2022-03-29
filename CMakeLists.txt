cmake_minimum_required(VERSION 3.21)
project(lua_test C)

set(CMAKE_C_STANDARD 99)

file(GLOB SRC_FILE src/*.[hc])
add_executable(lua_test main.c ${SRC_FILE})
