#include <string.h>
#include <stdbool.h>
#include <string.h>
#include "dictionnaryGestion.h"
#include "struct.h"


int whatTree (char* token) {
//    if (strcmp(token, "Nom") == 0) return 1;
//    if (strcmp(token, "Adj") == 0) return 2;
//    if (strcmp(token, "Adv") == 0) return 3;
//    if (strcmp(token, "Ver") == 0) return 4;

    return (strcmp(token, "Nom") == 0) ? 1 : (strcmp(token, "Adj") == 0) ? 2 :
    (strcmp(token, "Adv") == 0) ? 3 : (strcmp(token, "Ver") == 0) ? 4 : 0;
}



void fillTrees(char* fileName, Tree ver, Tree adv, Tree adj, Tree nom){
    FILE *dico = NULL;
    char baseForm[26], flexForm[26], type[20];
    dico = fopen(fileName,"r");
    if (dico!=NULL){
        while (fscanf(dico,"%s\t%s\t%s",flexForm, baseForm, type) != EOF){
            // Returns first token
            char* token = strtok(type, ":");
//            printf("%s %d\n", token, whatTree(token));
            //select Tree then fill it
            switch (whatTree(token)) {
                case 1:
                    addWord(baseForm, &nom);
                    break;
                case 2:
                    addWord(baseForm, &adj);
                    break;
                case 3:
                    addWord(baseForm, &adv);
                    break;
                case 4:
                    addWord(baseForm, &ver);
                    break;
                default:
                    break;
            }
        }
    }
    fclose(dico);

}



