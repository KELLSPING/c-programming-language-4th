#include "app.h"

NODE *insertNode(NODE *first, int targetNum, int insertNum)
{
    NODE *node = first, *newNode;
    newNode = (NODE *)malloc(sizeof(NODE));

    while (node != NULL)
    {
        if (node->data == targetNum)
        {
            newNode->data = insertNum;
            newNode->next = node->next;
            node->next = newNode;
        }
        node = node->next;
    }

    return first;
}