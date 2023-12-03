#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct Time{
    int valeur;
    int x; int directx;
    int y; int directy;
} Time;


void timed(char tab[14][24], Time *t) {
    tab[t->x][t->y] = 8;
    t->x += t->directx;
    t->y += t->directy;

    if (t->x == 0 && t->y == 0) {
        t->directx = 0;
        t->directy = 1;
    } else if (t->x == 0 && t->y == 23) {
        t->directx = 1;
        t->directy = 0;
    } else if (t->x == 13 && t->y == 23) {
        t->directx = 0;
            t->directy = -1;
    } else if (t->x == 13 && t->y == 0) {
        t->directx = -1;
        t->directy = 0;
    }
}

