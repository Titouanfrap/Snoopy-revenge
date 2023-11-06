#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define wall 0x850FE
#define time 0x850B1
#define Mure 0x850BA
#define plafond 0x850CD
#define cotehg 0x850C9
#define  cotehd 0x850BB
#define cotebd 0x850BC
#define cotebg 0x850C8


void affichagmatrice (char matrice[14][24]){
    for (int i=0; i<14; i++){
        for (int j=0; j<24; j++){
            printf("%c",matrice[i][j]);
        }
        printf("\n");
    }
}

void tableau(char matrice[14][24]){
    for (int i=0; i<14; i++){
        for(int j=0;j<24; j++){
            if (i==0 || i==13 || j==0 || j==23) {
                matrice[i][j] = wall;
            } else if ( i == 1 || i == 12 ) {
                matrice[i][j] = plafond;
                matrice[12][1]= cotebg;
                matrice[12][22]= cotebd;
            }else if ( j == 1 || j == 22) {
                matrice[i][j] = Mure;
                matrice[1][1] = cotehg;
                matrice[1][22]= cotehd;
            }else {
                matrice[i][j]=' ';
            }
        }
    }
}

struct Time{
    int valeur;
    int x; int directx;
    int y; int directy;
};

void comptearebours(){
    char matrice[14][24];
    tableau(matrice);
    struct Time t;
    t.valeur=120;
    t.x=0;
    t.y=11;
    t.directx=0;
    t.directy=1;

    while (t.valeur>=0){
        matrice[t.x][t.y]= time;
        affichagmatrice(matrice);
        usleep(1570000);
        system("cls");

        t.x +=t.directx;
        t.y +=t.directy;

        if (t.x==0 && t.y==0){
            t.directx=0;
            t.directy=1;
        }else if (t.x==0 && t.y==23){
            t.directx=1;
            t.directy=0;
        }else if (t.x==13 && t.y==23){
            t.directx=0;
            t.directy=-1;
        }else if (t.x==13&& t.y==0){
            t.directx=-1;
            t.directy=0;
        }else if (t.x==0 && t.y==11){
            break;
        }
    }
}
