#include "./linklist.h"

void freeList(NODE *first)
{
    NODE *current, *temp;
    current = first;
    while (current != NULL)
    {
        temp = current;
        current = current->next;
        free(temp);
    }
    printf("free all nodes.\n");
}