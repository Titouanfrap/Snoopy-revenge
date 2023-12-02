cmake_minimum_required(VERSION 3.26)
project(Snoopy_revenge C)

set(CMAKE_C_STANDARD 11)

add_executable(Snoopy_revenge
        main.c
        GameManagement/temps.c
        GameManagement/terrain.h
        menu.h
        GameManagement/balle.c
        GameManagement/balle.h
        GameManagement/snoopy.c
        GameManagement/snoopy.h
        GameManagement/terrain.c
        menu.c
        LevelManagement/FinNiveaux.c
        LevelManagement/FinNiveaux.h
        LevelManagement/Niveaux.c
        LevelManagement/Niveaux.h
        Sauvegarde.c
        Sauvegarde.h
        Sauvegarde.h
)

