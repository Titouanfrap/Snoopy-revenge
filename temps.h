#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define wall 0xFE
#define time 0xB1


void affichagmatrice (char matrice[10][20]){
    for (int i=0; i<10; i++){
        for (int j=0; j<20; j++){
            printf("%c",matrice[i][j]);
        }
        printf("\n");
    }
}

void tableau(char matrice[10][20]){
    for (int i=0; i<10; i++){
        for(int j=0;j<20; j++){
            if (i==0 || i==9 || j==0 || j==19){
                matrice[i][j]=wall;
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
    char matrice[10][20];
    tableau(matrice);
    struct Time t;
    t.valeur=120;
    t.x=0;
    t.y=0;
    t.directx=0;
    t.directy=1;

    while (t.valeur>=0){
        matrice[t.x][t.y]= time;
        affichagmatrice(matrice);
        sleep(2);
        system("cls");

        t.x +=t.directx;
        t.y +=t.directy;

        if (t.x==0 && t.y==0){
            t.directx=0;
            t.directy=1;
        }else if (t.x==0 && t.y==19){
            t.directx=1;
            t.directy=0;
        }else if (t.x==9 && t.y==19){
            t.directx=0;
            t.directy=-1;
        }else if (t.x==9 && t.y==0){
            t.directx=-1;
            t.directy=0;
        }else if (t.x==1 && t.y==0){
            break;
        }
    }
}


/*int main(){
    comptearebours();
    return 0;
}
 comptearebours permet d'executer tout le programme. Des modifications vont être apportées
 dans les prochains jours
 */