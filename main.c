#include <stdio.h>
#include "dictionnaryGestion.h"
#include "treeGestion .h"
#include <time.h>



int main() {
    srand(time(NULL));
    char *file = "/Users/arthurcoelho/Documents/wordGenerator/dictionnaire_non_accentue.txt";
    Tree nom, ver, adj, adv;
    nom = createEmptyTree();
    ver = createEmptyTree();
    adj = createEmptyTree();
    adv = createEmptyTree();
    fillTrees(file, ver, adv, adj, nom);
    //printTree(nom.root);
    printf("%s ", pickRandomBaseForm(adj));
    printf("%s ", pickRandomBaseForm(nom));
    printf("%s ", pickRandomBaseForm(adv));
    printf("%s", pickRandomBaseForm(ver));
//    printTree(nom.root);
//    printTree(ver.root);
//    printTree(adj.root);
//    printTree(adj.root);



}
