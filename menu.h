#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>

void regles();
void leave();
void password(char *tempo, char *tempos, int *vies,int *scoretempo,int *scorefinal, int *oiseaux, int *level);
void menu();
void handleDir(char *key, char *tempo, char *tempos,int *scoretempo,int *scorefinal, int *oiseaux, int *level);
void choix(int *scoretempo,int *scorefinal,int *oiseaux, int *level);