#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
#include "LevelManagement/Niveaux.h"
#include "Sauvegarde.h"
#include "LevelManagement/FinNiveaux.h"


void regles() { // cette fonction print un texte avec les regles lorqu'on l'appelle
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
           "\t\t\t-------==========REGLES DU JEU==========-------"
           "\n\n\nVous vous appretez a jouer a notre jeu : 'La revande de Snoopy' mais vous ne connaissez pas les regles ?\n\n"
           " Bien, une piqure de rappel s'impose...\nLa revanche de Snoopy est un jeu Gameboy sorti en 1990 qui met en"
           "scene Snoopy. Le fameux personnage de bande-dessine. \nC'est un jeu de reflexion de type \"puzzle game\" ou le "
           "but est de recuperer 4 oiseaux pour passer au niveau suivant, \nmais le chemin le long des niveaux est seme d'embuches...\n\n"
           "-------------------------------------------------------------------------------------------------------------------\n\n"
           " Comme dit precedemment le but de La revanche de Snoopy est de recuperer 4 oiseaux aux 4 coins du niveau dans un temps imparti.\n"
           "Le probleme est que ces 4 oiseaux ne sont pas si faciles a recuperer. Une balle rebondit constamment dans le niveau\n"
           "afin de freiner Snoopy dans sa quete. Mais ce n'est pas tout, d'autres pieges sont presents comme des\n"
           "teleporteurs que la balle peut emprunter ou des cases piegees, voir meme des blocs a pousser ou a\n"
           "casser... Ce jeu comporte 4 niveau de difficulte croissante. Pour chaque niveau vous possedez 3 vies\n"
           "afin de mener a bien votre mission. De plus, chaque niveau doit etre resolu en moin de 2 minutes.\n"
           "Si vous n'arrivez pas a reussir votre objectif dans le temps imparti vous perdez une vie et le temps repart.\n"
           "Vous recommencez bien evidemment a zero.\n"
           "Bien, je pense vous avoir tout dit, il ne me reste plus qu'a vous souhaiter bonne chance...");
}
void leave() { // cette fonction permet de print un une image de déconnexion lorsque le joueur quitte
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
           "          ---------============THE REVENGE OF SNOOPY============---------\n\n\n\n"
           "\t\t\t********** DECONNEXION **********\n"
           "\t\t\t*                                *\n"
           "\t\t\t*   Merci d'avoir joue a notre   *\n"
           "\t\t\t*       super jeu video !        *\n"
           "\t\t\t*                                *\n"
           "\t\t\t********** A bientot ! ***********\n");
    sleep(5);
    system("cls");
}
void password(char *tempo, char *tempos, int *vies,int *scoretempo,int *scorefinal, int *oiseaux, int *level) { // fonciton pour le mot de passe
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n  "
           "           ---------============THE REVENGE OF SNOOPY============---------\n\n\n\n"
           "Pour rappel, les differents mots de passe s'obtiennent en reussissant\n"
           "les niveaux de \" La revanche de Snoopy \".\n"
           "Par exemple, si vous parvenez a reussir le niveau 2, a la fin de celui-ci vous\n"
           "obtiendrez un mot de passe afin de le rejoindre sans passer par les niveaux inferieurs.\n"
           "Tout se merite dans ce jeux, bon courage !"
           "\n\n----------------------------------------------------------------------------------"
           "\n\n\n Veuillez entrer le mot de passe correspondant au niveau que vous voulez rejoindre :");

    char mot[100]; // on déclare un char de 100 de long pour stocker le mot de passe saisi par le joueur
    int tentatives = 0; // le joueur peut tester le mot de passe un nombre de fois limitées

    while (1) {
        scanf("%s", mot); // on scan le mot de passe du joueur et on le stocke dans mot


        if (strcmp(mot, "ecemaths") == 0) { //on compare le mot du joueur avec les différents mots de passe
            printf("Lancement du niveau 2...");
            system("cls");
            sleep(1);
            information(); // cette fonction affiche les touches avant le début du niveau
            sleep(7);
            printf("c'est parti !");
            Lvl2(tempo,tempos,vies,scoretempo,scorefinal, oiseaux, level);//le jeu se lance
        }
       else if (strcmp(mot, "ecejbtv") == 0) {//PAREIL
            printf("Lancement du niveau 3...\n");
            system("cls");
            sleep(1);
            information();
            sleep(5);
            printf("c'est parti !");
            Lvl3(tempo, tempos, vies,scoretempo,scorefinal, oiseaux, level);
        }
        else if (strcmp(mot, "champions") == 0) { //PAREIL
            printf("Lancement du niveau 4...\n");
            system("cls");
            sleep(1);
            information();
            sleep(7);
            printf("c'est parti !");
            Lvl4(tempo,tempos,vies,scoretempo,scorefinal,oiseaux, level);
        } else { // si le mot de passe ne correspond a aucuns mot de passe on lance cette boucle
            printf("Mot invalide\n"); // on affiche que le mot de passe est invalide
            tentatives++; // on incrément le nobre de tentatives

            if (tentatives == 5) { // si il atteint 5 tentatives ont le fait quitter le jeu
                printf("Trop de tentatives. Deconnexion force..\n");
                sleep(3);
                system("cls");
                break;// un break fait quitter la boucle en cours d'execution de force
            }
        }
    }
}

