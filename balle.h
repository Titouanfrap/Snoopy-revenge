#include <stdio.h>
#include <unistd.h>  // Utilisé pour créer une petite pause entre les étapes du mouvement

int main() {
    int matrice[10][10] = {0};  // Matrice 10x10, initialement remplie de zéros
    int posX = 0;  // Position initiale de l'objet (colonne)
    int posY = 0;  // Position initiale de l'objet (ligne)
    int directionX = 1;  // Direction de déplacement en X (+1 pour droite, -1 pour gauche)
    int directionY = 1;  // Direction de déplacement en Y (+1 pour bas, -1 pour haut)

    while (1) {  // Boucle infinie pour le mouvement de l'objet
        // Effacer la position précédente de l'objet
        matrice[posY][posX] = 0;

        // Mettre à jour la position de l'objet en diagonale
        posX += directionX;
        posY += directionY;

        // Rebondir sur les bords de la matrice
        if (posX >= 10 || posX < 0) {
            directionX *= -1;  // Inverser la direction en X en cas de collision
            posX += directionX;  // Revenir à l'intérieur de la matrice
        }
        if (posY >= 10 || posY < 0) {
            directionY *= -1;  // Inverser la direction en Y en cas de collision
            posY += directionY;  // Revenir à l'intérieur de la matrice
        }

        // Mettre à jour la nouvelle position de l'objet
        matrice[posY][posX] = 1;

        // Afficher la matrice mise à jour
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (matrice[i][j] == 1) {
                    printf("O ");  // Afficher l'objet
                } else {
                    printf(". ");  // Afficher un espace vide
                }
            }
            printf("\n");
        }

        usleep(500000);  // Faire une pause de 500 millisecondes (0.5 seconde) entre les étapes du mouvement
        system("clear");  // Effacer la console (Linux/Unix, pour Windows, utilisez "cls")
    }

    return 0;
}
