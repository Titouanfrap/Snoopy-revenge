#include "../GameManagement/temps.h"
#include "../GameManagement/terrain.h"
#include "FinNiveaux.h"
#include <unistd.h>
#include <stdio.h>
#include <conio.h>
#include "../menu.h"
#include "Niveaux.h"
#include "time.h"
#define player 0x850E8 //9                   //raccourcit avec le code hexa associé a Snoopy

Time t = {120, 0, 0, 10, 1}; // raccourcit vers la structure du timer
Balle balle = {7,7,1,1};
Snoopy snoopy = {4, 11};

void Lvl1(int *nb_executions, char *tempo, char *tempos,int *scoretempo,int *scorefinal) {

    int dix = 0;
    char key;
    char matrice[14][24];
    int compteur = 0;
    int game = 0;
    int tempsd1 = 120;

    time_t debut, maintenant;

    while (*nb_executions < 3) {
        time(&debut);

        tableau(matrice, &balle, &snoopy);
        BlocNiv1(matrice);

        while (game != 1) {
            terrain(matrice);
            time(&maintenant);
            if (*nb_executions==0){
                printf("nombre de vie restante:3");
            }
            if (*nb_executions==1){
                printf("nombre de vie restante:2");
            }
            if (*nb_executions==2){
                printf("nombre de vie restante:1");
            }


            if (dix >= 9) {
                timed(matrice, &t);
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
                deplacement(matrice, &key, &snoopy, &compteur, tempos);
            }

            mouvballe(matrice, &balle, tempo);
            if (balle.x == snoopy.x && balle.y == snoopy.y) {
                sleep(2);
                GameOver();
                sleep(5);
                menu();
                choix(scoretempo,scorefinal);
            }

            if (compteur == 4) {
                game = 1;
                sleep(2);
                victoire1(tempo, tempos, nb_executions,scoretempo,scorefinal);
                sleep(100);
            }

            if (difftime(maintenant, debut) >= tempsd1) {
                sleep(2);
                system("cls");
                *nb_executions+=1;
                defaite1(&*nb_executions,tempo,tempos,scoretempo,scorefinal); // Passer la touche 'key' à la fonction defaite1
                sleep(100);
                sleep(5);
                break;
            }


            *scoretempo = (120-((difftime(maintenant,debut)-tempsd1+120)))*100;

            usleep(140000); // Attendre 1,57 sec, produit en croix avec le nombre de cases pour avoir 2 minutes
            system("cls"); // Clear de l'écran pour préparer l'affichage de la matrice actualisée
        }
    }


    if (*nb_executions == 3) {
        GameOvert();
    }
}

void Lvl2(char *tempo, char *tempos, int *nb_executions,int *scoretempo,int *scorefinal) {
    system("cls");
    int dix = 0;
    char key;
    char matrice[14][24];
    int compteur = 0;
    int game = 0;
    int tempsd1 =120;
    time_t debut, maintenant;

    matrice[7][7] = 10;
    t.y=10;
    t.x=0;
    t.directx=0;
    t.directy=1;

    while (*nb_executions < 3) {
        time(&debut);

        tableau(matrice, &balle, &snoopy);
        BlocNiv2(matrice);

        while (game != 1) {
            terrain(matrice);
            time(&maintenant);
            if (*nb_executions==0){
                printf("nombre de vie restante:3");
            }
            if (*nb_executions==1){
                printf("nombre de vie restante:2");
            }
            if (*nb_executions==2){
                printf("nombre de vie restante:1");
            }


            if (dix >= 9) {
                timed(matrice, &t);
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
                deplacement(matrice, &key, &snoopy, &compteur, tempos);
            }

            mouvballe(matrice, &balle, tempo);
            if (balle.x == snoopy.x && balle.y == snoopy.y) {
                sleep(2);
                GameOver();
                sleep(5);
                menu();
                choix(scoretempo,scorefinal);
            }

            if (compteur == 4) {
                game = 1;
                sleep(2);
                victoire2(tempo, tempos, nb_executions,scoretempo,scorefinal);
                sleep(100);
            }

            if (difftime(maintenant, debut) >= tempsd1) {
                sleep(2);
                system("cls");
                *nb_executions+=1;
                defaite2(&*nb_executions,tempo,tempos,scoretempo,scorefinal); // Passer la touche 'key' à la fonction defaite1
                sleep(100);
                sleep(5);
                break;
            }


            *scoretempo = (120-((difftime(maintenant,debut)-tempsd1+120)))*100;

            usleep(140000); // Attendre 1,57 sec, produit en croix avec le nombre de cases pour avoir 2 minutes
            system("cls"); // Clear de l'écran pour préparer l'affichage de la matrice actualisée
        }
    }


    if (*nb_executions == 3) {
        GameOvert();
    }
}


