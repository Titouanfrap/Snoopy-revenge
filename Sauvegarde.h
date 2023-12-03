#include "GameManagement/terrain.h"
#include "GameManagement/temps.h"

void saveGame(Snoopy *snoopy, Balle *balle, Time *t, int *oiseaux, int *vies, int *scoretempo, char tab[14][24], int *level);

void loadGame(Snoopy *snoopy, Balle *balle, Time *t, int *oiseaux, int *vies, int *scoretempo, char tab[14][24], int *level, char *tempo, char *tempos, int *scorefinal);