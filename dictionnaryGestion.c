#include <string.h>
#include <stdbool.h>
#include "dictionnaryGestion.h"
#include "struct.h"

void openFile(char* fileName){
    FILE *dico = NULL;
    printf("cc");
    char baseForm[26], flexForm[26], type[20];
    printf("cc");
    dico = fopen(fileName,"r");
    if (dico!=NULL){
        while (fscanf(dico,"%s\t%s\t%s",baseForm, flexForm, type) != EOF){
            printf("%s  %s  %s\n", baseForm, flexForm, type);
        }
    }


    fclose(dico);
}



