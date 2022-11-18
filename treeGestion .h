#ifndef WORDGENERATOR_TREEGESTION_H
#define WORDGENERATOR_TREEGESTION_H

#include <string.h>
#include <stdbool.h>
#include "dictionnaryGestion.h"
#include "struct.h"
#include <stdlib.h>
#include <time.h>

Tree createEmptyTree ();
List * createList();
Node * createNode(char data);
Cell * createCell();
void addNode(Node * , Node *);
void printTree(Node *);
bool foundInList(List * , char );
Node * addWord(char * , Tree * );
char* pickRandomBaseForm (Tree tree);


#endif
