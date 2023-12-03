#include "balle.h"

void mouvballe(char tab[14][24], Balle *balle, char *tempo) { //déclaration de la fonction de la balle

    tab[balle->x][balle->y] = 0; //la position de la balle est remplacée par du void
    if (*tempo != 0) {
        tab[balle->x][balle->y] = *tempo; // si cette position etait avant un bloc on le replace
    }

    balle->x += balle->dx;
    balle->y += balle->dy;  // on définit ici la position et direction de la balle
    if (balle->x < 3 || balle->x > 10) {
        balle->dx = -balle->dx;  // si elle touche un murs vertical la direction en x change
    }
    if (balle->y < 3 || balle->y >= 21) { // si elle touche l'un des murs horizontal la direction en y change
        balle->dy = -balle->dy;
    }

    *tempo = tab[balle->x][balle->y]; // on enregistre le bloc sur lequel la balle va aller

    tab[balle->x][balle->y] = 10; // on remplace ce bloc par la balle

}
