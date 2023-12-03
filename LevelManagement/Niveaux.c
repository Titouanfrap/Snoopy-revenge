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
Balle balle = {7,7,1,1};
Snoopy snoopy = {4, 11};

void Lvl1(int *vies, char *tempo, char *tempos,int *scoretempo,int *scorefinal, int *oiseaux, int *level) {
    *scoretempo =0;
    int dix = 0;
    char key;
    char tab[14][24];
    *oiseaux = 0;
    *level = 1;
    int game = 0;
    int tempsd1 = 120;

    time_t debut, maintenant;

    while (*vies < 3) {


        if (kbhit()) {
            key = getch();
            if (key == 'f') {
                system("cls");
                printf("Sauvegarde en cours...");
                saveGame(&snoopy, &balle, &t, oiseaux, vies, scoretempo, tab, level);
                sleep(3);
                printf("Sauvegarde termine ! Vous pouvez quitter le jeu");
            }
        }

        time(&debut);

        tableau(tab, &balle, &snoopy);
        BlocNiv1(tab);

        while (game != 1) {
            terrain(tab);
            time(&maintenant);

            if (*vies==0){
                printf("\nnombre de vie restante:3");
            }
            if (*vies==1){
                printf("\nnombre de vie restante:2");
            }
            if (*vies==2){
                printf("\nnombre de vie restante:1");
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
                    printf("Pressez la touche o pour quitter le menu pause");
                    while (!kbhit()) {
                        usleep(1);
                    }
                    printf("\n ");
                    time_t pause_fin=time (NULL);
                    unsigned long secondes = (unsigned long) difftime( pause_fin, pause_debut );
                    tempsd1+=secondes;

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
                victoire1(tempo, tempos, vies,scoretempo,scorefinal, oiseaux, level);
                sleep(100);
            }

            if (difftime(maintenant, debut) >= tempsd1) {
                sleep(2);
                system("cls");
                *vies+=1;
                defaite1(&*vies,tempo,tempos,scoretempo,scorefinal, oiseaux, level); // Passer la touche 'key' à la fonction defaite1
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

        if (kbhit()) {
            key = getch();
            if (key == 'f') {
                system("cls");
                printf("Sauvegarde en cours...");
                saveGame(&snoopy, &balle, &t, oiseaux, vies, scoretempo, tab, level);
                sleep(3);
                printf("Sauvegarde termine ! Vous pouvez quitter le jeu");
            }
        }

        time(&debut);

        tableau(tab, &balle, &snoopy);
        BlocNiv2(tab);

        while (game != 1) {
            terrain(tab);
            time(&maintenant);
            if (*vies==0){
                printf("\nnombre de vie restante:3");
            }
            if (*vies==1){
                printf("\nnombre de vie restante:2");
            }
            if (*vies==2){
                printf("\nnombre de vie restante:1");
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
                    printf("Pressez la touche o pour quitter le menu pause");
                    while (!kbhit()) {
                        usleep(1);
                    }
                    printf("\n ");
                    time_t pause_fin=time (NULL);
                    unsigned long secondes = (unsigned long) difftime( pause_fin, pause_debut );
                    tempsd1+=secondes;

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

        if (kbhit()) {
            key = getch();
            if (key == 'f') {
                system("cls");
                printf("Sauvegarde en cours...");
                saveGame(&snoopy, &balle, &t, oiseaux, vies, scoretempo, tab, level);
                sleep(3);
                printf("Sauvegarde termine ! Vous pouvez quitter le jeu");
            }
        }

        time(&debut);

        tableau(tab, &balle, &snoopy);
        BlocNiv3(tab);

        while (game != 1) {
            terrain(tab);
            time(&maintenant);
            if (*vies==0){
                printf("\nnombre de vie restante:3");
            }
            if (*vies==1){
                printf("\nnombre de vie restante:2");
            }
            if (*vies==2){
                printf("\nnombre de vie restante:1");
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
                    printf("Pressez la touche o pour quitter le menu pause");
                    while (!kbhit()) {
                        usleep(1);
                    }
                    printf("\n ");
                    time_t pause_fin=time (NULL);
                    unsigned long secondes = (unsigned long) difftime( pause_fin, pause_debut );
                    tempsd1+=secondes;

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

        if (kbhit()) {
            key = getch();
            if (key == 'f') {
                system("cls");
                printf("Sauvegarde en cours...");
                saveGame(&snoopy, &balle, &t, oiseaux, vies, scoretempo, tab, level);
                sleep(3);
                printf("Sauvegarde termine ! Vous pouvez quitter le jeu");
            }
        }

        time(&debut);

        tableau(tab, &balle, &snoopy);
        BlocNiv4(tab);

        while (game != 1) {
            terrain(tab);
            time(&maintenant);

            if (*vies==0){
                printf("\nnombre de vie restante:3");
            }
            if (*vies==1){
                printf("\nnombre de vie restante:2");
            }
            if (*vies==2){
                printf("\nnombre de vie restante:1");
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
                    printf("Pressez la touche o pour quitter le menu pause");
                    while (!kbhit()) {
                        usleep(1);
                    }
                    printf("\n ");
                    time_t pause_fin=time (NULL);
                    unsigned long secondes = (unsigned long) difftime( pause_fin, pause_debut );
                    tempsd1+=secondes;

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