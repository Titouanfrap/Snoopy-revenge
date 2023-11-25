#include "terrain.h"

void mouvballe(char tab[14][24], Balle *balle) {
    tab[balle->x][balle->y] = 0;
    balle->x += balle->dx;
    balle->y += balle->dy;
    if (balle->x < 3 || balle->x > 10) {
        balle->dx = -balle->dx;
    }
    if (balle->y < 3 || balle->y >= 21) {
        balle->dy = -balle->dy;
    }

        tab[balle->x][balle->y] = 10;


}