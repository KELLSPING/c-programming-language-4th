#include "./linklist.h"

NODE *deleteNode(NODE *first, NODE *node)
{
    NODE *ptr = first;
    if (first == NULL)
    {
        printf("nothing to delete!\n");
        return NULL;
    }
    if (node == first)
    {
        first = first->next;
    }
    else
    {
        while (ptr->next != node)
        {
            ptr = ptr->next;
        }
        ptr->next = node->next;
    }
    free(node);
    printf("delete the node.\n");
    return first;
}