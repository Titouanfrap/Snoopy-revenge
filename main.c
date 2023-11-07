#include <stdio.h>
#include "menu.h"
#include "temps.h"
#include "terrain.h"
#define snoopy 0x850E8 //9                                       //raccourcit avec le code hexa associé a Snoopy

Time t = {120, 0, 0, 10, 1};                                           // raccourcit vers la structure du timer

int main() {
    int x=7, y=10;
    char key;
    char matrice[14][24];

    tableau(matrice);

    while (1){
        terrain(matrice);
        timed(matrice, &t);

        if (kbhit()){                                      //permet de lancer la boucle ssi une touche est pressée
            matrice[x][y]=0;                                     // l'ancienne place de Snoopy va etre remplacé par du void, on l'efface
            printf("touche presse");
            key = getch();                                    // la touche pressée est récupérée et assignée a key
            deplacement(&key, &x, &y);                                       // voir programme déplacement

            matrice[x][y] = 9;                                   // place Snoopy sur sa nouvelle place renvoyée par de SP déplacement
        }

        usleep(1570000);                                        // on attend 1,57 sec , produit en croix avec le nombre de cases pour avoir 2 minutes

        system("cls");                                      //clear de l'écran pour préparer l'affichage de la matrice actualisée
    }

}