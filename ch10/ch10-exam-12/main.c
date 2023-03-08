/* ch10-exam-12 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void square(int *);

int main()
{
    int arr[SIZE] = {1, 2, 3, 4, 5};

    square(arr);

    for (int i = 0; i < SIZE; i++)
    {
        printf("arr[%d]:%d\n", i, arr[i]);
    }

    return 0;
}

void square(int *ptr)
{
    for (int i = 0; i < SIZE; i++)
    {
        *(ptr + i) *= *(ptr + i);
    }
}
