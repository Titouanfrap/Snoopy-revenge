#include <stdio.h>
#include <conio.h>
#include "menu.h"
void victoire() {
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
           "||                              || \n"
           "\\\\==============================//");
}

void menuchoix(char *touche);

void choice()
{
    char touche = ' ';

    while (1)
    {
        if (kbhit()) {
            touche = getch();
        }
        menuchoix(&touche);
    }
}

void menuchoix(char *touche) {
    switch (*touche){
        case '1':
            printf("\n\nSauvegarde en cours...");
            break;
        case '2':
            printf("\n\nNiveau suivant");
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
    *touche = ' ';
}


void defaite(char *key){
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
    switch (*key){
        case 1:
            printf("Retenter sa chance");
            sleep(3);
        case 2:
            printf("Sauvegarde...");
            sleep(3);
        case 3:
            printf("Retour au Menu");
            sleep(3);
            menu();
        case 4:
            printf("Deconnexion");
            sleep (5);
            break;}

}



void GameOver() {
    system("cls");
    printf("   _____              __  __   ______      ____   __      __  ______   _____  \n");
    printf("  / ____|     /\\     |  \\/  | |  ____|    / __ \\  \\ \\    / / |  ____| |  __ \\ \n");
    printf(" | |  __     /  \\    | \\  / | | |__      | |  | |  \\ \\  / /  | |__    | |__) |\n");
    printf(" | | |_ |   / /\\ \\   | |\\/| | |  __|     | |  | |   \\ \\/ /   |  __|   |  _  / \n");
    printf(" | |__| |  / ____ \\  | |  | | | |____    | |__| |    \\  /    | |____  | | \\ \\ \n");
    printf("  \\_____| /_/    \\_\\ |_|  |_| |______|    \\____/      \\/     |______| |_|  \\_\\\n");
    printf("                                                                            \n");
    printf("                                                                            \n");

}
