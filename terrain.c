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
    FILE *BlocNiv1 = fopen("../BlocNiv1", "r");
    if (BlocNiv1 == NULL) {
        printf("Erreur d'ouverture de fichier.");
    }
    for (int i=0;i<=30;i++) {
        fscanf(BlocNiv1, "%d %d %d", &xtempo, &ytempo, &bloctempo);
        tab[xtempo][ytempo] = bloctempo;
    }
}
void BlocNiv2(char tab[14][24]) {
    tab[2][3] = 5;
    tab[4][2] = 2;
    tab[4][3] = 2;
    tab[4][4] = 2;
    tab[3][5] = 5;
    tab[4][5] = 4;
    tab[2][5] = 13;
    tab[6][5] = 2;
    tab[6][3] = 2;
    tab[6][2] = 2;
    tab[6][6] = 2;
    tab[6][4] = 13;
    tab[6][7] = 4;
    tab[3][7] = 5;
    tab[2][7] = 5;
    tab[4][7] = 5;
    tab[5][7] = 5;
    tab[9][3] = 1;
    tab[9][2] = 5;
    tab[10][2] = 4;
    tab[10][4] = 3;
    tab[11][5] = 5;
    tab[10][5] = 7;
    tab[10][9] = 5;
    tab[11][9] = 5;
    tab[11][5] = 5;
    tab[10][10] = 13;
    tab[2][10] = 13;
    tab[3][10] = 5;
    tab[4][10] = 5;
    tab[3][12] = 5;
    tab[2][12] = 13;
    tab[4][12] = 5;
    tab[5][11] = 14;
    tab[5][10] = 3;
    tab[5][12] = 4;
    tab[6][11] = 5;
    tab[7][11] = 5;
    tab[8][11] = 5;
    tab[9][11] = 5;
    tab[10][11] = 5;
    tab[11][11] = 5;
    tab[5][15] = 5;
    tab[6][15] = 13;
    tab[7][15] = 5;
    tab[8][15] = 5;
    tab[9][15] = 5;
    tab[10][15] = 5;
    tab[11][15] = 5;
    tab[2][15] = 5;
    tab[3][15] = 5;
    tab[4][15] = 5;
    tab[3][20] = 5;
    tab[8][18] = 5;
    tab[9][18] = 5;
    tab[5][19] = 5;
    tab[7][19] = 15;
    tab[7][20] = 2;
    tab[7][21] = 13;
    tab[4][20] = 4;
    tab[10][18] = 4;
    tab[7][18] = 6;
    tab[4][19] = 6;
    tab[6][19] = 5;
    tab[11][20] = 5;
    tab[2][20] = 13;
    tab[11][10] = 12;
}


void BlocNiv3(char tab[14][24]) {
    tab[4][2] = 5;
    tab[5][2] = 5;
    tab[7][2] = 5;
    tab[10][2]=2;
    tab[2][4] = 5;
    tab[3][4] = 5;
    tab[4][4] = 5;
    tab[5][4] = 5;
    tab[7][4] = 5;
    tab[9][3]=1;
    tab[9][4]=1;
    tab[7][5] = 2;
    tab[5][6] = 5;
    tab[6][6] = 5;
    tab[7][6]=4;
    tab[10][5] = 5;
    tab[11][5] =5;
    tab[3][9] = 5;
    tab[4][9] = 3;
    tab[4][10] = 2;
    tab[5][11]=5;
    tab[3][12]= 5;
    tab[4][12]=4;
    tab[5][14]=2;
    tab[8][14]=2;
    tab[8][15] =2;
    tab[3][16]=2;
    tab[6][16] = 5;
    tab[7][16] = 5;
    tab[8][16] = 4;
    tab[2][18]=5;
    tab[3][18]=4;
    tab[5][18]=6;
    tab[6][18]=5;
    tab[5][19]=2;
    tab[5][20]=2;
    tab[5][21]=2;
    tab[5][3]=13;
    tab[6][3]=1;
    tab[3][15] = 13;
    tab[4][15]=1;
    tab[5][15] =13;
    tab[3][17] = 13;
    tab[4][17]=1;
    tab[5][17] =13;
    tab[9][21]=2;
    tab[9][19]=1;
    tab[9][18]=1;
    tab[8][19]=1;
    tab[11][17]=5;
    tab[10][17]=5;

}

void BlocNiv4(char tab[14][24]) {
    tab[3][11] = 2;
    tab[6][4] = 3;
    tab[3][5] = 5;
    tab[2][4] = 1;
    tab[3][3] = 13;
    tab[4][3] = 3;
    tab[4][4] = 14;
    tab[4][5] = 4;
    tab[5][4] = 5;
    tab[5][2] = 1;
    tab[7][5] = 5;
    tab[6][5] = 7;
    tab[8][5] = 15;
    tab[8][6] = 7;
    tab[8][4] = 2;
    tab[8][3] = 6;
    tab[9][3] = 5;
    tab[9][6] = 5;
    tab[9][4] = 13;
    tab[10][4] = 1;
    tab[11][3] = 5;
    tab[2][9] = 5;
    tab[3][12] = 7;
    tab[4][10] = 1;
    tab[4][12] = 5;
    tab[5][12] = 5;
    tab[5][9] = 2;
    tab[5][10] = 7;
    tab[6][8] = 1;
    tab[6][10] = 13;
    tab[6][12] = 3;
    tab[6][13] = 2;
    tab[7][9] = 2;
    tab[7][10] = 13;
    tab[7][11] = 2;
    tab[8][9] = 1;
    tab[8][13] = 5;
    tab[9][13] = 4;
    tab[9][10] = 6;
    tab[9][11] = 14;
    tab[9][12] = 2;
    tab[10][9] = 2;
    tab[10][10] = 15;
    tab[10][11] = 4;
    tab[11][11] = 5;
    tab[2][16] = 5;
    tab[3][16] = 13;
    tab[4][16] = 5;
    tab[5][16] = 5;
    tab[6][16] = 5;
    tab[7][16] = 3;
    tab[7][17] = 2;
    tab[7][18] = 2;
    tab[7][19] = 2;
    tab[7][20] = 2;
    tab[7][21] = 2;
    tab[2][18] = 5;
    tab[3][18] = 5;
    tab[4][18] = 5;
    tab[5][18] = 3;
    tab[5][19] = 2;
    tab[5][20] = 13;
    tab[5][21] = 2;
    tab[4][20] = 1;
    tab[2][20] = 13;
    tab[3][21] = 2;
    tab[9][17] = 6;
    tab[9][18] = 2;
    tab[9][19] = 2;
    tab[9][20] = 7;
    tab[10][17] = 13;
    tab[10][18] = 13;
    tab[11][17] = 5;
    tab[10][20] = 5;
    tab[11][19] = 1;

    tab[8][11] = 16;
    tab[8][12] = 16;
    tab[7][12] = 16;
    tab[7][13] = 16;

    tab[2][10] = 17;
    tab[2][11] = 17;
    tab[2][12] = 17;
    tab[3][10] = 17;

}
