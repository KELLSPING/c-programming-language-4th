/* ch09-exam-19 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
#define SQUARE(X) ((X) * (X))

void square(int[]);

int main()
{
    int arr[SIZE] = {3, 5, 7, 9, 1};
    square(arr);

    for (int i = 0; i < SIZE; i++)
    {
        printf("arr[%d]:%d\n", i, arr[i]);
    }

    return 0;
}

void square(int arr[])
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = SQUARE(arr[i]);
    }
}
