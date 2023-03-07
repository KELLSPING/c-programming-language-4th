/* ch09-exam-18 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int idx(int[]);

int main()
{
    int arr[SIZE] = {3, 5, 7, 9, 1};
    int idxOfMinValue = idx(arr);
    printf("idxOfMinValue:%d", idxOfMinValue);

    return 0;
}

int idx(int arr[])
{
    int temp = arr[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < temp)
        {
            temp = arr[i];
        }
    }

    for (int j = 0; j < SIZE; j++)
    {
        if (temp == arr[j])
        {
            return j;
        }
    }
}
