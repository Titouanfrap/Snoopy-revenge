cmake_minimum_required(VERSION 3.26)
project(Snoopy_revenge C)

set(CMAKE_C_STANDARD 11)

add_executable(Snoopy_revenge
        main.c
        Menu.h
        temps.h
        terrain.h
        balle.h
        temps.c
        Terrain.c
        balle.c
)

