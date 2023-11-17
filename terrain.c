#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
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
#define bird 0x850B8     // 11
#define tp 0x850CF
#define cassable 0x850B1
#define angle 0x850CB
#define lienh 0x850CA

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
                    Color(12,0);
                    printf("o");
                    Color(15,0);
                    break;
                case 11 :
                    Color(14,0);
                    printf("%c", bird);
                    Color(15,0);
                    break;
                case 12:
                    printf("%c",tp);
                    break;
                case 13:
                    printf("%c",cassable);
                    break;
                case 14:
                    printf("%c",angle);
                    break;
                case 15:
                    printf("%c",lienh);
                    break;
            }  //Pour chaque case on cherche le cas correspondant puis on le print, en revenant a la ligne a chaque itération de i pour l'aspect tableau
        }
        printf("\n");
    }
}

void BlocNiv1(char tab[14][24]) {
    for (int i = 0; i < 14; i++) {
        for (int j = 0; j < 24; j++) {
            tab[2][3] = 5;
            tab[3][3] = 5;
            tab[4][3] = 5;
            tab[9][4] = 5;
            tab[8][4] = 5;
            tab[7][4] = 5;
            tab[10][5] = 2;
            tab[10][4] = 15;
            tab[10][3] = 2;
            tab[10][2] = 2;
            tab[6][10] = 3;
            tab[5][10] = 5;
            tab[4][10] = 5;
            tab[3][10] = 6;
            tab[6][11] = 2;
            tab[3][11] = 2;
            tab[9][12] = 2;
            tab[9][13] = 7;
            tab[10][13] = 5;
            tab[2][14] = 5;
            tab[3][14] = 5;
            tab[4][14] = 5;
            tab[7][19] = 2;
            tab[7][20] = 2;
            tab[7][18] = 2;
            tab[7][21] = 2;

        }
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
    snoopy->x = 4; snoopy->y = 4;
    tab[snoopy->x][snoopy->y] = 9;

    balle->x = 5; balle->y = 5;
    tab[balle->x][balle->y] = 10;

    tab[2][2] = 11;

    tab[2][21] = 11;

    tab[11][21] = 11;

    tab[11][2] = 11;
}



void Color(int couleurDuTexte,int couleurDeFond)
{
HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}



