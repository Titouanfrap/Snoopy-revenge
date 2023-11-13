#include "snoopy.h"
#include <stdio.h>
#include <unistd.h>
#include "Victoire.h"


void deplacement(char tab[14][24], char *key, Snoopy *snoopy) {
    static int compteur = 0;

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
        compteur++;
    }
    if (compteur == 4) {
        sleep(2);
        victoire();
        sleep(5);
    }


    tab[snoopy->x][snoopy->y] = 9;
}

