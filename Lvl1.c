//#include "temps.h"
//#include "terrain.h"
//#include "FinNiveaux.h"
//#include <unistd.h>
//#include <stdio.h>
//#include <conio.h>
//#include "menu.h"
//#define player 0x850E8 //9                   //raccourcit avec le code hexa associé a Snoopy
//
//Time t = {120, 0, 0, 10, 1}; // raccourcit vers la structure du timer
//Balle balle = {5,5,1,1};
//Snoopy snoopy = {4, 4};
//
//void Lvl1() {
//    int dix=0;
//    char key;
//    char matrice[14][24];
//    int compteur = 0;
//    int game = 0;
//
//    tableau(matrice, &balle, &snoopy);
//    while(game != 1){
//        terrain(matrice);
//        BlocNiv1(matrice);
//        if (dix>=9){
//            timed(matrice, &t);
//            dix=0;
//        }
//        else {
//            dix++;
//        }
//        if (kbhit()){             //permet de lancer la boucle ssi une touche est pressée
//            key = getch();             // la touche pressée est récupérée et assignée a key
//            deplacement(matrice, &key, &snoopy, &compteur);                   // voir programme déplacement
//        }
//
//
//        mouvballe(matrice, &balle);
//        if (balle.x == snoopy.x && balle.y == snoopy.y) {
//            sleep(2);
//            GameOver();
//            sleep(5);
//            menu();
//            choix();
//        }
//
//        if (compteur == 4) {
//            game = 1;
//            sleep(2);
//            victoire();
//            choice();
//            sleep(100);
//        }
//
//
//        usleep(140000);           // on attend 1,57 sec , produit en croix avec le nombre de cases pour avoir 2 minutes
//        system("cls");    //clear de l'écran pour préparer l'affichage de la matrice actualisée
//    }
//}