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
                    printf("%c", snoopy);
                    break;
            }  //Pour chaque case on cherche le cas correspondant puis on le print, en revenant a la ligne a chaque itération de i pour l'aspect tableau
        }
        printf("\n");
    }
}


void deplacement(char *key, int *x, int *y) {//On modifie les valeurs de x et y en fonction de la touche recue, les valeurs sont ensuites renvoyées dans le main
    switch (*key) {
        case 'z':
            if (*x > 2) {
                (*x)--;
            }
            break;
        case 'q':
            if (*y > 2) {
                (*y)--;
            }
            break;
        case 's':
            if (*x < 11) {
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





