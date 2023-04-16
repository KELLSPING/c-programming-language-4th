#include "./app.h"

int insertElement(int *arr, int item, int pos, int length)
{
    int arr2[length + 1];
    for (int i = 0; i < length + 1; i++)
    {
        if (i == pos)
        {
            arr2[i] = item;
        }
        else if (i < pos)
        {
            arr2[i] = arr[i];
        }
        else if (i > pos)
        {
            arr2[i] = arr[i-1];
        }
        printf("arr2[%d]=%d\n", i, arr2[i]);
    }

    return sizeof(arr2)/sizeof(arr2[0]);
}