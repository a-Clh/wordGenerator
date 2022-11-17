#include <stdio.h>
#include <time.h>
#include "dictionnaryGestion.h"


int main() {
    char *file = "C:\\Users\\cassi\\Documents\\GitHub\\wordGenerator\\dictionnaire_non_accentue.txt";
    Tree nom, ver, adj, adv;
    srand(time(NULL));
    nom = createEmptyTree(0);
    ver = createEmptyTree(0);
    adj = createEmptyTree(0);
    adv = createEmptyTree(0);
    fillTrees(file, ver, adv, adj, nom);
    printTree(nom.root);
//    printTree(ver.root);
//    printTree(adj.root);
//    printTree(adj.root);

}
