#include "temps.h"
#include "terrain.h"
#include "FinNiveaux.h"
#include <unistd.h>
#include <stdio.h>
#include <conio.h>
#include "menu.h"
#include "Niveaux.h"
#include "time.h"
#define player 0x850E8 //9                   //raccourcit avec le code hexa associé a Snoopy

Time t = {120, 0, 0, 10, 1}; // raccourcit vers la structure du timer
Balle balle = {7,7,1,1};
Snoopy snoopy = {3, 11};

void Lvl1() {
    int dix = 0;
    char key, pause;
    char matrice[14][24];
    int compteur = 0;
    int game = 0;
    char tempo;
    int tempsd1 = 120;
    time_t debut, maintenant;

    int nb_executions = 0;

    while (nb_executions < 3) {
        time(&debut);

        tableau(matrice, &balle, &snoopy);
        BlocNiv1(matrice);

        while (game != 1) {
            terrain(matrice);
            time(&maintenant);

            if (dix >= 9) {
                timed(matrice, &t);
                dix = 0;
            } else {
                dix++;
            }
            if (kbhit()) {
                key = getch();
                if (key == 'p') {
                    printf("Pressez une touche pour quitter le menu pause");
                    while (!kbhit()) {
                        sleep(1);
                    }
                }
                deplacement(matrice, &key, &snoopy, &compteur);
            }

            mouvballe(matrice, &balle, &tempo);
            if (balle.x == snoopy.x && balle.y == snoopy.y) {
                sleep(2);
                GameOver();
                sleep(5);
                menu();
                choix();
            }

            if (compteur == 4) {
                game = 1;
                sleep(2);
                victoire1(&tempo);
                sleep(100);
            }

            if (difftime(maintenant, debut) >= tempsd1) {
                sleep(2);
                system("cls");
                defaite1();
                sleep(100);
                nb_executions++;
                break;
            }

            usleep(140000); // On attend 1,57 sec, produit en croix avec le nombre de cases pour avoir 2 minutes
            system("cls"); // Clear de l'écran pour préparer l'affichage de la matrice actualisée
        }

        if (nb_executions == 2) {
            GameOver();
        } else {
            printf(" ");
        }
    }
}


void Lvl2(char *tempo) {
    system("cls");
    int dix=0;
    char key;
    char matrice[14][24];
    int compteur = 0;
    int game = 0;

    t.y=10;
    t.x=0;
    t.x += t.directx;
    t.y += t.directy;




    tableau(matrice, &balle, &snoopy);
    BlocNiv2(matrice);
    matrice[7][7] = 10;
    while(game != 1){
        terrain(matrice);

        if (dix>=9){
            timed(matrice, &t);
            dix=0;
        }
        else {
            dix++;
        }
        if (kbhit()){             //permet de lancer la boucle ssi une touche est pressée
            key = getch();     // la touche pressée est récupérée et assignée a key
            if(key=='p') {
                printf ("Pressez une touche pour quitter le menu pause");
                while(!kbhit()){
                    sleep(1);
                }
            }
            deplacement(matrice, &key, &snoopy, &compteur);                   // voir programme déplacement
        }


        mouvballe(matrice, &balle, tempo);
        if (balle.x == snoopy.x && balle.y == snoopy.y) {
            sleep(2);
            GameOver();
            sleep(5);
            menu();
            choix();
        }

        if (compteur == 4) {
            game = 1;
            sleep(2);
            victoire2(tempo);
            sleep(100);

        }




        usleep(140000);           // on attend 1,57 sec , produit en croix avec le nombre de cases pour avoir 2 minutes
        system("cls");    //clear de l'écran pour préparer l'affichage de la matrice actualisée
    }
}


void Lvl3(char *tempo) {
    int dix=0;
    char key;
    char matrice[14][24];
    int compteur = 0;
    int game = 0;

    t.y=10;
    t.x=0;
    t.x += t.directx;
    t.y += t.directy;


    tableau(matrice, &balle, &snoopy);
    BlocNiv3(matrice);
    matrice[7][7] = 10;
    while(game != 1){
        terrain(matrice);
        if (dix>=9){
            timed(matrice, &t);
            dix=0;
        }
        else {
            dix++;
        }
        if (kbhit()){             //permet de lancer la boucle ssi une touche est pressée
            key = getch();             // la touche pressée est récupérée et assignée a key
            deplacement(matrice, &key, &snoopy, &compteur);                   // voir programme déplacement
        }


        mouvballe(matrice, &balle, tempo);
        if (balle.x == snoopy.x && balle.y == snoopy.y) {
            sleep(2);
            GameOver();
            sleep(5);
            menu();
            choix();
        }

        if (compteur == 4) {
            game = 1;
            sleep(2);
            victoire3(tempo);
            sleep(100);
        }


        usleep(140000);           // on attend 1,57 sec , produit en croix avec le nombre de cases pour avoir 2 minutes
        system("cls");    //clear de l'écran pour préparer l'affichage de la matrice actualisée
    }
}

void Lvl4(char *tempo) {
    int dix=0;
    char key;
    char matrice[14][24];
    int compteur = 0;
    int game = 0;
    matrice[7][7] = 10;
    t.y=10;
    t.x=0;
    t.x += t.directx;
    t.y += t.directy;


    tableau(matrice, &balle, &snoopy);
    BlocNiv3(matrice);

    while(game != 1){
        terrain(matrice);
        if (dix>=9){
            timed(matrice, &t);
            dix=0;
        }
        else {
            dix++;
        }
        if (kbhit()){             //permet de lancer la boucle ssi une touche est pressée
            key = getch();             // la touche pressée est récupérée et assignée a key
            deplacement(matrice, &key, &snoopy, &compteur);                   // voir programme déplacement
        }


        mouvballe(matrice, &balle, tempo);
        if (balle.x == snoopy.x && balle.y == snoopy.y) {
            sleep(2);
            GameOver();
            sleep(5);
            menu();
            choix();
        }

        if (compteur == 4) {
            game = 1;
            sleep(2);
            victoire4(tempo);
            sleep(100);
        }


        usleep(140000);           // on attend 1,57 sec , produit en croix avec le nombre de cases pour avoir 2 minutes
        system("cls");    //clear de l'écran pour préparer l'affichage de la matrice actualisée
    }
}