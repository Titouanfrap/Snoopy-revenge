#include <stdio.h>
#include "terrain.h"
#define wall 0xFE //1
#define time 0xB1 //8
#define Mure 0x850BA //5
#define plafond 0x850CD //2
#define cotehg 0x850C9 //6
#define cotehd 0x850BB //7
#define cotebd 0x850BC //4
#define cotebg 0x850C8 //3
#define vide ' ' //0
#define player 0x850E8 //Snoopy 9
// on assigne des blocs a des valeurs pour faire un switch case afin d'aller plus vite et d'éviter les erreurs

void terrain(char tab[14][24]){
    for (int i=0; i<14; i++){
        for (int j=0; j<24; j++){                   //boucle classique pour couvrir toutes les valeurs du tableau
            switch (tab[i][j]) {
                case 0 :
                    printf("%c", vide);
                    break;
                case 1 :
                    printf("%c", wall);
                    break;
                case 2 :
                    printf("%c", plafond);
                    break;
                case 3 :
                    printf("%c", cotebg);
                    break;
                case 4 :
                    printf("%c", cotebd);
                    break;
                case 5 :
                    printf("%c", Mure);
                    break;
                case 6 :
                    printf("%c", cotehg);
                    break;
                case 7 :
                    printf("%c", cotehd);
                    break;
                case 8 :
                    printf("%c", time);
                    break;
                case 9 :
                    printf("%c", player);
                    break;
                case 10 :
                    printf("o");
                    break;
            }  //Pour chaque case on cherche le cas correspondant puis on le print, en revenant a la ligne a chaque itération de i pour l'aspect tableau
        }
        printf("\n");
    }
}


void tableau(char tab[14][24], Balle *balle, Snoopy *snoopy) {
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
    snoopy->x = 3; snoopy->y = 3;
    tab[snoopy->x][snoopy->y] = 9;

    balle->x = 5; balle->y = 5;
    tab[balle->x][balle->y] = 10;
}







