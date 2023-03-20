#include "./linklist.h"

NODE *searchNode(NODE *first, int item)
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
            if (node->data == item)
            {
                return node;
            }
            else
            {
                node = node->next;
            }
        }
        return NULL;
    }
}