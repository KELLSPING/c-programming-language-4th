/* ch09-exam-20 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void count(int[]);

int main()
{
    int arr[SIZE] = {3, 5, 8, 9, 1};

    count(arr);

    return 0;
}

void count(int arr[])
{
    int oddCounter = 0, evenCounter = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCounter++;
        }
        else
        {
            oddCounter++;
        }
    }

    printf("oddCounter:%d, evenCounter:%d", oddCounter, evenCounter);
}
