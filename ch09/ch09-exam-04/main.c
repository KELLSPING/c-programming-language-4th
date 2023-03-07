/* ch09-exam-04 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int main()
{
    int arr[SIZE];

    

    for (int i = 0; i < SIZE; i++)
    {
        printf("input a number:");
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < SIZE; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}