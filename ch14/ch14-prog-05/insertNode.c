#include "./linklist.h"

void insertNode(NODE *node, int item)
{
    NODE *newNode;
    newNode = (NODE *)malloc(sizeof(NODE));
    newNode->data = item;
    newNode->next = node->next;
    node->next = newNode;
    printf("insert the node.\n");
}