#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void tableau(char tab[14][24]) {
    for (int i = 0; i < 14; i++) {
        for (int j = 0; j < 24; j++) {
            if (i == 0 || i == 13 || j == 0 || j == 23) {
                tab[i][j] = 1;
            } else if (i == 1 || i == 12) {
                tab[i][j] = 2;
                tab[12][1] = 3;
                tab[12][22] = 4;
            } else if (j == 1 || j == 22) {
                tab[i][j] = 5;
                tab[1][1] = 6;
                tab[1][22] = 7;
            } else {
                tab[i][j] = 0;
            }
        } // fait apparaitre toutes les cases or plateau pour le défilement du temps
         // c'est un set de départ et ne s'éxecute qu'une seule fois
    }
}

typedef struct Time{
    int valeur;
    int x; int directx;
    int y; int directy;
} Time;


void timed(char tab[14][24], Time *t){
    tab[t->x][t->y]= 8;

    t->x +=t->directx;
    t->y +=t->directy;

    if (t->x==0 && t->y==0){
        t->directx=0;
        t->directy=1;
    }else if (t->x==0 && t->y==23){
        t->directx=1;
        t->directy=0;
    }else if (t->x==13 && t->y==23){
        t->directx=0;
        t->directy=-1;
    }else if (t->x==13&& t->y==0){
        t->directx=-1;
        t->directy=0;
    }
}