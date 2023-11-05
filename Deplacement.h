#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>

void Dir(char *dir, int *x, int *y) {//On modifie la place en fonction de la touche
    switch (*dir) {
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

int deplacement() {//La c'est les valeurs de base du tableau
    char tableau[12][24];
    int x = 2, y = 2;
    char dir = ' ';

    while (1) {//la on lit la touche
        if (kbhit()) {
            dir = getch();
            Dir(&dir, &x, &y);
        }


        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 24; j++) {
                tableau[i][j] = 0x01;
            }
        }

        // la on met la nouvelle position
        tableau[x][y] = 0x02;

        // la on efface
        system("cls");

        printf("Tableau 10x20 :\n");// et la on print
        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 24; j++) {
                printf("%c ", tableau[i][j]);
            }
            printf("\n");
        }
    sleep(1);
    }

    return 0;
}