#include "./app.h"

void printList(NODE *first)
{
    NODE *node = first;

    if (node == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        while (node != NULL)
        {
            printf("%3d,", node->data);
            node = node->next;
        }
        printf("\n");
    }
}