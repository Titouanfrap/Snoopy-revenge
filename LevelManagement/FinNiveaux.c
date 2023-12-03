#include <stdio.h>
#include <conio.h>
#include "../menu.h"
#include "Niveaux.h"


void victoire1(char *tempo, char *tempos, int *vies,int *scoretempo,int *scorefinal, int *oiseaux, int *level) {
    *scorefinal += *scoretempo;      //On ajoute au score final, le score du niveau 1
    system("cls");   //Clear de la console
    printf("//==============================\\\\\n"
           "||          **********\t        ||\n"
           "||     ---===Victoire===---     ||\n"
           "||          **********          ||\n"
           "||______________________________||\n"
           "||                              ||\n"
           "||   Score :\t      %d     ||\n"
           "||   ________________________   ||\n"
           "||                              ||\n"
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
        if (kbhit()) {          //Detecte si une touche a été pressé
            touche = getch();        // Lie la touche pressé et l'associe a une variable
        }
        switch (touche) {      // Swirch des 3 options possibles
            case '1':
                printf("\n\nNiveau suivant...");
                sleep(3);      //Pause de 3 secondes
                *vies=0;
                system("cls");
                sleep(1);
                information();      // Appel du SP information
                sleep(5);
                printf("c'est parti !");
                Lvl2(tempo, tempos, vies,scoretempo,scorefinal, oiseaux, level);   // Appel du lvl 2
                break;
            case '2':
                printf("\n\n Retour au Menu...");
                sleep(3);
                menu();    // Appel du menu
                break;
            case '3':
                printf("\n\nDeconnexion...");
                leave();
                break;
            default:
                break;
        }
        touche = ' ';
    }
}

// On suivra la meme logique pour tout les sous-programmes qui suivent

void victoire2(char *tempo, char *tempos, int *vies,int *scoretempo,int *scorefinal, int *oiseaux, int *level) {
    *scorefinal += *scoretempo;        //On ajoute au score final, le score du niveau 1
    system("cls");       //Clear de la console
    printf("//==============================\\\\\n"
           "||          **********\t        ||\n"
           "||     ---===Victoire===---     ||\n"
           "||          **********          ||\n"
           "||______________________________||\n"
           "||                              ||\n"
           "||   Score :\t      %d      ||\n"
           "||   ________________________   ||\n"
           "||                              ||\n"
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
                printf("\n\nNiveau suivant...");
                sleep(3);
                *vies=0;
                system("cls");
                sleep(1);
                information();
                sleep(5);
                printf("c'est parti !");
                Lvl3(tempo, tempos, vies,scoretempo,scorefinal, oiseaux, level);
                break;
            case '2':
                printf("\n\n Retour au Menu...");
                sleep(3);
                menu();
                break;
            case '3':
                printf("\n\nDeconnexion...");
                leave();
                break;
            default:
                break;
        }
        touche = ' ';
    }
}

void victoire3(char *tempo, char *tempos,int *vies,int *scoretempo,int *scorefinal, int *oiseaux, int *level) {
    *scorefinal += *scoretempo ;
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
                printf("\n\nNiveau suivant...");
                sleep(3);
                *vies=0;
                system("cls");
                sleep(1);
                information();
                sleep(5);
                printf("c'est parti !");
                Lvl4(tempo, tempos, vies,scoretempo,scorefinal, oiseaux, level);
                break;
            case '2':
                printf("\n\n Retour au Menu...");
                sleep(3);
                menu();
                break;
            case '3':
                printf("\n\nDeconnexion...");
                leave();
                break;
            default:
                break;
        }
        touche = ' ';
    }
}

void victoire4(int *scoretempo,int *scorefinal) {
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
                leave();
                break;
            default:
                break;
        }
        touche = ' ';
    }

}

void defaite1(int *vies, char *tempo, char *tempos,int *scoretempo,int *scorefinal, int *oiseaux, int *level){
    if (*vies<3){
    printf("//==============================\\\\\n"
           "||           *********          ||\n"
           "||      ---===Defaite===---     ||\n"
           "||           *********          ||\n"
           "||______________________________||\n"
           "||                              ||\n"
           "||     1.Retenter sa chance     ||\n"
           "||   ________________________   ||\n"
           "||                              ||\n"
           "||        2.Retour Menu         ||\n"
           "||   ________________________   ||\n"
           "||                              ||\n"
           "||        3.Deconnexion         ||\n"
           "||                              ||\n"
           "\\\\==============================//");
    char touche = ' ';
    while (*vies<3) {
        if (kbhit()) {
            touche = getch();
        }
        switch (touche) {
            case '1':
                printf("\n\nBon courage...");
                sleep(3);
                Lvl1(vies, tempo, tempos,scoretempo,scorefinal, oiseaux, level);
                break;
            case '2':
                printf("\n\nRetour au menu");
                sleep(3);
                menu();
                break;
            case '3':
                printf("Deconnexion");
                leave();
            default:
                break;
        }
        touche = ' ';
    }}else { Lvl1(vies,tempo, tempos,scoretempo,scorefinal, oiseaux, level);}
}

