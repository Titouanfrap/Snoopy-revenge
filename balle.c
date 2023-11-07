#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int balle() {
    // Définir les dimensions de la console
    int consoleWidth = 20;
    int consoleHeight = 10;

    // Position initiale de la balle
    int ballX = consoleWidth / 5;
    int ballY = consoleHeight / 15;

    // Direction initiale de la balle (aléatoire)
    int ballDirX = rand() % 2 ? 1 : -1;
    int ballDirY = rand() % 2 ? 1 : -1;

    // Effacer l'écran
    system("cls");

    while (1) {
        // Dessiner la balle à sa position actuelle
        COORD coord;
        coord.X = ballX;
        coord.Y = ballY;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        printf("o");

        // Attendre un court instant
        Sleep(100);

        // Effacer la balle à sa position actuelle
        coord.X = ballX;
        coord.Y = ballY;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        printf(" ");

        // Mettre à jour la position de la balle
        ballX += ballDirX;
        ballY += ballDirY;

        // Vérifier les collisions avec les bords de la console
        if (ballX <= 0 || ballX >= consoleWidth - 1) {
            ballDirX *= -1; // Inverser la direction horizontale
        }

        if (ballY <= 0 || ballY >= consoleHeight - 1) {
            ballDirY *= -1; // Inverser la direction verticale
        }

        // Lire une touche (si une touche est appuyée, le programme se termine)
        if (_kbhit()) {
            break;
        }
    }

    return 0;
}

