#include "./app.h"

NODE *createList(NODE *first, int *arr, int len)
{
    NODE *current, *previous;
    int i;
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
    return first;
}