/**
 *  * ch14-exam-08
 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int deleteElement(int *arr, int pos, int length);

int main(void)
{
    int length = 4, i;
    int arr[SIZE] = {12, 56, 37, 63};

    length = deleteElement(arr, 1, length);

    for (i = 0; i < length; i++)
        printf("%3d", arr[i]);

    printf("\n");

    system("pause");
    return 0;
}

int deleteElement(int *arr, int pos, int length)
{
    int i;

    for (i = pos; i < length - 1; i++)
        arr[i] = arr[i + 1];

    arr[length - 1] = 0;

    return length - 1;
}
