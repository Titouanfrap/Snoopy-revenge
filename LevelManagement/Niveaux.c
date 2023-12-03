#include "FinNiveaux.h"
#include <unistd.h>
#include <stdio.h>
#include <conio.h>
#include "Niveaux.h"
#include "../menu.h"
#include "time.h"
#include "../Sauvegarde.h"
#define player 0x850E8 //9                   //raccourcit avec le code hexa associé a Snoopy


Time t = {120, 0, 0, 10, 1}; // raccourcit vers la structure du timer
Balle balle = {7,7,1,1};      // raccourcit vers la structure Balle
Snoopy snoopy = {4, 11};      // raccourcit vers la structure Snoopy


void Lvl1(int *vies, char *tempo, char *tempos,int *scoretempo,int *scorefinal, int *oiseaux, int *level) {
    *scoretempo =0;    // On initialise le score du niveau a 0
    int dix = 0;
    char key;
    char tab[14][24];
    *oiseaux = 0;
    *level = 1;
    int game = 0;
    int tempsd1 = 120;

    time_t debut, maintenant;      //On renomme t0 -> maintenant

    while (*vies < 3) {   // On execute tant qu'on a moins de 3 vies

        time(&debut);     // Debut du timer

        tableau(tab, &balle, &snoopy);       // Affichage des bordures de notre plateau de jeu
        BlocNiv1(tab);          //Affichage des différents blocs

        while (game != 1) {     // On execute tant que game est différents de 1
            terrain(tab);        // On appel en boucle le programme terrain
            time(&maintenant);    // On appel en boule le programme time

            if (*vies==0){         // Si vies est égal a 0 on printf
                printf("\nnombre de vie restante: 3\n");
            }
            if (*vies==1){
                printf("\nnombre de vie restante: 2\n");
            }
            if (*vies==2){
                printf("\nnombre de vie restante: 1\n");
            }


            if (dix >= 9) {         // Des que la variable dix est supérieur ou égal a 9, on execute le void timed
                timed(tab, &t);
                dix = 0;        // Et on remet dix a 0
            } else {
                dix++;      // Sinon increment la variable d'un
            }

            if (kbhit()) {           // On detecte si une touche a été pressé

                key = getch();            // On associe le touche pressé a une variable

                if (key == 'p') {              // Si la touche pressé est p on execute
                    time_t pause_debut = time (NULL);            // On met en pause le timer
                    printf("Pressez la touche o pour quitter le menu pause\n\n");
                    while (!kbhit()) {        // Tant qu'on ne réapuie pas sur une touche, le niveau reste en pause
                        usleep(1);
                    }
                    printf("\n ");
                    time_t pause_fin=time (NULL);         //
                    unsigned long secondes = (unsigned long) difftime( pause_fin, pause_debut );
                    tempsd1+=secondes;  // Le temps pendant la pause sera additionné au temps total

                } else if ( key == 'f') {         // Sinon si la touche est égal a f on execute
                    system("cls");      // On clear la console
                    printf("Sauvegarde en cours...\n\n");
                    saveGame(&snoopy, &balle, &t, oiseaux, vies, scoretempo, tab, level);    // On sauvegarde tout ( timer, ballet etc..)
                    sleep(3);
                    printf("Sauvegarde termine ! Retour au menu...");
                    sleep(2);
                    menu();    // Appel du menu
                    choix(scoretempo,scorefinal, oiseaux, level);    // Appel de choix
                }
                deplacement(tab, &key, &snoopy, oiseaux, tempos);    // Deplacement de Snoopy
            }

            mouvballe(tab, &balle, tempo);      // Deplacement de la balle
            if (balle.x == snoopy.x && balle.y == snoopy.y) {    // Si la position de snoopy et de la balle sont égals on execute
                sleep(2);
                GameOver();
                sleep(5);
                menu();
                choix(scoretempo,scorefinal, oiseaux, level);
            }

            if (*oiseaux == 4) {     // Si la variable qui compte les oiseaux récupérés est égal a 4, alors victoire
                game = 1;
                sleep(2);
                victoire1(tempo, tempos, vies,scoretempo,scorefinal, oiseaux, level);
                sleep(100);
            }

            if (difftime(maintenant, debut) >= tempsd1) {   // Si le temps depuis t0 = 120 alors on execute
                sleep(2);
                system("cls");
                *vies+=1;  // On incrément les vies d'un
                defaite1(&*vies,tempo,tempos,scoretempo,scorefinal, oiseaux, level); // Passer la touche 'key' à la fonction defaite1
                sleep(100);
                sleep(5);
                break;
            }


            *scoretempo = (120-((difftime(maintenant,debut)-tempsd1+120)))*100; // Calcul pour le score

            usleep(140000); // Attendre 1,57 sec, produit en croix avec le nombre de cases pour avoir 2 minutes
            system("cls"); // Clear de l'écran pour préparer l'affichage de la matrice actualisée
        }
    }


    if (*vies == 3) { // Si la variables vies arrive a 3, alors GameOver
        GameOver();
    }
}

