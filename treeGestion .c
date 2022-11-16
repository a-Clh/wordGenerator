#include "treeGestion .h"


List * createList(){
    List *newList = malloc(sizeof(List));
    newList->head = NULL;
    return newList;
}



Node * createNode(char data){
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->child = createList();
    newNode->isWord = false;
    return newNode;
}

Cell *createCell(){
    Cell *newCell = malloc(sizeof(Cell));
    newCell->data = NULL;
    newCell->next =NULL;
    return newCell;
}

void addNode(Node * cellNode, Node * child) {
    Cell * cell = malloc(sizeof(Cell));
    cell->data = child;
    cell->next = NULL;
    if (cellNode->child->head == NULL) {
        cellNode->child->head = cell;
    } else {
        Cell * temp = cellNode->child->head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = cell;

    }
}


bool foundInList (List * nodelist, char data) {
    Cell * head = nodelist->head;
    while(head != NULL) {
        if(head->data->data == data) {
            return true;
        }
        head = head->next;
    }
    return false;
}


Node * addWord(char * word, Tree * tree) {
    Node * temp = tree->root;
    Cell * tempNodelist = temp->child->head;

    for(int i = 0; i < strlen(word); i++) {
        if(!isInList(temp->child, word[i])) {
            Node * node = createNode(word[i]);
            addNode(temp, node);
            temp = node;
        } else {
            while(tempNodelist->data->data != word[i]) {
                tempNodelist = tempNodelist->next;
            }
            temp = tempNodelist->data;
            tempNodelist = temp->child->head;
        }
    }
    temp->isWord = 1;
    return temp;
}

/*void printTree(Node * node) {
    if(node->data != ' ') {
        printf("%c", node->data);
    }
    int doBracket = 0;
    Cell * temp = node->child->head;
    if (temp != NULL) {
        if (temp->next != NULL) {
            doBracket = 1;
            printf("[");
        }
        while (temp != NULL) {
            printTree(temp->data);
            temp = temp->next;
            if (temp != NULL) {
                printf(", ");
            }
        }
        if (doBracket) {
            printf("]");
        }
    }
}*\

