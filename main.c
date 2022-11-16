#include <stdio.h>
#include "dictionnaryGestion.h"


int main() {
    char *file = "C:\\Users\\cassi\\Documents\\GitHub\\wordGenerator\\dictionnaire_non_accentue.txt";
    Tree tree;
    tree.root = createNode(0);



    fillTrees(file, tree, tree, tree, tree);

}