// On suivra la meme logique pour tous les niveaux


void Lvl2(char *tempo, char *tempos, int *vies,int *scoretempo,int *scorefinal, int *oiseaux, int *level) {
    system("cls");
    int dix = 0;
    char key;
    char tab[14][24];
    *oiseaux = 0;
    *level = 2;
    int game = 0;
    int tempsd1 =120;
    time_t debut, maintenant;

    tab[7][7] = 10;
    t.y=10;
    t.x=0;
    t.directx=0;
    t.directy=1;

    while (*vies < 3) {

        time(&debut);

        tableau(tab, &balle, &snoopy);
        BlocNiv2(tab);

        while (game != 1) {
            terrain(tab);
            time(&maintenant);
            if (*vies==0){
                printf("\nnombre de vie restante: 3\n");
            }
            if (*vies==1){
                printf("\nnombre de vie restante: 2\n");
            }
            if (*vies==2){
                printf("\nnombre de vie restante: 1\n");
            }


            if (dix >= 9) {
                timed(tab, &t);
                dix = 0;
            } else {
                dix++;
            }

            if (kbhit()) {

                key = getch();

                if (key == 'p') {
                    time_t pause_debut = time (NULL);
                    printf("Pressez la touche o pour quitter le menu pause\n\n");
                    while (!kbhit()) {
                        usleep(1);
                    }
                    printf("\n ");
                    time_t pause_fin=time (NULL);
                    unsigned long secondes = (unsigned long) difftime( pause_fin, pause_debut );
                    tempsd1+=secondes;

                } else if ( key == 'f') {
                    system("cls");
                    printf("Sauvegarde en cours...\n\n");
                    saveGame(&snoopy, &balle, &t, oiseaux, vies, scoretempo, tab, level);
                    sleep(3);
                    printf("Sauvegarde termine ! Retour au menu...");
                    sleep(2);
                    menu();
                    choix(scoretempo,scorefinal, oiseaux, level);
                }
                deplacement(tab, &key, &snoopy, oiseaux, tempos);
            }

            mouvballe(tab, &balle, tempo);
            if (balle.x == snoopy.x && balle.y == snoopy.y) {
                sleep(2);
                GameOver();
                sleep(5);
                menu();
                choix(scoretempo,scorefinal, oiseaux, level);
            }

            if (*oiseaux == 4) {
                game = 1;
                sleep(2);
                victoire2(tempo, tempos, vies,scoretempo,scorefinal, oiseaux, level);
                sleep(100);
            }

            if (difftime(maintenant, debut) >= tempsd1) {
                sleep(2);
                system("cls");
                *vies+=1;
                defaite2(tempo,tempos,vies, scoretempo,scorefinal, level, level); // Passer la touche 'key' à la fonction defaite1

                *vies+=1;
                sleep(2);
                system("cls");
                defaite2(tempo,tempos,&*vies,scoretempo,scorefinal, oiseaux, level); // Passer la touche 'key' à la fonction defaite1

                sleep(100);
                sleep(5);
                break;
            }


            *scoretempo = (120-((difftime(maintenant,debut)-tempsd1+120)))*100;

            usleep(140000); // Attendre 1,57 sec, produit en croix avec le nombre de cases pour avoir 2 minutes
            system("cls"); // Clear de l'écran pour préparer l'affichage de la matrice actualisée
        }
    }


    if (*vies == 3) {
        GameOver();
    }
}


