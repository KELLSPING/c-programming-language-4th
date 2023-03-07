/* ch09-exam-08 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main()
{
    int arr[SIZE] = {10, 27, 18, 35, 0, -35, -3, -17, 20, 3};
    int i;
    int max = 0, min = 0;

    printf("arr[] 中的所有值 : ");

    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
        if (i < SIZE - 1 && arr[max] < arr[i + 1])
            max = i + 1;
        if (i < SIZE - 1 && arr[min] > arr[i + 1])
            min = i + 1;
    }

    printf("\narr[] 中最大值的索引值為 %d；最小為 %d。\n", max, min);

    return 0;
}