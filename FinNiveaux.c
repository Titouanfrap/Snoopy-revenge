#include <stdio.h>
#include <conio.h>
#include "menu.h"
#include "Niveaux.h"


void victoire1(char *tempo) {
    system("cls");
    printf("//==============================\\\\\n"
           "||          **********\t        ||\n"
           "||     ---===Victoire===---     ||\n"
           "||          **********          ||\n"
           "||______________________________||\n"
           "||                              ||\n"
           "||   Score :\t                ||\n"
           "||   ________________________   ||\n"
           "||                              ||\n"
           "||\t   Sauvegarder\t\t||\n"
           "||   ________________________   ||\n"
           "||\t\t \t\t||\n"
           "||        Niveau Suivant        ||\n"
           "||   ________________________   ||\n"
           "||                              ||\t\t\n"
           "||         Retour Menu          ||\n"
           "||   ________________________   || \n"
           "||                              || \n"
           "||         Deconnexion          || \n"
           "||   ________________________   ||\n"
           "||	                        ||\n"
           "||    Mot de passe : eceinfo    ||\n"
           "||                              ||\n"
           "\\==============================//\n");

    char touche = ' ';

    while (1) {
        if (kbhit()) {
            touche = getch();
        }
        switch (touche) {
            case '1':
                printf("\n\nSauvegarde en cours...");
                break;
            case '2':
                printf("\n\nNiveau suivant...");
                sleep(3);
                Lvl2(tempo);
                break;
            case '3':
                printf("\n\n Retour au Menu...");
                sleep(3);
                menu();
                break;
            case '4':
                printf("\n\nDeconnexion...");
                sleep(3);
                break;
            default:
                break;
        }
        touche = ' ';
    }
}


void victoire2(char *tempo) {
    system("cls");
    printf("//==============================\\\\\n"
           "||          **********\t        ||\n"
           "||     ---===Victoire===---     ||\n"
           "||          **********          ||\n"
           "||______________________________||\n"
           "||                              ||\n"
           "||   Score :\t                ||\n"
           "||   ________________________   ||\n"
           "||                              ||\n"
           "||\t   Sauvegarder\t\t||\n"
           "||   ________________________   ||\n"
           "||\t\t \t\t||\n"
           "||        Niveau Suivant        ||\n"
           "||   ________________________   ||\n"
           "||                              ||\t\t\n"
           "||         Retour Menu          ||\n"
           "||   ________________________   || \n"
           "||                              || \n"
           "||         Deconnexion          || \n"
           "||   ________________________   ||\n"
           "||	                        ||\n"
           "||    Mot de passe : ecemaths   ||\n"
           "||                              ||\n"
           "\\==============================//\n");
    char touche = ' ';

    while (1) {
        if (kbhit()) {
            touche = getch();
        }
        switch (touche) {
            case '1':
                printf("\n\nSauvegarde en cours...");
                break;
            case '2':
                printf("\n\nNiveau suivant...");
                sleep(3);
                Lvl3(tempo);
                break;
            case '3':
                printf("\n\n Retour au Menu...");
                sleep(3);
                menu();
                break;
            case '4':
                printf("\n\nDeconnexion...");
                sleep(3);
                break;
            default:
                break;
        }
        touche = ' ';
    }
}

void victoire3(char *tempo) {
    system("cls");
    printf("//==============================\\\\\n"
           "||          **********\t        ||\n"
           "||     ---===Victoire===---     ||\n"
           "||          **********          ||\n"
           "||______________________________||\n"
           "||                              ||\n"
           "||   Score :\t                ||\n"
           "||   ________________________   ||\n"
           "||                              ||\n"
           "||\t   Sauvegarder\t\t||\n"
           "||   ________________________   ||\n"
           "||\t\t \t\t||\n"
           "||        Niveau Suivant        ||\n"
           "||   ________________________   ||\n"
           "||                              ||\t\t\n"
           "||         Retour Menu          ||\n"
           "||   ________________________   || \n"
           "||                              || \n"
           "||         Deconnexion          || \n"
           "||   ________________________   ||\n"
           "||	                        ||\n"
           "||    Mot de passe : ecejbtv    ||\n"
           "||                              ||\n"
           "\\==============================//\n");
    char touche = ' ';

    while (1) {
        if (kbhit()) {
            touche = getch();
        }
        switch (touche) {
            case '1':
                printf("\n\nSauvegarde en cours...");
                break;
            case '2':
                printf("\n\nNiveau suivant...");
                sleep(3);
                Lvl4(tempo);
                break;
            case '3':
                printf("\n\n Retour au Menu...");
                sleep(3);
                menu();
                break;
            case '4':
                printf("\n\nDeconnexion...");
                sleep(3);
                break;
            default:
                break;
        }
        touche = ' ';
    }
}

