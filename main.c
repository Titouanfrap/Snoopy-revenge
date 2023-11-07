#include <stdio.h>
#include "menu.h"
#include "temps.h"
#include "terrain.h"
#define snoopy 0x850E8 //9

Time t = {120, 0, 0, 10, 1};

int main() {
    int x, y;
    char key;
    char matrice[14][24];

    tableau(matrice);

    while (1){
        terrain(matrice);
        timed(matrice, &t);

        if (kbhit()){//récupération de la touche
            printf("touche presse");
            key = getch();
            deplacement(&key, &x, &y);
            matrice[x][y]=' ';
            matrice[x][y] = 9;
        }
//regler le point de départ et effacer les précédant snoopy derriere

        usleep(1000000);

        system("cls");
    }

}