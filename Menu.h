#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void regles() {
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
           "\t\t\t-------==========REGLES DU JEU==========-------"
           "\n\n\nVous vous appretez a jouer a notre jeu : 'La revande de Snoopy' mais vous ne connaissez pas les regles ?\n\n"
           " Bien une piqure de rappel s'impose donc.\nLa revanche de Snoopy est jeu Gameboy sortie en 1990 qui met en"
           "scene Snoopy. Le fameux personnage de bande-dessine. \nC'est un jeu de reflexion de type \"puzzle game\" ou le "
           "but est de recuperer 4 oiseaux pour passer au niveau suivant, \nmais le chemin le long des niveaux est seme d'embuches...\n\n"
           "-------------------------------------------------------------------------------------------------------------------\n\n"
           " Comme dit precedemment le but de La revanche de Snoopy est de recuperer 4 oiseaux aux 4 coins du niveau dans un temps imparti.\n"
           "Le probleme est que ces 4 oiseaux ne sont pas si faciles a recuperer. Une balle rebondit constamment dans le niveau\n"
           "afin de freiner Snoopy dans sa quete. Mais ce n'est pas tout, d'autres pieges sont presents comme des\n"
           "teleporteurs que la balle peut emprunter ou des cases piegees, voir meme des blocs a pousser ou a\n"
           "casser... Ce jeu comporte 4 niveau en difficulte croissante. Pour chaque niveau vous posseder 3 vies\n"
           "afin de mener a bien votre mission. De plus, chaque niveau doit etre resolu en moin de 120 secondes.\n"
           "Si vous n'arrivez reussir votre objectif dans le temps imparti vous perdez une vie et le temps repart.\n"
           "Bien, je pense vous avoir tout dit, il me reste plus qu'a vous souhaiter bonne chance...");
}

int menu() {

    system("cls");
    printf("\n\n\n"
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
                   "\n\t       Oui : y               Non : n");
            char confirmKey = getch();
            if (confirmKey == 'y') {
                regles();
                printf("\n\n\n\nAppuyez sur n'importe quelle touche pour revenir au menu principal.");
                getch();
                menu();
            }
            else if (confirmKey == 'n') {
                menu();
            }
            break;
        case '2':
            printf("\n\n\n\n Voulez vous commencer une nouvelle partie ?"
                   "\n\t       Oui : y               Non : n");
            break;
        case '3':
            printf("\n\n\n\n Voulez vous charger une partie ?"
                   "\n\t       Oui : y               Non : n");
            break;
        case '4':
            printf("\n\n\n\n Voulez vous rejoindre un niveau a l'aide d'un mot de passe ?"
                   "\n\t       Oui : y               Non : n");
            break;
        case '5':
            printf("\n\n\n\n Voulez vous afficher les scores ?"
                   "\n\t       Oui : y               Non : n");
            break;
        case '6':
            printf("\n\n\n\n Voulez vous quitter le jeu ?"
                   "\n\t       Oui : y               Non : n");
        default:
            break;
    }

    *key = ' '; // Reset direction

}