void Lvl3(char *tempo, char *tempos, int *vies,int *scoretempo,int *scorefinal, int *oiseaux, int *level) {

    system("cls");
    int dix = 0;
    char key;
    char tab[14][24];
    *oiseaux = 0;
    *level = 3;
    int game = 0;
    int tempsd1 = 120;
    time_t debut, maintenant;

    tableau(tab, &balle, &snoopy);
    t.y=10;
    t.x=0;
    t.directx=0;
    t.directy=1;

    while (*vies < 3) {

        time(&debut);

        tableau(tab, &balle, &snoopy);
        BlocNiv3(tab);

        while (game != 1) {
            terrain(tab);
            time(&maintenant);
            if (*vies==0){
                printf("\nnombre de vie restante: 3\n");
            }
            if (*vies==1){
                printf("\nnombre de vie restante: 2\n");
            }
            if (*vies==2){
                printf("\nnombre de vie restante: 1\n");
            }


            if (dix >= 9) {
                timed(tab, &t);
                dix = 0;
            } else {
                dix++;
            }


            if (kbhit()) {

                key = getch();

                if (key == 'p') {
                    time_t pause_debut = time (NULL);
                    printf("Pressez la touche o pour quitter le menu pause\n\n");
                    while (!kbhit()) {
                        usleep(1);
                    }
                    printf("\n ");
                    time_t pause_fin=time (NULL);
                    unsigned long secondes = (unsigned long) difftime( pause_fin, pause_debut );
                    tempsd1+=secondes;

                } else if ( key == 'f') {
                    system("cls");
                    printf("Sauvegarde en cours...\n\n");
                    saveGame(&snoopy, &balle, &t, oiseaux, vies, scoretempo, tab, level);
                    sleep(3);
                    printf("Sauvegarde termine ! Retour au menu...");
                    sleep(2);
                    menu();
                    choix(scoretempo,scorefinal, oiseaux, level);
                }
                deplacement(tab, &key, &snoopy, oiseaux, tempos);
            }


            mouvballe(tab, &balle, tempo);
            if (balle.x == snoopy.x && balle.y == snoopy.y) {
                sleep(2);
                GameOver();
                sleep(5);
                menu();
                choix(scoretempo,scorefinal, level, oiseaux);
            }

            if (*oiseaux == 4) {
                game = 1;
                sleep(2);
                victoire3(tempo, tempos, vies,scoretempo,scorefinal, oiseaux, level);
                sleep(100);
            }

            if (difftime(maintenant, debut) >= tempsd1) {
                sleep(2);
                system("cls");
                *vies+=1;
                defaite3(tempo,tempos,&*vies,scoretempo,scorefinal, oiseaux, level); // Passer la touche 'key' à la fonction defaite1
                sleep(100);
                sleep(5);
                break;
            }
            if (tab[snoopy.x][snoopy.y] == 19) {
                game = 1;
            }

            *scoretempo = (120-((difftime(maintenant,debut)-tempsd1+120)))*100;

            usleep(140000); // Attendre 1,57 sec, produit en croix avec le nombre de cases pour avoir 2 minutes
            system("cls"); // Clear de l'écran pour préparer l'affichage de la matrice actualisée
        }
    }


    if (*vies == 3) {
        GameOver();
    }
}



void Lvl4(char *tempo, char *tempos, int *vies,int *scoretempo,int *scorefinal, int *oiseaux, int *level) {

    int dix = 0;
    char key;
    char tab[14][24];
    *oiseaux = 0;
    *level = 4;
    int game = 0;
    int tempsd1 = 120;
    time_t debut, maintenant;

    tableau(tab, &balle, &snoopy);
    t.y=10;
    t.x=0;
    t.directx=0;
    t.directy=1;


    while (*vies < 3) {

        time(&debut);

        tableau(tab, &balle, &snoopy);
        BlocNiv4(tab);

        while (game != 1) {
            terrain(tab);
            time(&maintenant);

            if (*vies==0){
                printf("\nnombre de vie restante: 3\n");
            }
            if (*vies==1){
                printf("\nnombre de vie restante: 2\n");
            }
            if (*vies==2){
                printf("\nnombre de vie restante: 1\n");
            }


            if (dix >= 9) {
                timed(tab, &t);
                dix = 0;
            } else {
                dix++;
            }

            if (kbhit()) {

                key = getch();

                if (key == 'p') {
                    time_t pause_debut = time (NULL);
                    printf("Pressez la touche o pour quitter le menu pause\n\n");
                    while (!kbhit()) {
                        usleep(1);
                    }
                    printf("\n ");
                    time_t pause_fin=time (NULL);
                    unsigned long secondes = (unsigned long) difftime( pause_fin, pause_debut );
                    tempsd1+=secondes;

                } else if ( key == 'f') {
                    system("cls");
                    printf("Sauvegarde en cours...\n\n");
                    saveGame(&snoopy, &balle, &t, oiseaux, vies, scoretempo, tab, level);
                    sleep(3);
                    printf("Sauvegarde termine ! Retour au menu...");
                    sleep(2);
                    menu();
                    choix(scoretempo,scorefinal, oiseaux, level);
                }
                deplacement(tab, &key, &snoopy, oiseaux, tempos);
            }

            mouvballe(tab, &balle, tempo);
            if (balle.x == snoopy.x && balle.y == snoopy.y) {
                sleep(2);
                GameOver();
                sleep(5);
                menu();
                choix(scoretempo,scorefinal, level, oiseaux);
            }

            if (*oiseaux == 4) {
                game = 1;
                sleep(2);
                victoire4(scoretempo, scorefinal);

                sleep(100);
            }

            if (difftime(maintenant, debut) >= tempsd1) {
                sleep(2);
                system("cls");
                *vies+=1;
                defaite4(tempo,tempos,&*vies,scoretempo,scorefinal, oiseaux, level); // Passer la touche 'key' à la fonction defaite1

                sleep(100);
                sleep(5);
                break;
            }


            *scoretempo = (120-((difftime(maintenant,debut)-tempsd1+120)))*100;

            usleep(140000); // Attendre 1,57 sec, produit en croix avec le nombre de cases pour avoir 2 minutes
            system("cls"); // Clear de l'écran pour préparer l'affichage de la matrice actualisée
        }
    }


    if (*vies == 3) {
        GameOver();
    }
}