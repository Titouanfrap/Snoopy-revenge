#include <stdio.h>
#include "Sauvegarde.h"
#include "unistd.h"


void saveGame(Snoopy *snoopy, Balle *balle, Time *t, int *oiseaux, int *vies, int *scoretempo, char tab[14][24], int *level) {
    FILE *file = fopen("savegame.dat", "wb");
    if (file != NULL) {
        fwrite(snoopy, sizeof(Snoopy), 1, file);
        fwrite(balle, sizeof(Balle), 1, file);
        fwrite(oiseaux, sizeof(int), 1, file);
        fwrite(t, sizeof(Time), 1, file);
        fwrite(vies, sizeof(int), 1, file);
        fwrite(scoretempo, sizeof(int), 1, file);
        for (int i=0; i<14; i++){
            for (int j=0; j<24; j++){
                fwrite(&tab[i][j], sizeof(int), 1, file);
            }}
        fwrite(level, sizeof(int), 1, file);
        fclose(file);
    } else {
        printf("Erreur lors de la sauvegarde du jeu.\n");
    }
}


void loadGame(Snoopy *snoopy, Balle *balle, Time *t, int *oiseaux, int *vies, int *scoretempo, char tab[14][24], int *level, char *tempo, char *tempos, int *scorefinal) {
    FILE *file = fopen("savegame.dat", "rb");
    if (file != NULL) {
        fread(snoopy, sizeof(Snoopy), 1, file);
        fread(balle, sizeof(Balle), 1, file);
        fread(oiseaux, sizeof(int), 1, file);
        fread(t, sizeof(Time), 1, file);
        fread(vies, sizeof(int), 1, file);
        fread(scoretempo, sizeof(int), 1, file);
        for (int i=0; i<14; i++){
            for (int j=0; j<24; j++){
                fwrite(&tab[i][j], sizeof(int), 1, file);
            }}
        fwrite(level, sizeof(int), 1, file);
        switch (*level) {
            case 1:
                sleep(1);
                Lvl1(vies, tempo, tempos, scoretempo,scorefinal, oiseaux, level);
            case 2:
                sleep(1);
                Lvl2(tempo, tempos,vies, scoretempo,scorefinal, oiseaux, level);
            case 3:
                sleep(1);
                Lvl3(tempo, tempos, vies,scoretempo,scorefinal, oiseaux, level);
            case 4:
                sleep(1);
                Lvl4(tempo, tempos, vies, scoretempo,scorefinal, oiseaux, level);
        }

        fclose(file);
    } else {
        printf("Erreur lors du chargement de la sauvegarde");
    }
}
