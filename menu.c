#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
#include "Niveaux.h"
#include "balle.h"

void regles() {
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
           "\t\t\t-------==========REGLES DU JEU==========-------"
           "\n\n\nVous vous appretez a jouer a notre jeu : 'La revande de Snoopy' mais vous ne connaissez pas les regles ?\n\n"
           " Bien, une piqure de rappel s'impose donc.\nLa revanche de Snoopy est jeu Gameboy sorti en 1990 qui met en"
           "scene Snoopy. Le fameux personnage de bande-dessine. \nC'est un jeu de reflexion de type \"puzzle game\" ou le "
           "but est de recuperer 4 oiseaux pour passer au niveau suivant, \nmais le chemin le long des niveaux est seme d'embuches...\n\n"
           "-------------------------------------------------------------------------------------------------------------------\n\n"
           " Comme dit precedemment le but de La revanche de Snoopy est de recuperer 4 oiseaux aux 4 coins du niveau dans un temps imparti.\n"
           "Le probleme est que ces 4 oiseaux ne sont pas si faciles a recuperer. Une balle rebondit constamment dans le niveau\n"
           "afin de freiner Snoopy dans sa quete. Mais ce n'est pas tout, d'autres pieges sont presents comme des\n"
           "teleporteurs que la balle peut emprunter ou des cases piegees, voir meme des blocs a pousser ou a\n"
           "casser... Ce jeu comporte 4 niveau en difficulte croissante. Pour chaque niveau vous possedez 3 vies\n"
           "afin de mener a bien votre mission. De plus, chaque niveau doit etre resolu en moin de 120 secondes.\n"
           "Si vous n'arrivez reussir votre objectif dans le temps imparti vous perdez une vie et le temps repart.\n"
           "Bien, je pense vous avoir tout dit, il ne me reste plus qu'a vous souhaiter bonne chance...");
}
void leave() {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
           "          ---------============THE REVENGE OF SNOOPY============---------\n\n\n\n"
           "\t\t\t********** DECONNEXION **********\n"
           "\t\t\t*                                *\n"
           "\t\t\t*   Merci d'avoir joue a notre   *\n"
           "\t\t\t*       super jeu video !        *\n"
           "\t\t\t*                                *\n"
           "\t\t\t********** A bientot ! ***********\n");
    sleep(3);
    system("cls");
}
void password(char *tempo, char *tempos, int *nb_executions,int *scoretempo,int *scorefinal) {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n  "
           "           ---------============THE REVENGE OF SNOOPY============---------\n\n\n\n"
           "Pour rappel, les differents mots de passe s'obtiennent en reussissant\n"
           "les niveaux de \" La revanche de Snoopy \".\n"
           "Par exemple, si vous parvenez a reussir le niveau 2, a la fin de celui-ci vous\n"
           "obtiendrez un mot de passe afin de le rejoindre sans passer par les niveaux inferieurs.\n"
           "Tout se merite dans ce jeux, bon courage !"
           "\n\n----------------------------------------------------------------------------------"
           "\n\n\n Veuillez entrer le mot de passe correspondant au niveau que vous voulez rejoindre :");

    char mot[100];
    int tentatives = 0;

    while (1) {
        scanf("%s", mot);


        if (strcmp(mot, "ecemaths") == 0) {
            printf("Lancement du niveau 2...");
            sleep(3);
            Lvl2(tempo,tempos,nb_executions,scoretempo,scorefinal);
        }
       else if (strcmp(mot, "ecejbtv") == 0) {
            printf("Lancement du niveau 3...\n");
            sleep(3);
            Lvl3(tempo, tempos, nb_executions,scoretempo,scorefinal);
        }
        else if (strcmp(mot, "champions") == 0) {
            printf("Lancement du niveau 4...\n");
            sleep(3);
            Lvl4(tempo,tempos,nb_executions,scoretempo,scorefinal);
        } else {
            printf("Mot invalide\n");
            tentatives++;

            if (tentatives == 5) {
                printf("Trop de tentatives. Deconnexion Force..\n");
                sleep(3);
                system("cls");
                break;
            }
        }
    }
}

int menu() {

    system("cls");
    printf("\n\n\n"
           "Balthazar.B        Titouan.F                                                 Marc.V         Mathieu.E\n\t"
           "                                      PRESENTENT...\n\t"

           "             ---------============THE REVENGE OF SNOOPY============---------\n\n\n\n");

    printf("\t\t\t\t//======================================\\\\\n"
           "\t\t\t\t||                                      ||\n"
           "\t\t\t\t||           ~~1.Games Rule~~           ||\n"
           "\t\t\t\t||                                      ||\n"
           "\t\t\t\t||           ~~ 2.New Game~~            ||\n"
           "\t\t\t\t||                                      ||\n"
           "\t\t\t\t||            ~~3.Load Game~~           ||\n"
           "\t\t\t\t||                                      ||\n"
           "\t\t\t\t||            ~~4.Password~~            ||\n"
           "\t\t\t\t||                                      ||\n"
           "\t\t\t\t||              ~~5.Score~~             ||\n"
           "\t\t\t\t||                                      ||\n"
           "\t\t\t\t||          ~~6.Deconnexion~~           ||\n"
           "\t\t\t\t||                                      ||\n"
         "\t\t\t\t\\\\======================================//\n\n"
           "Tapez un nombre entre 1 et 6 pour selectioner une action :");
}

void handleDir(char *key, char *tempo, char *tempos,int *scoretempo,int *scorefinal);
void choix(int *scoretempo,int *scorefinal)
{
    char tempo;
    char tempos;
    char key = ' ';

    while (1)
    {
        if (kbhit()) {
            key = getch();
        }
        handleDir(&key, &tempo, &tempos,scoretempo,scorefinal);
    }
}

void handleDir(char *key, char *tempo, char *tempos,int *scoretempo,int *scorefinal) {
    int nb_executions=0;
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
            char confirmKey3 = getch();
            if (confirmKey3 == 'y') {
                Lvl1(&nb_executions, tempo, tempos,scoretempo,scorefinal);
            } else if (confirmKey3 == 'n') {
                menu();
            }
            break;
        case '3':
            printf("\n\n\n\n Voulez vous charger une partie ?"
                   "\n\t       Oui : y               Non : n");
            break;
        case '4':
            printf("\n\n\n\n Voulez vous rejoindre un niveau a l'aide d'un mot de passe ?"
                   "\n\t       Oui : y               Non : n");
            char confirmKey2 = getch();
            if (confirmKey2 == 'y') {
                password(tempo,tempos, &nb_executions,scoretempo,scorefinal);
            } else if (confirmKey2 == 'n') {
                menu();
            }
            break;
        case '5':
            printf("\n\n\n\n SCORE : %d",*scorefinal);

            break;
        case '6':
            printf("\n\n\n\n Voulez vous vraiment quitter le jeu ?"
                   "\n\t       Oui : y               Non : n");
            char confirmKey5 = getch();
            if (confirmKey5 == 'y') {
                leave();
            } else if (confirmKey5 == 'n') {
                menu();
            }
        default:
            break;
    }

    *key = ' '; // Reset direction

}




