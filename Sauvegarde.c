#include <stdio.h>
#include "GameManagement/terrain.h"
#include "GameManagement/temps.h"


void saveGame(const Snoopy *snoopy, Balle *balle, Time *t, int *oiseaux, int *vies, int *scoretempo, char tab[14][24], int *level) {
    FILE *file = fopen("savegame.dat", "wb");
    if (file != NULL) {
        fwrite(snoopy, sizeof(Snoopy), 1, file);
        fwrite(balle, sizeof(Balle), 1, file);
        fwrite(oiseaux, sizeof(int), 1, file);
        fwrite(t, sizeof(Time), 1, file);
        fwrite(vies, sizeof(int), 1, file);
        fwrite(scoretempo, sizeof(int), 1, file);
        fwrite(tab, sizeof(int), 1, file);
        fwrite(level, sizeof(int), 1, file);
        fclose(file);
    } else {
        printf("Erreur lors de la sauvegarde du jeu.\n");
    }
}

//
//void loadGame(GameState *state) {
//    FILE *file = fopen("savegame.dat", "rb");
//    if (file != NULL) {
//        fread(state, sizeof(GameState), 1, file);
//        fclose(file);
//    }
//}
