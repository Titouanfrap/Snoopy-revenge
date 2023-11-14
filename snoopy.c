#include "snoopy.h"
#include <stdio.h>
#include <unistd.h>
#include "FinNiveaux.h"


void deplacement(char tab[14][24], char *key, Snoopy *snoopy, int *compteur) {

    tab[snoopy->x][snoopy->y] = 0;

    switch (*key) {
        case 'z':
            if (snoopy->x > 2) {
                snoopy->x--;
            }
            break;
        case 'q':
            if (snoopy->y > 2) {
                snoopy->y--;
            }
            break;
        case 's':
            if (snoopy->x < 11) {
                snoopy->x++;
            }
            break;
        case 'd':
            if (snoopy->y < 21) {
                snoopy->y++;
            }
            break;
    }

    if (tab[snoopy->x][snoopy->y] == 11) {
        (*compteur)++;
    }

    tab[snoopy->x][snoopy->y] = 9;
}

