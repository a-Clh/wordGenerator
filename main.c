#include "menu.h"


int main() {
    srand(time(NULL));
    //adresse du dictionnaire a changer
    char *file = "C:\\Users\\Coelho Arthur\\CLionProjects\\wordGenerator\\dictionnaire_non_accentue.txt";
    Tree nom, ver, adj, adv;
    nom = createEmptyTree();
    ver = createEmptyTree();
    adj = createEmptyTree();
    adv = createEmptyTree();
    fillTrees(file, ver, adv, adj, nom);

    mainMenu(ver, adv, adj, nom);


}
