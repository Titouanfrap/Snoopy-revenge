#include <stdio.h>

typedef struct {
    int SnoopyX;
    int SnoopyY;
    int BalleX;
    int BalleY;
    int temps;
    int vies;
    int oiseaux;
    int currentLevel;
    int terrain;
    int score;
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
void playGame(GameState *state) {
    state->SnoopyX = 100;
    state->SnoopyY = 50;
    state->currentLevel = 2;
    state->vies--;
}