void Lvl3(char *tempo, char *tempos, int *nb_executions,int *scoretempo,int *scorefinal) {

    system("cls");
    int dix = 0;
    char key;
    char matrice[14][24];
    int compteur = 0;
    int game = 0;
    int tempsd1 = 120;
    time_t debut, maintenant;

    tableau(matrice, &balle, &snoopy);
    t.y=10;
    t.x=0;
    t.directx=0;
    t.directy=1;

    while (*nb_executions < 3) {
        time(&debut);

        tableau(matrice, &balle, &snoopy);
        BlocNiv3(matrice);

        while (game != 1) {
            terrain(matrice);
            time(&maintenant);
            if (*nb_executions==0){
                printf("nombre de vie restante:3");
            }
            if (*nb_executions==1){
                printf("nombre de vie restante:2");
            }
            if (*nb_executions==2){
                printf("nombre de vie restante:1");
            }


            if (dix >= 9) {
                timed(matrice, &t);
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
                deplacement(matrice, &key, &snoopy, &compteur, tempos);
            }

            mouvballe(matrice, &balle, tempo);
            if (balle.x == snoopy.x && balle.y == snoopy.y) {
                sleep(2);
                GameOver();
                sleep(5);
                menu();
                choix(scoretempo,scorefinal);
            }

            if (compteur == 4) {
                game = 1;
                sleep(2);
                victoire3(tempo, tempos, nb_executions,scoretempo,scorefinal);
                sleep(100);
            }

            if (difftime(maintenant, debut) >= tempsd1) {
                sleep(2);
                system("cls");
                *nb_executions+=1;
                defaite3(&*nb_executions,tempo,tempos,scoretempo,scorefinal); // Passer la touche 'key' à la fonction defaite1
                sleep(100);
                sleep(5);
                break;
            }


            *scoretempo = (120-((difftime(maintenant,debut)-tempsd1+120)))*100;

            usleep(140000); // Attendre 1,57 sec, produit en croix avec le nombre de cases pour avoir 2 minutes
            system("cls"); // Clear de l'écran pour préparer l'affichage de la matrice actualisée
        }
    }


    if (*nb_executions == 3) {
        GameOvert();
    }
}



void Lvl4(char *tempo, char *tempos, int *nb_executions,int *scoretempo,int *scorefinal) {

    int dix = 0;
    char key;
    char matrice[14][24];
    int compteur = 0;
    int game = 0;
    int tempsd1 = 120;
    time_t debut, maintenant;

    tableau(matrice, &balle, &snoopy);
    t.y=10;
    t.x=0;
    t.directx=0;
    t.directy=1;

    while (*nb_executions < 3) {
        time(&debut);

        tableau(matrice, &balle, &snoopy);
        BlocNiv4(matrice);

        while (game != 1) {
            terrain(matrice);
            time(&maintenant);

            if (*nb_executions==0){
                printf("nombre de vie restante:3");
            }
            if (*nb_executions==1){
                printf("nombre de vie restante:2");
            }
            if (*nb_executions==2){
                printf("nombre de vie restante:1");
            }


            if (dix >= 9) {
                timed(matrice, &t);
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
                deplacement(matrice, &key, &snoopy, &compteur, tempos);
            }

            mouvballe(matrice, &balle, tempo);
            if (balle.x == snoopy.x && balle.y == snoopy.y) {
                sleep(2);
                GameOver();
                sleep(5);
                menu();
                choix(scoretempo,scorefinal);
            }

            if (compteur == 4) {
                game = 1;
                sleep(2);
                victoire4(tempo, tempos, nb_executions,scoretempo,scorefinal);
                sleep(100);
            }

            if (difftime(maintenant, debut) >= tempsd1) {
                sleep(2);
                system("cls");
                *nb_executions+=1;
                defaite4(&*nb_executions,tempo,tempos,scoretempo,scorefinal); // Passer la touche 'key' à la fonction defaite1
                sleep(100);
                sleep(5);
                break;
            }


            *scoretempo = (120-((difftime(maintenant,debut)-tempsd1+120)))*100;

            usleep(140000); // Attendre 1,57 sec, produit en croix avec le nombre de cases pour avoir 2 minutes
            system("cls"); // Clear de l'écran pour préparer l'affichage de la matrice actualisée
        }
    }


    if (*nb_executions == 3) {
        GameOvert();
    }
}