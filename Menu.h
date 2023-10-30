#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int menu() {

    system("cls");
    printf(""
           "Balthazar.B        Titouan.F                                  Marc.V              Mathieu.E\n\t"
           "                                      PRESENTENT...\n\t"

           "             ---------============THE REVENGE OF SNOOPY============---------\n\n\n\n");

    printf(""
           "\t\t\t\t//======================================\\\\\n"
           "\t\t\t\t||      \t\t\t\t||\n"
           "\t\t\t\t||\t    -> ~~Game Rules~~\t\t||\n"
           "\t\t\t\t||\t\t\t\t\t||\n"
           "\t\t\t\t||            ~~New Game~~\t\t||\n"
           "\t\t\t\t||\t \t\t\t\t||\n"
           "\t\t\t\t||\t      ~~Load Game~~\t\t||\n"
           "\t\t\t\t||\t\t\t\t\t||\n"
           "\t\t\t\t||\t      ~~Password~~\t\t||\n"
           "\t\t\t\t||\t\t\t\t\t||\n"
           "\t\t\t\t||\t       ~~Score~~\t\t||\n"
           "\t\t\t\t||\t\t \t\t\t||\n"
           "\t\t\t\t||\t       ~~Leave~~\t\t||\n"
           "\t\t\t\t||\t\t\t\t\t||\n"
           "\t\t\t\t\\\\======================================//"
           "\n\n\nSelectionnez votre choix grace a touche allant de 1 a 6");
}

void handleDir(char *key);
int choix()
{
    char key = ' ';

    while (1)
    {
        if (kbhit()) {
            key = getch();
        }
        handleDir(&key);
    }

    return 0;
}

void handleDir(char *key) {
    switch (*key) {
        case '1':
            printf("\n\n\n\n Voulez vous lire les regles du jeu ?"
                   "\n\t       Oui : y               Non : 8");
        case '2':
            printf("\n\n\n\n Voulez vous commencer une nouvelle partie ?"
                   "\n\t       Oui : 1               Non : 2");
            break;
        case '3':
            printf("\n\n\n\n Voulez vous charger une partie ?"
                   "\n\t       Oui : 1               Non : 2");
            break;
        case '4':
            printf("\n\n\n\n Voulez vous rejoindre un niveau a l'aide d'un mot de passe ?"
                   "\n\t       Oui : 1               Non : 2");
            break;
        case '5':
            printf("\n\n\n\n Voulez vous afficher les scores ?"
                   "\n\t       Oui : 1               Non : 2");
            break;
        case '6':
            printf("\n\n\n\n Voulez vous quitter le jeu ?"
                   "\n\t       Oui : 1               Non : 2");
        default:
            break;
    }

    *key = ' '; // Reset direction

}

