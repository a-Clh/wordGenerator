#ifndef WORDGENERATOR_STRUCT_H
#define WORDGENERATOR_STRUCT_H
#include <stdbool.h>


typedef struct node {
    char data;
    bool isWord;
    struct list* child;
}Node;


typedef struct cell {
    Node* data;
    struct cell* next;
}Cell;


typedef struct list {
    Cell* head;
}List;


typedef struct tree {
    Node* root;
}Tree;




#endif