int menu() { // fonction menu qui permet au joueur de choisir ce qu'il veut faire au début du jeu

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

void handleDir(char *key, char *tempo, char *tempos,int *scoretempo,int *scorefinal, int *oiseaux, int *level);

void choix(int *scoretempo,int *scorefinal,int *oiseaux, int *level)// la fonction enregistre son choix
{
    char tempo;
    char tempos;
    char key = ' ';

    while (1)
    {
        if (kbhit()) {
            key = getch(); // key est la touche pressée par le joueur
        }
        handleDir(&key, &tempo, &tempos,scoretempo,scorefinal, oiseaux, level); // on lance Handldir pour utiliser la touche saisie
    }
}

void handleDir(char *key, char *tempo, char *tempos,int *scoretempo,int *scorefinal, int *oiseaux, int *level) {
    char tab[14][24];
    int vies=0;
    Snoopy *snoopy;
    Balle *balle;
    Time *t;

    switch (*key) { // on fait un switch case de la touche saisie
        case '1': // s'il vaut un on affiche les regles
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
        case '2':// s'il vaut 2 on lance la nouvelle partie
            printf("\n\n\n\n Voulez vous commencer une nouvelle partie ?"
                   "\n\t       Oui : y               Non : n");
            char confirmKey3 = getch();
            if (confirmKey3 == 'y') { //on demande toujours confiramtion, qu'on valide par un y
                system("cls");
                information();
                sleep(7);
                Lvl1(&vies, tempo, tempos,scoretempo,scorefinal, oiseaux, level); // le joueur commence donc par le niveau 1
            } else if (confirmKey3 == 'n') {
                menu();// s'il ne confirme pas il retourne au menu
            }
            break;
        case '3'://PAREIL
            printf("\n\n\n\n Voulez vous charger une partie ?"
                   "\n\t       Oui : y               Non : n\n\n\n\n");
            char confirmKey1 = getch();
            if (confirmKey1 == 'y') {
                loadGame(&snoopy, &balle, &t, oiseaux, &vies, scoretempo, tab, level, tempo, tempos, scorefinal);
            } else if (confirmKey1 == 'n') {
                menu();
            }
            break;
        case '4'://PAREIL
            printf("\n\n\n\n Voulez vous rejoindre un niveau a l'aide d'un mot de passe ?"
                   "\n\t       Oui : y               Non : n");
            char confirmKey2 = getch();
            if (confirmKey2 == 'y') {
                password(tempo,tempos, &vies,scoretempo,scorefinal, oiseaux, level);// on appele la fonction password por vérifier les mdp
            } else if (confirmKey2 == 'n') {
                menu();
            }
            break;
        case '5'://PAREIL
            printf("\n\n\n\n SCORE : %d",*scorefinal);

            break;
        case '6'://PAREIL
            printf("\n\n\n\n Voulez vous vraiment quitter le jeu ?"
                   "\n\t       Oui : y               Non : n");
            char confirmKey5 = getch();
            if (confirmKey5 == 'y') {
                leave();
            } else if (confirmKey5 == 'n') {
                menu();
            }
        default:
            break; //si jamais il ne presse aucune de ces touches on break
    }

    *key = ' '; // Reset direction

}




