#include <stdio.h>
#include <conio.h>
#include "../menu.h"
#include "Niveaux.h"


void victoire1(char *tempo, char *tempos, int *nb_executions,int *scoretempo,int *scorefinal) {
    *scorefinal += *scoretempo;
    system("cls");
    printf("//==============================\\\\\n"
           "||          **********\t        ||\n"
           "||     ---===Victoire===---     ||\n"
           "||          **********          ||\n"
           "||______________________________||\n"
           "||                              ||\n"
           "||   Score :\t      %d      ||\n"
           "||   ________________________   ||\n"
           "||                              ||\n"
           "||\t   Sauvegarder\t\t||\n"
           "||   ________________________   ||\n"
           "||\t\t \t\t||\n"
           "||       1.Niveau Suivant       ||\n"
           "||   ________________________   ||\n"
           "||                              ||\t\t\n"
           "||        2.Retour Menu         ||\n"
           "||   ________________________   || \n"
           "||                              || \n"
           "||        3.Deconnexion         || \n"
           "||	                        ||\n"
           "\\==============================//\n",*scoretempo);

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
                *nb_executions=0;
                Lvl2(tempo, tempos, nb_executions,scoretempo,scorefinal);
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


void victoire2(char *tempo, char *tempos, int *nb_executions,int *scoretempo,int *scorefinal) {
    *scorefinal += *scoretempo;
    system("cls");
    printf("//==============================\\\\\n"
           "||          **********\t        ||\n"
           "||     ---===Victoire===---     ||\n"
           "||          **********          ||\n"
           "||______________________________||\n"
           "||                              ||\n"
           "||   Score :\t     %d           ||\n"
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
           "\\==============================//\n",*scoretempo);
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
                *nb_executions=0;
                Lvl3(tempo, tempos, nb_executions,scoretempo,scorefinal);
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

void victoire3(char *tempo, char *tempos,int *nb_executions,int *scoretempo,int *scorefinal) {
    *scorefinal += *scoretempo ;
    system("cls");
    printf("//==============================\\\\\n"
           "||          **********\t        ||\n"
           "||     ---===Victoire===---     ||\n"
           "||          **********          ||\n"
           "||______________________________||\n"
           "||                              ||\n"
           "||   Score :\t      %d          ||\n"
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
           "\\==============================//\n",*scoretempo);
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
                *nb_executions=0;
                Lvl4(tempo, tempos, nb_executions,scoretempo,scorefinal);
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

void victoire4(char *tempo,char *tempos,int *nb_executions,int *scoretempo,int *scorefinal) {
    *scorefinal += *scoretempo;
    system("cls");
    printf(""
           ""
           "  ___            ___                     ___           ___ \n"
           " (o o)          (o o)                   (o o)         (o o) \n"
           "(  V  )        (  V  )   VICTORY !!!   (  V  )       (  V  )\n"
           "--m-m------------m-m---------------------m-m-----------m-m------\n\n\n"
           "Felicitation !! Vous etes venus a bout de nos 4 niveaux !!\n\n\n"
           "\t\t\t SCORE FINAL : %d\n\n\n\n\n\n\n\n\n\n\n\n\n"
           "Mote de passe: champions",*scorefinal);
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

void defaite1(int *nb_executions, char *tempo, char *tempos,int *scoretempo,int *scorefinal){
    if (*nb_executions<3){
        printf("//==============================\\\\\n"
               "||           *********          ||\n"
               "||      ---===Defaite===---     ||\n"
               "||           *********          ||\n"
               "||______________________________||\n"
               "||                              ||\n"
               "||     1.Retenter sa chance     ||\n"
               "||   ________________________   ||\n"
               "||                              ||\n"
               "||\t   Sauvegarder\t        ||\n"
               "||   ________________________   ||\n"
               "||                              ||\n"
               "||        2.Retour Menu         ||\n"
               "||   ________________________   ||\n"
               "||                              ||\n"
               "||        3.Deconnexion         ||\n"
               "||                              ||\n"
               "\\\\==============================//");
    char touche = ' ';
    while (*nb_executions<3) {
        if (kbhit()) {
            touche = getch();
        }
        switch (touche) {
            case '1':
                printf("\n\nBon courage...");
                sleep(3);
                Lvl1(nb_executions, tempo, tempos,scoretempo,scorefinal);
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
    }}else { Lvl1(nb_executions,tempo, tempos,scoretempo,scorefinal);}
}


void defaite2(int *nb_executions, char *tempo, char *tempos,int *scoretempo,int *scorefinal){
    if (*nb_executions<6){
        printf("//==============================\\\\\n"
               "||           *********          ||\n"
               "||      ---===Defaite===---     ||\n"
               "||           *********          ||\n"
               "||______________________________||\n"
               "||                              ||\n"
               "||     1.Retenter sa chance     ||\n"
               "||   ________________________   ||\n"
               "||                              ||\n"
               "||\t   Sauvegarder\t        ||\n"
               "||   ________________________   ||\n"
               "||                              ||\n"
               "||        2.Retour Menu         ||\n"
               "||   ________________________   ||\n"
               "||                              ||\n"
               "||        3.Deconnexion         ||\n"
               "||                              ||\n"
               "\\\\==============================//");
        char touche = ' ';
        while (*nb_executions<6) {
        if (kbhit()) {
            touche = getch();
        }
        switch (touche) {
            case '1':
                printf("\n\nBon courage...");
                sleep(3);
                Lvl2(tempo, tempos, nb_executions,scoretempo,scorefinal);
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
        }}else { Lvl2(tempo,tempos,nb_executions,scoretempo,scorefinal);}

}


void defaite3(int *nb_executions, char *tempo, char *tempos,int *scoretempo,int *scorefinal){
    if (*nb_executions<9||*nb_executions<3 ){
        printf("//==============================\\\\\n"
               "||           *********          ||\n"
               "||      ---===Defaite===---     ||\n"
               "||           *********          ||\n"
               "||______________________________||\n"
               "||                              ||\n"
               "||     1.Retenter sa chance     ||\n"
               "||   ________________________   ||\n"
               "||                              ||\n"
               "||\t   Sauvegarder\t        ||\n"
               "||   ________________________   ||\n"
               "||                              ||\n"
               "||        2.Retour Menu         ||\n"
               "||   ________________________   ||\n"
               "||                              ||\n"
               "||        3.Deconnexion         ||\n"
               "||                              ||\n"
               "\\\\==============================//");
        char touche = ' ';
        while (*nb_executions<9||*nb_executions<3) {
        if (kbhit()) {
            touche = getch();
        }
        switch (touche) {
            case '1':
                printf("\n\nBon courage...");
                sleep(3);
                Lvl3(tempo, tempos, nb_executions,scoretempo,scorefinal);
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
        }}else { Lvl3(tempo,tempos,nb_executions,scoretempo,scorefinal);}

}


void defaite4(int *nb_executions, char *tempo, char *tempos,int *scoretempo,int *scorefinal){
    if (*nb_executions<9||*nb_executions<3 ){
        printf("//==============================\\\\\n"
               "||           *********          ||\n"
               "||      ---===Defaite===---     ||\n"
               "||           *********          ||\n"
               "||______________________________||\n"
               "||                              ||\n"
               "||     1.Retenter sa chance     ||\n"
               "||   ________________________   ||\n"
               "||                              ||\n"
               "||\t   Sauvegarder\t        ||\n"
               "||   ________________________   ||\n"
               "||                              ||\n"
               "||        2.Retour Menu         ||\n"
               "||   ________________________   ||\n"
               "||                              ||\n"
               "||        3.Deconnexion         ||\n"
               "||                              ||\n"
               "\\\\==============================//");
        char touche = ' ';
        while (*nb_executions<12||*nb_executions<3) {
        if (kbhit()) {
            touche = getch();
        }
        switch (touche) {
            case '1':
                printf("\n\nBon courage...");
                sleep(3);
                Lvl4(tempo, tempos, nb_executions,scoretempo,scorefinal);
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
        }}else { Lvl4(tempo,tempos,nb_executions,scoretempo,scorefinal);}

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
    printf("\n \t\t\t\t---=====Dommage !=====---");
    printf("\n\n\n\nRetour au menu...");
    sleep(5);
    menu();

}




