#include <pthread.h>
#include "temps.h"
#include "Deplacement.h"

void terrain (char ter[14][24]){
        for (int i=0; i<14; i++){
            for (int j=0; j<24; j++){
                comptearebours();
                deplacement();

                printf("%c",ter[i][j]);
            }
            printf("\n");
        }
}

// il faudra changer nos programmes temps et deplacements pour qu'ils return avec la matrice ter
// au lieu de print