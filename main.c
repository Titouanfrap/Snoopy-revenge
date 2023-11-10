#include <stdio.h>
#include "menu.h"
#include "temps.h"
#include "terrain.h"
#define player 0x850E8 //9                   //raccourcit avec le code hexa associé a Snoopy

Time t = {120, 0, 0, 10, 1}; // raccourcit vers la structure du timer
Balle balle = {5,5,1,1};
Snoopy snoopy = {3, 3};

int main() {

    int dix=0;
    char key;
    char matrice[14][24];

    tableau(matrice, &balle, &snoopy);
    while (1){
        terrain(matrice);
        if (dix>=9){
            timed(matrice, &t);
            dix=0;
        }
        else {
            dix++;
        }
        if (kbhit()){             //permet de lancer la boucle ssi une touche est pressée
            key = getch();             // la touche pressée est récupérée et assignée a key
            deplacement(matrice, &key, &snoopy);                   // voir programme déplacement
        }

        mouvballe(matrice, &balle);
        if (balle.x == snoopy.x && balle.y == snoopy.y) {
            sleep(2);
            break;
        }
        usleep(140000);           // on attend 1,57 sec , produit en croix avec le nombre de cases pour avoir 2 minutes
        system("cls");    //clear de l'écran pour préparer l'affichage de la matrice actualisée
    }

}