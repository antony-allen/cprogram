cmake_minimum_required(VERSION 3.31)
project(cprogram C)

set(CMAKE_C_STANDARD 99)

add_executable(cprogram main.c extern.c
        add.h
        add.c
        test.c
        game.c
        game.h)