void victoire4(char *tempo) {
    system("cls");
    printf("//==============================\\\\\n"
           "||          **********\t        ||\n"
           "||     ---===Victoire===---     ||\n"
           "||          **********          ||\n"
           "||______________________________||\n"
           "||                              ||\n"
           "||   Score :\t                ||\n"
           "||   ________________________   ||\n"
           "||                              ||\n"
           "||\t   Sauvegarder\t\t||\n"
           "||   ________________________   ||\n"
           "||                              ||\t\t\n"
           "||         Retour Menu          ||\n"
           "||   ________________________   || \n"
           "||                              || \n"
           "||         Deconnexion          || \n"
           "||   ________________________   ||\n"
           "||	                        ||\n"
           "||   Mot de passe : champions   ||\n"
           "||                              ||\n"
           "\\==============================//\n");
    char touche = ' ';
    while (1) {
        if (kbhit()) {
            touche = getch();
        }
        switch (touche) {
            case '1':
                printf("\n\nSauvegarde en cours...");
                break;
            case '2':
                printf("\n\n Retour au Menu...");
                sleep(3);
                menu();
                break;
            case '3':
                printf("\n\nDeconnexion...");
                sleep(3);
                break;
            default:
                break;
        }
        touche = ' ';
    }

}

void defaite1(char *key){
    printf("//==============================\\\\\n"
           "||           *********          ||\n"
           "||      ---===Defaite===---     ||\n"
           "||           *********          ||\n"
           "||______________________________||\n"
           "||                              ||\n"
           "||      Retenter sa chance      ||\n"
           "||   ________________________   ||\n"
           "||                              ||\n"
           "||\t   Sauvegarder\t        ||\n"
           "||   ________________________   ||\n"
           "||                              ||\n"
           "||         Retour Menu          ||\n"
           "||   ________________________   ||\n"
           "||                              ||\n"
           "||         Deconnexion          ||\n"
           "||                              ||\n"
           "\\\\==============================//");
    char touche = ' ';
    while (1) {
        if (kbhit()) {
            touche = getch();
        }
        switch (touche) {
            case '1':
                printf("\n\nRetenter sa chance");
                Lvl1();
                break;
            case '2':
                printf("\n\n Sauvegarde");
                break;
            case '3':
                printf("\n\nRetour au menu");
                sleep(3);
                menu();
                break;
            default:
                break;
        }
        touche = ' ';
    }

}



void GameOver() {
    system("cls");
    printf("\t\t--------------------------------------------------------------------------------\n");
    printf("\t\t|   _____              __  __   ______      ____   __      __  ______   _____  |\n");
    printf("\t\t|  / ____|     /\\     |  \\/  | |  ____|    / __ \\  \\ \\    / / |  ____| |  __ \\ |\n");
    printf("\t\t| | |  __     /  \\    | \\  / | | |__      | |  | |  \\ \\  / /  | |__    | |__) ||\n");
    printf("\t\t| | | |_ |   / /\\ \\   | |\\/| | |  __|     | |  | |   \\ \\/ /   |  __|   |  _  / |\n");
    printf("\t\t| | |__| |  / ____ \\  | |  | | | |____    | |__| |    \\  /    | |____  | | \\ \\ |\n");
    printf("\t\t|  \\_____| /_/    \\_\\ |_|  |_| |______|    \\____/      \\/     |______| |_|  \\_\\|\n");
    printf("\t\t--------------------------------------------------------------------------------\n");
    printf("\n \t\t\t---=====Vous vous etes fait touche par la balle=====---");
    printf("\n\n\n\nRetour au menu...");
    sleep(5);
    menu();

}


