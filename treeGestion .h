//
// Created by cassie on 16/11/2022.
//

#ifndef WORDGENERATOR_TREEGESTION_H
#define WORDGENERATOR_TREEGESTION_H

#include <string.h>
#include <stdbool.h>
#include "dictionnaryGestion.h"
#include "struct.h"
#include <stdlib.h>

List * createList();
Node * createNode(char data);
Cell * createCell();
void addNode(Node * , Node *)
void printTree(Node *);
bool foundInList(List * , char );
Node * addWord(char * , Tree * )



#endif //WORDGENERATOR_TREEGESTION_H
