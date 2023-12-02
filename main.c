#include "menu.h"
#include <conio.h>
#include "Sauvegarde.h"
#include "GameManagement/terrain.h"

int main() {


    int key;

//    if (kbhit()) {
//        key = getch();
//        if ( key == 's') {
//            saveGame()
//        }
//    }
   int scoretempo = 0;
   int scorefinal = 0;
   menu();
   choix(&scoretempo,&scorefinal);
}