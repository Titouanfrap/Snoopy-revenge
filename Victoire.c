#include <stdio.h>
#include <conio.h>
#include "menu.h"
void victoire(char *key) {
    system("cls");
    choix();
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
//    switch (*key) {
//        case'1':
//            printf("\n\n\n\n Sauvegarde en cours");
//        case '2':
//            printf("\n\n\n\n Passer au niveau Suivant?"
//                   "\n\t       Oui : y               Non : n");
//            char confirmKey = getch();
//            if (confirmKey == 'y') {
//            }
//            else if (confirmKey == 'n') {
//                return;
//        case '3':
//             printf("\n\n\n\n Retour Menu ?"
//             "\n\t       Oui : y               Non : n");
//             char confirmKey = getch();
//              if (confirmKey == 'y') {
//                menu();}
//               else if (confirmKey == 'n') {
//                    return;    }
//
//        case '4':
//        printf("\n\n\n\n Retour Menu ?"
//               "\n\t       Oui : y               Non : n");
//         char confirmKey = getch();
//                if (confirmKey == 'y') {
//                }
//                else if (confirmKey == 'n') {
//                    return;
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
}