#include <stdio.h>
#include "dictionnaryGestion.h"


int main() {
    char *file = "C:\\Users\\Coelho Arthur\\CLionProjects\\wordGenerator\\dictionnaire_non_accentue.txt";
    Tree nom, ver, adj, adv;
    nom = ver = adj = adv = createEmptyTree();
    fillTrees(file, ver, adv, adj, nom);
//    printTree(nom.root);
//    printTree(ver.root);
//    printTree(adj.root);
//    printTree(adj.root);

}
