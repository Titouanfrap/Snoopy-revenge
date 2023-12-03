#include "menu.h"
#include <conio.h>

int main() {
   int scoretempo = 0;
   int scorefinal = 0;
   int oiseaux;
   int level;

   menu();
   choix(&scoretempo,&scorefinal, &oiseaux, &level);
}