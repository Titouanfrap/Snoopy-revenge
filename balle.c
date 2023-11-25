#include "terrain.h"


void mouvballe(char tab[14][24], Balle *balle, char *tempo) {

    tab[balle->x][balle->y] = 0;
    if (*tempo != 0) {
        tab[balle->x][balle->y] = *tempo;
    }

    balle->x += balle->dx;
    balle->y += balle->dy;
    if (balle->x < 3 || balle->x > 10) {
        balle->dx = -balle->dx;
    }
    if (balle->y < 3 || balle->y >= 21) {
        balle->dy = -balle->dy;
    }
<<<<<<< HEAD

    *tempo = tab[balle->x][balle->y];

    tab[balle->x][balle->y] = 10;
}




=======

        tab[balle->x][balle->y] = 10;


}
>>>>>>> ac2d50d4d3434fe0e5b5a29391fe78c4cf8783d1
