/* ch09-exam-17 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int min(int[]);

int main()
{
    int arr[SIZE] = {3, 5, 7, 9, 1};
    int minValue = min(arr);
    printf("minValue:%d", minValue);

    return 0;
}

int min(int arr[])
{
    int temp = arr[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < temp)
        {
            temp = arr[i];
        }
    }
    return temp;
}
