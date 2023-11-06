#include <stdio.h>
#include "menu.h"
#include "temps.h"
#include "deplacement.h"
#include "terrain.h"

Time t = {120, 0, 0, 10, 1};

int main() {
    for(int i=0; i<256;i++){

    }
    int key;
    if (kbhit()){//récupération de la touche
        key = getch();
    }
    char matrice[14][24];

    tableau(matrice);

    while (1){
        terrain(matrice);
        timed(matrice, &t);
        usleep(1000000);
        system("cls");
    }

}