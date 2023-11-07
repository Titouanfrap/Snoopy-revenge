#include <stdio.h>
#define wall 0xFE //1
#define time 0xB1 //8
#define Mure 0x850BA //5
#define plafond 0x850CD //2
#define cotehg 0x850C9 //6
#define cotehd 0x850BB //7
#define cotebd 0x850BC //4
#define cotebg 0x850C8 //3
#define vide ' ' //0
#define snoopy 0x850E8 //Snoopy 9


void terrain(char tab[14][24]){
    for (int i=0; i<14; i++){
        for (int j=0; j<24; j++){
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
                    printf("%c", snoopy);
                    break;
            }
        }
        printf("\n");
    }
}


void deplacement(char *key, int *x, int *y) {//On modifie la place en fonction de la touche
    switch (*key) {
        case 'z':
            if (*x > 3) {
                (*x)--;
            }
            break;
        case 'q':
            if (*y > 3) {
                (*y)--;
            }
            break;
        case 's':
            if (*x < 9) {
                (*x)++;
            }
            break;
        case 'd':
            if (*y < 21) {
                (*y)++;
            }
            break;
    }
}





