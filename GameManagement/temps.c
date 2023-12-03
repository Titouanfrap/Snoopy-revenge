#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct Time{ // on crée une structure de temps qui contient :
    int valeur;
    int x; int directx; // la position et la direction que prend le temps
    int y; int directy;
} Time;
//chaque fois que le temps atteint un bloc il le transforme en bloc temps passé

void timed(char tab[14][24], Time *t) {//la fonction qui affiche le temps graphique
    tab[t->x][t->y] = 8; //on place le bloc de depart de défilement du temps au milieu en haut
    t->x += t->directx; // on définit les directions de base
    t->y += t->directy;

    if (t->x == 0 && t->y == 0) { // si le temps atteint ce point il va vers la droite
        t->directx = 0;
        t->directy = 1;
    } else if (t->x == 0 && t->y == 23) { //si le temps atteint ce point il va vers le bas
        t->directx = 1;
        t->directy = 0;
    } else if (t->x == 13 && t->y == 23) { // si le temps atteint ce point il va vers la gauche
        t->directx = 0;
        t->directy = -1;
    } else if (t->x == 13 && t->y == 0) {// si le temps atteint ce point il va vers le haut
        t->directx = -1;
        t->directy = 0;
    }
}

