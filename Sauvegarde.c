#include <stdio.h>
#include "Sauvegarde.h"
#include "unistd.h"

// la fonction saveGame permet d'écrire chacun des parametres en binaire dans un fichier
void saveGame(Snoopy *snoopy, Balle *balle, Time *t, int *oiseaux, int *vies, int *scoretempo, char tab[14][24], int *level) {
    FILE *file = fopen("savegame.dat", "wb");//on ouvre en écriture binaire
    if (file != NULL) {// condition qui garantit que l'on écrit bien dans la fichier
        fwrite(snoopy, sizeof(Snoopy), 1, file);
        fwrite(balle, sizeof(Balle), 1, file);
        fwrite(oiseaux, sizeof(int), 1, file);
        fwrite(t, sizeof(Time), 1, file);
        fwrite(vies, sizeof(int), 1, file);
        fwrite(scoretempo, sizeof(int), 1, file);
        fwrite(level, sizeof(int), 1, file);

        for (int i=0; i<14; i++){
            for (int j=0; j<24; j++){
                fwrite(&tab[i][j], sizeof(int), 1, file); // on fait une boucle pour ecrire toutes les cases de la matrice
            }}

        fclose(file);// on ferme le fichier
    } else {// si jamais on a file=NULL alors on affiche une erreur lors de la sauvegarde
        printf("Erreur lors de la sauvegarde du jeu.\n");
    }
}

//cette fonction permet de charger la sauvegarde en lisant et assignant toutes les valeurs issues du fichier binaire
void loadGame(Snoopy *snoopy, Balle *balle, Time *t, int *oiseaux, int *vies, int *scoretempo, char tab[14][24], int *level, char *tempo, char *tempos, int *scorefinal) {
    FILE *file = fopen("savegame.dat", "rb");// on ouvre en lecture binaire
    if (file != NULL) {
        fread(snoopy, sizeof(Snoopy), 1, file);
        fread(balle, sizeof(Balle), 1, file);
        fread(oiseaux, sizeof(int), 1, file);
        fread(t, sizeof(Time), 1, file);
        fread(vies, sizeof(int), 1, file);
        fread(scoretempo, sizeof(int), 1, file);
        fread(level, sizeof(int), 1, file);
        for (int i=0; i<14; i++){
            for (int j=0; j<24; j++){
                fread(&tab[i][j], sizeof(int), 1, file);
            }}


        sleep(1);
        terrain(tab);//on affiche toutes les valeurs enregistrées une fois assignées

        fclose(file);// on ferme le fichier
    } else {
        printf("Erreur lors du chargement de la sauvegarde");
    }
}
