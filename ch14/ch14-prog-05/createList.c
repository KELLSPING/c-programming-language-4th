#include "./linklist.h"

NODE *createList(int *arr, int len)
{
    int i;
    NODE *current, *first, *previous;

    for (i = 0; i < len; i++)
    {
        current = (NODE *)malloc(sizeof(NODE));
        current->data = arr[i];
        if (i == 0)
        {
            first = current;
        }
        else
        {
            previous->next = current;
        }
        current->next = NULL;
        previous = current;
    }
    printf("create the linked list.\n");
    return first;
}