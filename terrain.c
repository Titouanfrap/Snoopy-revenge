#include <stdio.h>
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
#define tp 0x850CF //12
#define cassable 0x850B1 //13
#define lienb 0x850CB //14
#define lienh 0x850CA //15
#define tapisd 0x850AF  //16
#define tapisg 0x850AE  //17
#define vie 0x85003 //18



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
                    Color(13,0);
                    printf("%c",tp);
                    Color(15,0);
                    break;
                case 13:
                    printf("%c",cassable);
                    break;
                case 14:
                    printf("%c",lienb);
                    break;
                case 15:
                    printf("%c",lienh);
                    break;
                case 16:
                    printf("%c",tapisd);
                    break;
                case 17:
                    printf("%c",tapisg);
                    break;
                case 18:
                    printf("%c",vie);
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
    snoopy->x = 4; snoopy->y = 11;
    tab[snoopy->x][snoopy->y] = 9;

    balle->x = 7; balle->y = 7;
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



void BlocNiv1(char tab[14][24]) {
    int xtempo, ytempo, bloctempo;
    FILE *BlocNiv1 = fopen("../BlocNiv1.txt", "r");
    if (BlocNiv1 == NULL) {
        printf("Erreur d'ouverture de fichier.");
    }
    for (int i=0;i<=30;i++) {
        fscanf(BlocNiv1, "%d %d %d", &xtempo, &ytempo, &bloctempo);
        tab[xtempo][ytempo] = bloctempo;
    }
}
void BlocNiv2(char tab[14][24]) {
    int xtempo, ytempo, bloctempo;
    FILE *BlocNiv2 = fopen("../BlocNiv2.txt", "r");
    if (BlocNiv2 == NULL) {
        printf("Erreur d'ouverture de fichier.");
    }
    for (int i=0;i<=66;i++) {
        fscanf(BlocNiv2, "%d %d %d", &xtempo, &ytempo, &bloctempo);
        tab[xtempo][ytempo] = bloctempo;
    }
}


void BlocNiv3(char tab[14][24]) {
    int xtempo, ytempo, bloctempo;
    FILE *BlocNiv3 = fopen("../BlocNiv3.txt", "r");
    if (BlocNiv3 == NULL) {
        printf("Erreur d'ouverture de fichier.");
    }
    for (int i=0;i<=50;i++) {
        fscanf(BlocNiv3, "%d %d %d", &xtempo, &ytempo, &bloctempo);
        tab[xtempo][ytempo] = bloctempo;
    }
}

void BlocNiv4(char tab[14][24]) {
    int xtempo, ytempo, bloctempo;
    FILE *BlocNiv4 = fopen("../BlocNiv4.txt", "r");
    if (BlocNiv4 == NULL) {
        printf("Erreur d'ouverture de fichier.");
    }
    for (int i=0;i<=82;i++) {
        fscanf(BlocNiv4, "%d %d %d", &xtempo, &ytempo, &bloctempo);
        tab[xtempo][ytempo] = bloctempo;
    }
}