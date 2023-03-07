/* ch09-exam-01 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = i+1;
        printf("arr[%d]=%d\n", i, arr[i]);
    }

    return 0;
}