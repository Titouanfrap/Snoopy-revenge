cmake_minimum_required(VERSION 3.26)
project(Snoopy_revenge C)

set(CMAKE_C_STANDARD 11)

add_executable(Snoopy_revenge
        main.c
        temps.c
        terrain.h
        menu.h
        balle.c
        balle.h
        Defaite.c
        snoopy.c
        snoopy.h
        terrain.c
        menu.c
        Defaite.h
        Victoire.c
        Victoire.h
)

