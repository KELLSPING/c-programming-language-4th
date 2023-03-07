/* ch09-exam-07 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
    float arr[SIZE], total = 0.0;

    for (int i = 0; i < SIZE; i++)
    {
        printf("input a float number:");
        scanf("%f", &arr[i]);
    }

    for (int j = 0; j < SIZE; j++)
    {
        total += arr[j];
    }
    printf("avg of total=%f\n", total/5);

    return 0;
}