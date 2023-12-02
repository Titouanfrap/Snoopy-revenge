#include <stdio.h>
#include "GameManagement/terrain.h"
#include "GameManagement/temps.h"

typedef struct {
    int SnoopyX;
    int SnoopyY;
    int BalleX;
    int BalleY;
    int dBalleX;
    int dBalleY;
    int tempsx;
    int tempsy;
    int tempsdirectx;
    int tempsdirecty;
    int vies;
    int Noiseaux;
    int currentLevel;
    int terrain;
} GameState;

void saveGame(const GameState *state) {
    FILE *file = fopen("savegame.dat", "wb");
    if (file != NULL) {
        fwrite(state, sizeof(GameState), 1, file);
        fclose(file);
    } else {
        printf("Erreur lors de la sauvegarde du jeu.\n");
    }
}

void loadGame(GameState *state) {
    FILE *file = fopen("savegame.dat", "rb");
    if (file != NULL) {
        fread(state, sizeof(GameState), 1, file);
        fclose(file);
    }
}

void savestruct(Balle *balle, Snoopy *snoopy, Time *t, GameState *state, int *nb_executions) {
    state->SnoopyX = snoopy->x;
    state->SnoopyY = snoopy->y;
    state->tempsx = t->x;
    state->tempsy = t->y;
    state->tempsdirectx = t->directx;
    state->tempsdirecty = t->directy;
    state->BalleX = balle->x;
    state->BalleY = balle->y;
    state->dBalleX = balle->dx;
    state->dBalleY = balle->dy;
    state->vies = *nb_executions;
}
