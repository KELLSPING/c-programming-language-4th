/* ch09-exam-06-b */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {3, 5, 0, 3, 2, 4, 1, 6, 8, 5, 4, 3, 2};

    int len = (sizeof(arr) / sizeof(arr[0]));
    int counter = 0;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] >= 3 && arr[i] <= 6)
        {
            counter++;
        }
    }

    printf("counter:%d", counter);

    return 0;
}