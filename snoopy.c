#include "snoopy.h"
#include <stdio.h>
#include <unistd.h>
#include "Victoire.h"


void deplacement(char tab[14][24], char *key, Snoopy *snoopy) {//On modifie les valeurs de x et y en fonction de la touche recue, les valeurs sont ensuites renvoyées dans le main
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

    tab[snoopy->x][snoopy->y] = 9;


}

