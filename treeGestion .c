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


Tree createEmptyTree () {
    Tree tree;
    tree.root = createNode(0);
    return tree;
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
    Cell * listCell = temp->child->head;

    for(int i = 0; i < strlen(word); i++) {
        if(!foundInList(temp->child, word[i])) {
            Node * node = createNode(word[i]);
            addNode(temp, node);
            temp = node;
        } else {
            while(listCell->data->data != word[i]) {
                listCell = listCell->next;
            }
            temp = listCell->data;
            listCell = temp->child->head;
        }
    }
    temp->isWord = 1;
    return temp;
}


void printTree(Node * node) {
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
}

Cell* searchInTree (Tree tree, char* word) {
    Cell * temp = tree.root->child->head;
    Cell * startOfSearchedWord;
    for(int i = 0; i < strlen(word); i++) {
        bool found = false;
        while(temp != NULL && !found) {
            if(temp->data->data == word[i]) {
                 found = true;
            }
            temp = temp->next;
        }
        if (!found) return NULL;
        if (i == 0) startOfSearchedWord = temp;
        temp = temp->data->child->head;
    }
    return startOfSearchedWord;
}

int countList (Cell* head) {
    int count = 0;
    while(head != NULL ) {
        count++;
        head = head->next;
    }
    return count;
}


char* pickRandomBaseForm (Tree tree) {
    Cell * temp = tree.root->child->head;
    int countFromHead = 0, countFromCurrent = 0;
    while (temp != NULL) {
        countFromHead =
    }
}

