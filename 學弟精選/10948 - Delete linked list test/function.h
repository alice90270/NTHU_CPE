#include <stdlib.h>
#include <ctype.h>

typedef struct _Node {
    int data;
    struct _Node *next;
} Node;

void deleteNode(Node **, int);
Node* createList();

