#include "treeGestion .h"


Node * addWord(char* word, Tree tree){

    Node *node = tree.root;
    Cell * cell;
    bool found = false;

    for(int i=0; i < strlen(word); i++) {
        cell = node->child->head;
        while (cell != NULL && found == false) {
            if (word[i] == cell->data->data) {
                found = true;
                node = cell->data;
            }
            cell = cell->next;
        }
        if (found == false) {
            cell = createCell();
            cell->data = createNode(word[i]);
            cell->data->isWord = (strlen(word) == i + 1) ? 1 : 0;
        }
    }
    return node;

}

Node * createNode(char data){
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->child = NULL;
    newNode->isWord = false;
    return newNode;
}

Cell *createCell(){
    Cell *newCell = malloc(sizeof(Cell));
    newCell->data = NULL;
    newCell->next =NULL;
    return newCell;
}