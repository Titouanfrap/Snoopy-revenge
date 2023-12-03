#include "snoopy.h"
#include <stdio.h>
#include <unistd.h>
#include "../LevelManagement/FinNiveaux.h"

//A chaque fois on efface l'ancienne position de Snoopy et on assigne la nouvelle
void deplacement(char tab[14][24], char *key, Snoopy *snoopy, int *oiseaux, char *tempos) {

    tab[snoopy->x][snoopy->y] = 0;  // la position de Snoopy devient du void

    if (*tempos == 16 || *tempos == 17 || *tempos == 12) {
        tab[snoopy->x][snoopy->y] = *tempos;
    }
    //si le bloc est un tapis ou un TP on le sauvegarde

    switch (*key) { //on fais un switch avec la touche pour savoir ou déplacer
        case 'z':
            if (tab[snoopy->x-1][snoopy->y] != 5 ){ // on vérifie si le bloc sur lequel il veut aller n'est pas interdit
                if (tab[snoopy->x-1][snoopy->y] != 2 ){
                    if (tab[snoopy->x-1][snoopy->y] != 7 ){
                        if (tab[snoopy->x-1][snoopy->y] != 6 ){
                            if (tab[snoopy->x-1][snoopy->y] != 4 ){
                                if (tab[snoopy->x-1][snoopy->y] != 3 ){
                                    if (tab[snoopy->x-1][snoopy->y] != 13) {
                                        if (tab[snoopy->x-1][snoopy->y] != 1) {
                                            if(tab[snoopy->x-1][snoopy->y]!= 15){
            if (snoopy->x > 2) {
                snoopy->x--;
            }}}}}}}}}}
            if (tab[snoopy->x-1][snoopy->y] == 1) { //si le bloc de la prochaine direction est poussable on l'efface
                if (tab[snoopy->x-2][snoopy->y] == 0) { //et on le remplace par un bloc plus bas
                    if (snoopy->x > 2) {
                        snoopy->x--;
            }}}
            break;
        case 'q': //PAREIL QUE DESSUS
            if (tab[snoopy->x][snoopy->y-1] != 2){
                if (tab[snoopy->x][snoopy->y-1] != 5){
                    if (tab[snoopy->x][snoopy->y-1] != 6){
                        if (tab[snoopy->x][snoopy->y-1] != 7){
                            if (tab[snoopy->x][snoopy->y-1] != 4){
                                if (tab[snoopy->x][snoopy->y-1] != 3){
                                    if (tab[snoopy->x][snoopy->y-1] != 13) {
                                        if (tab[snoopy->x][snoopy->y-1] != 1) {
            if (snoopy->y > 2) {
                snoopy->y--;
            }}}}}}}}
            if (tab[snoopy->x][snoopy->y-1] == 1) {
               if (tab[snoopy->x][snoopy->y-2] == 0) {
                  if (snoopy->y > 2) {
                      snoopy->y--;
               }}}
            break;
        case 's'://PAREIL QUE DESSUS
            if (tab[snoopy->x+1][snoopy->y] != 5){
                if (tab[snoopy->x+1][snoopy->y] != 6){
                    if (tab[snoopy->x+1][snoopy->y] != 7){
                        if (tab[snoopy->x+1][snoopy->y] != 2){
                            if (tab[snoopy->x+1][snoopy->y] != 3){
                                if (tab[snoopy->x+1][snoopy->y] != 4){
                                    if (tab[snoopy->x+1][snoopy->y] != 13) {
                                        if (tab[snoopy->x+1][snoopy->y] != 1) {
            if (snoopy->x < 11) {
                snoopy->x++;
            }}}}}}}}}
            if (tab[snoopy->x+1][snoopy->y] == 1) {
                if (tab[snoopy->x+2][snoopy->y] == 0) {
                    if (snoopy->x < 11) {
                        snoopy->x++;
                }}}
            break;
        case 'd'://PAREIL QUE DESSUS
            if (tab[snoopy->x][snoopy->y+1] != 5) {
                if (tab[snoopy->x][snoopy->y+1] != 2) {
                    if (tab[snoopy->x][snoopy->y+1] != 3) {
                        if (tab[snoopy->x][snoopy->y+1] != 4) {
                            if (tab[snoopy->x][snoopy->y+1] != 7) {
                                if (tab[snoopy->x][snoopy->y+1] != 6) {
                                    if (tab[snoopy->x][snoopy->y+1] != 13) {
                                        if (tab[snoopy->x][snoopy->y+1] != 1) {
                if (snoopy->y < 21) {
                    snoopy->y++;
            }}}}}}}}}}
            if (tab[snoopy->x][snoopy->y+1] == 1) {
                if (tab[snoopy->x][snoopy->y+2] == 0) {
                    if (snoopy->y < 21) {
                        snoopy->y++;
                }}}
            break;
        case 'a'://si la case pressée est A alors si un des blocs alentours est cassable on le casse
            if (tab[snoopy->x+1][snoopy->y] == 13) {
                tab[snoopy->x+1][snoopy->y] = 0; // ici on le casse en le mettant en void
            }
            if (tab[snoopy->x-1][snoopy->y] == 13) {
                tab[snoopy->x-1][snoopy->y] = 0;
            }
            if (tab[snoopy->x][snoopy->y+1] == 13) {
                tab[snoopy->x][snoopy->y+1] = 0;
            }
            if (tab[snoopy->x][snoopy->y-1] == 13) {
                tab[snoopy->x][snoopy->y-1] = 0;
            }

    }
    *tempos = tab[snoopy->x][snoopy->y]; // on fait réapparaitre le bloc sur lequel Snoopy était



    if ( tab[snoopy->x][snoopy->y] == tab[2][12] && tab[snoopy->x][snoopy->y] == 17 ) {
        snoopy->y--;
    }//si Snoopy est sur ce bloc c'est un tapis  donc on le déplace de force

    if ( tab[snoopy->x][snoopy->y] == tab[2][11] && tab[snoopy->x][snoopy->y] == 17 ) {
        snoopy->y--;
    }//autre tapis

    if ( tab[snoopy->x][snoopy->y] == tab[2][10] && tab[snoopy->x][snoopy->y] == 17) {
        snoopy->x++;
    }//autre tapis

    if ( tab[snoopy->x][snoopy->y] == tab[3][10] && tab[snoopy->x][snoopy->y] == 17) {
        snoopy->y--;
    }//autre tapis
    tab[3][9] = 0;

    if ( tab[snoopy->x][snoopy->y] == tab[8][11] && tab[snoopy->x][snoopy->y] == 16 ) {
        snoopy->y++;
    }//autre tapis mais vers la droite

    if ( tab[snoopy->x][snoopy->y] == tab[8][12] && tab[snoopy->x][snoopy->y] == 16 ) {
        snoopy->x--;
    }//vers le bas

    if ( tab[snoopy->x][snoopy->y] == tab[7][12] && tab[snoopy->x][snoopy->y] == 16) {
        snoopy->y++;
    }//a droite

    if ( tab[snoopy->x][snoopy->y] == tab[7][13] && tab[snoopy->x][snoopy->y] == 16) {
        snoopy->y++;
    }//a droite
    tab[7][14] = 0;

    if (tab[snoopy->x][snoopy->y] == tab[11][10] && tab[snoopy->x][snoopy->y] == 12) {
        snoopy->y = snoopy->y-6;
    }//bloc de téléportation pour transporter directement Snoopy
    tab[11][4] = 0;


    if (tab[snoopy->x][snoopy->y] == 1){ //le bloc ou veut aller snoopy est poussable
        if (tab[snoopy->x+1][snoopy->y] == 0){ // et le bloc dessous est vide
            if (*key== 's'){ // si l'on descend
                tab[snoopy->x][snoopy->y] = 0; //le bloc poussable disparait
                tab[snoopy->x+1][snoopy->y] = 5; // et le bloc encore en dessous devient un bloc permanent
            }
        }
    }
    if (tab[snoopy->x][snoopy->y] == 1){//PAREIL pour le haut
        if (tab[snoopy->x-1][snoopy->y] == 0){
            if (*key== 'z'){
                tab[snoopy->x][snoopy->y] = 0;
                tab[snoopy->x-1][snoopy->y] = 5;
            }
        }
    }
    if (tab[snoopy->x][snoopy->y] == 1){//PAREIL pour la droite
        if (tab[snoopy->x][snoopy->y+1] == 0){
            if (*key== 'd'){
                tab[snoopy->x][snoopy->y] = 0;
                tab[snoopy->x][snoopy->y+1] = 5;
            }
        }
    }
    if (tab[snoopy->x][snoopy->y] == 1) {//PAREIL pour la gauche
        if (tab[snoopy->x][snoopy->y - 1] == 0) {
            if (*key == 'q') {
                tab[snoopy->x][snoopy->y] = 0;
                tab[snoopy->x][snoopy->y - 1] = 5;
            }
        }
    }
    if (tab[snoopy->x][snoopy->y] == 11) { // si la case sur laquelle vas snoopy est un oiseau
        (*oiseaux)++;                      // on incrémente le compteur d'oiseaux
    }

    if (tab[snoopy->x][snoopy->y]==19) { // si le bloc sur lequel va snoopy est piégé
        sleep(2);
        GameOver(); // il est mort
        sleep(4);
        system("cls"); // on efface l'écran
    }
    tab[snoopy->x][snoopy->y] = 9; //la nouvelle position de Snoopy devient un bloc Snoopy
}

