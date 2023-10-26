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

void handleDir(char *direction);
int choix()
{

    char direction = ' ';

    while (1) // Game Loop
    {
        if (kbhit()) // Key is pressed
        {
            direction = getch();
        }
        handleDir(&direction);
    }

    return 0;
}

void handleDir(char *direction) {
    switch (*direction)
    {
        case '1':
            printf(""
                   "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t//======================================\\\\\n"
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
                   "\t\t\t\t\\\\======================================//");
            if (choix() == 0x10) {
                printf("Vous avez sélectionné l'option : Games Rules"); }
            break;
        case '2':
            printf(""
                   "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t//======================================\\\\\n"
                   "\t\t\t\t||      \t\t\t\t||\n"
                   "\t\t\t\t||\t     ~~Game Rules~~\t\t||\n"
                   "\t\t\t\t||\t\t\t\t\t||\n"
                   "\t\t\t\t||          ->  ~~New Game~~\t\t||\n"
                   "\t\t\t\t||\t \t\t\t\t||\n"
                   "\t\t\t\t||\t      ~~Load Game~~\t\t||\n"
                   "\t\t\t\t||\t\t\t\t\t||\n"
                   "\t\t\t\t||\t      ~~Password~~\t\t||\n"
                   "\t\t\t\t||\t\t\t\t\t||\n"
                   "\t\t\t\t||\t       ~~Score~~\t\t||\n"
                   "\t\t\t\t||\t\t \t\t\t||\n"
                   "\t\t\t\t||\t       ~~Leave~~\t\t||\n"
                   "\t\t\t\t||\t\t\t\t\t||\n"
                   "\t\t\t\t\\\\======================================//");
            break;
        case '3':
            printf(""
                   "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t//======================================\\\\\n"
                   "\t\t\t\t||      \t\t\t\t||\n"
                   "\t\t\t\t||\t     ~~Game Rules~~\t\t||\n"
                   "\t\t\t\t||\t\t\t\t\t||\n"
                   "\t\t\t\t||            ~~New Game~~\t\t||\n"
                   "\t\t\t\t||\t \t\t\t\t||\n"
                   "\t\t\t\t||\t     -> ~~Load Game~~\t\t||\n"
                   "\t\t\t\t||\t\t\t\t\t||\n"
                   "\t\t\t\t||\t      ~~Password~~\t\t||\n"
                   "\t\t\t\t||\t\t\t\t\t||\n"
                   "\t\t\t\t||\t       ~~Score~~\t\t||\n"
                   "\t\t\t\t||\t\t \t\t\t||\n"
                   "\t\t\t\t||\t       ~~Leave~~\t\t||\n"
                   "\t\t\t\t||\t\t\t\t\t||\n"
                   "\t\t\t\t\\\\======================================//");
            break;
        case '4':
            printf(""
                   "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t//======================================\\\\\n"
                   "\t\t\t\t||      \t\t\t\t||\n"
                   "\t\t\t\t||\t     ~~Game Rules~~\t\t||\n"
                   "\t\t\t\t||\t\t\t\t\t||\n"
                   "\t\t\t\t||            ~~New Game~~\t\t||\n"
                   "\t\t\t\t||\t \t\t\t\t||\n"
                   "\t\t\t\t||\t      ~~Load Game~~\t\t||\n"
                   "\t\t\t\t||\t\t\t\t\t||\n"
                   "\t\t\t\t||\t    ->  ~~Password~~\t\t||\n"
                   "\t\t\t\t||\t\t\t\t\t||\n"
                   "\t\t\t\t||\t       ~~Score~~\t\t||\n"
                   "\t\t\t\t||\t\t \t\t\t||\n"
                   "\t\t\t\t||\t       ~~Leave~~\t\t||\n"
                   "\t\t\t\t||\t\t\t\t\t||\n"
                   "\t\t\t\t\\\\======================================//");
            break;
        case '5':
            printf(""
                   "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t//======================================\\\\\n"
                   "\t\t\t\t||      \t\t\t\t||\n"
                   "\t\t\t\t||\t     ~~Game Rules~~\t\t||\n"
                   "\t\t\t\t||\t\t\t\t\t||\n"
                   "\t\t\t\t||            ~~New Game~~\t\t||\n"
                   "\t\t\t\t||\t \t\t\t\t||\n"
                   "\t\t\t\t||\t      ~~Load Game~~\t\t||\n"
                   "\t\t\t\t||\t\t\t\t\t||\n"
                   "\t\t\t\t||\t      ~~Password~~\t\t||\n"
                   "\t\t\t\t||\t\t\t\t\t||\n"
                   "\t\t\t\t||\t     ->  ~~Score~~\t\t||\n"
                   "\t\t\t\t||\t\t \t\t\t||\n"
                   "\t\t\t\t||\t       ~~Leave~~\t\t||\n"
                   "\t\t\t\t||\t\t\t\t\t||\n"
                   "\t\t\t\t\\\\======================================//");
            break;
        case '6':
            printf(""
                   "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t//======================================\\\\\n"
                   "\t\t\t\t||      \t\t\t\t||\n"
                   "\t\t\t\t||\t     ~~Game Rules~~\t\t||\n"
                   "\t\t\t\t||\t\t\t\t\t||\n"
                   "\t\t\t\t||            ~~New Game~~\t\t||\n"
                   "\t\t\t\t||\t \t\t\t\t||\n"
                   "\t\t\t\t||\t      ~~Load Game~~\t\t||\n"
                   "\t\t\t\t||\t\t\t\t\t||\n"
                   "\t\t\t\t||\t      ~~Password~~\t\t||\n"
                   "\t\t\t\t||\t\t\t\t\t||\n"
                   "\t\t\t\t||\t       ~~Score~~\t\t||\n"
                   "\t\t\t\t||\t\t \t\t\t||\n"
                   "\t\t\t\t||\t     ->  ~~Leave~~\t\t||\n"
                   "\t\t\t\t||\t\t\t\t\t||\n"
                   "\t\t\t\t\\\\======================================//");
            break;
        default:
            break;
    }

    *direction = ' '; // Reset direction
}