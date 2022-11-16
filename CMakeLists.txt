cmake_minimum_required(VERSION 3.21)
project(wordGenerator C)

set(CMAKE_C_STANDARD 99)

add_executable(wordGenerator main.c struct.c struct.h dictionnaryGestion.c dictionnaryGestion.h "treeGestion .c" "treeGestion .h")
