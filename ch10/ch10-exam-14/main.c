/* ch10-exam-14 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
    int arr[SIZE] = {34, 76, 33, 42, 76};

    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = arr[i] + 10;
    }

    for (int j = 0; j < SIZE; j++)
    {
        printf("arr[%d]:%d\n", j, arr[j]);
    }

    return 0;
}
