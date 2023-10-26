#include <stdio.h>
#include <unistd.h>

int decompte() {
    int minutes = 2;
    int seconds = 0;

    for (; minutes >= 0; minutes--) {
        for (; seconds >= 0; seconds--) {
            printf("%02d:%02d\n", minutes, seconds);
            sleep(1);
        }
        seconds = 59;
    }
    printf("Fin du jeux\n");

    return 0;
}