#include <string.h>
#include <stdbool.h>
#include <string.h>
#include "dictionnaryGestion.h"
#include "struct.h"


int whatTree (char* token) {
    return strcmp(token, "Nom") ? 1 : strcmp(token, "Adj") ? 2 :
            strcmp(token, "Adv") ? 3 : strcmp(token, "Ver") ? : 4;
}



void fillTrees(char* fileName, Tree ver, Tree adv, Tree adj, Tree nom){
    FILE *dico = NULL;
    char baseForm[26], flexForm[26], type[20], *arg;
    dico = fopen(fileName,"r");
    if (dico!=NULL){
        while (fscanf(dico,"%s\t%s\t%s",flexForm, baseForm, type) != EOF){
            // Returns first token
            char* token = strtok(type, ":");
            //select Tree then fill it
            switch (whatTree(token)) {
                case 1:
                    addWord(baseForm, &nom);
                case 2:
                    addWord(baseForm, &adj);
                case 3:
                    addWord(baseForm, &adv);
                case 4:
                    addWord(baseForm, &ver);
            }
        }
    }
    printTree(nom.root);
    fclose(dico);

}