void defaite2(char *tempo, char *tempos, int *vies,int *scoretempo,int *scorefinal, int *oiseaux, int *level){
    if (*vies<6){
        printf("//==============================\\\\\n"
               "||           *********          ||\n"
               "||      ---===Defaite===---     ||\n"
               "||           *********          ||\n"
               "||______________________________||\n"
               "||                              ||\n"
               "||     1.Retenter sa chance     ||\n"
               "||   ________________________   ||\n"
               "||                              ||\n"
               "||        2.Retour Menu         ||\n"
               "||   ________________________   ||\n"
               "||                              ||\n"
               "||        3.Deconnexion         ||\n"
               "||                              ||\n"
               "\\\\==============================//");
        char touche = ' ';
        while (*vies<6) {
        if (kbhit()) {
            touche = getch();
        }
        switch (touche) {
            case '1':
                printf("\n\nBon courage...");
                sleep(3);
                Lvl2(tempo, tempos,vies,scoretempo,scorefinal, oiseaux, level);
                break;
            case '2':
                printf("\n\nRetour au menu");
                sleep(3);
                menu();
                break;
            case '3':
                printf("Deconnexion");
                leave();
            default:
                break;
        }
        touche = ' ';
        }}else { Lvl2(tempo,tempos,vies,scoretempo,scorefinal, oiseaux, level);}

}


void defaite3(char *tempo, char *tempos, int *vies,int *scoretempo,int *scorefinal, int *oiseaux, int *level){
    if (*vies<9||*vies<3 ){
        printf("//==============================\\\\\n"
               "||           *********          ||\n"
               "||      ---===Defaite===---     ||\n"
               "||           *********          ||\n"
               "||______________________________||\n"
               "||                              ||\n"
               "||     1.Retenter sa chance     ||\n"
               "||   ________________________   ||\n"
               "||                              ||\n"
               "||        2.Retour Menu         ||\n"
               "||   ________________________   ||\n"
               "||                              ||\n"
               "||        3.Deconnexion         ||\n"
               "||                              ||\n"
               "\\\\==============================//");
        char touche = ' ';
        while (*vies<9||*vies<3) {
        if (kbhit()) {
            touche = getch();
        }
        switch (touche) {
            case '1':
                printf("\n\nBon courage...");
                sleep(3);
                Lvl3(tempo, tempos, vies,scoretempo,scorefinal, oiseaux, level);
                break;
            case '2':
                printf("\n\nRetour au menu");
                sleep(3);
                menu();
                break;
            case '3':
                printf("Deconnexion");
                leave();
            default:
                break;
        }
            touche = ' ';
        }}else { Lvl3(tempo,tempos,vies,scoretempo,scorefinal, oiseaux, level);}

}
void defaite4(char *tempo, char *tempos, int *vies,int *scoretempo,int *scorefinal, int *oiseaux, int *level){
    if (*vies<9||*vies<3 ){
        printf("//==============================\\\\\n"
               "||           *********          ||\n"
               "||      ---===Defaite===---     ||\n"
               "||           *********          ||\n"
               "||______________________________||\n"
               "||                              ||\n"
               "||     1.Retenter sa chance     ||\n"
               "||   ________________________   ||\n"
               "||                              ||\n"
               "||        2.Retour Menu         ||\n"
               "||   ________________________   ||\n"
               "||                              ||\n"
               "||        3.Deconnexion         ||\n"
               "||                              ||\n"
               "\\\\==============================//");
        char touche = ' ';
        while (*vies<12||*vies<3) {
        if (kbhit()) {
            touche = getch();
        }
        switch (touche) {
            case '1':
                printf("\n\nBon courage...");
                sleep(3);
                Lvl4(tempo, tempos, vies,scoretempo,scorefinal, oiseaux, level);
                break;
            case '2':
                printf("\n\nRetour au menu");
                sleep(3);
                menu();
                break;
            case '3':
                printf("Deconnexion");
                leave();
            default:
                break;
        }
            touche = ' ';
        }}else { Lvl4(tempo,tempos,vies,scoretempo,scorefinal, oiseaux, level);}

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
    printf("\n \t\t\t\t\t     ---=====Dommage!=====---");
    printf("\n\n\n\nRetour au menu...");
    sleep(5);
    menu();

}

void information(){
    printf("Les touches de jeux sont les suivantes:\n"
           "\n"
           "\"z\": avancer vers le haut\n"
           "\"s\": avancer vers le bas\n"
           "\"q\": avancer vers la gauche\n"
           "\"d\": avancer vers la droite\n"
           "\n"
           "\"p\": mettre le jeux en pause\n"
           "\"a\": permet de casser les blocks grises\n"
           "\"f\": permet de sauvegarder le jeu");
}


