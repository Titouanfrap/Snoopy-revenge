#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void Dir(char *dir, int *x, int *y) {//On modifie la place en fonction de la touche
    switch (*dir) {
        case 'z':
            (*x)--;
            break;
        case 'q':
            (*y)--;
            break;
        case 's':
            (*x)++;
            break;
        case 'd':
            (*y)++;
            break;
    }
}

int deplacement() {//La c'est les valeurs de base du tableau
    char tableau[10][20];
    int x = 0, y = 0;
    char dir = ' ';

    while (1) {//la on lit la touche
        if (kbhit()) {
            dir = getch();
            Dir(&dir, &x, &y);
        }


        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 20; j++) {
                tableau[i][j] = 0x01;
            }
        }

        // la on met la nouvelle position
        tableau[x][y] = 0x02;

        // la on efface
        system("cls");

        printf("Tableau 10x20 :\n");// et la on print
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 20; j++) {
                printf("%c ", tableau[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}