#include "menu.h"

int main() { // c'est la fonction principale
   int scoretempo = 0;
   int scorefinal = 0;
   int oiseaux;
   int level; // on déclare des fonctions qui serviront partout

   menu(); // on appelle le menu pour choisir ce qu'on veut faire
   choix(&scoretempo,&scorefinal, &oiseaux, &level); // a partir du choix on l'envoi dans un des cas
}