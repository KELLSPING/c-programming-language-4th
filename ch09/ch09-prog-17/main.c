/* ch09-prog-17 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void show(int a[]), bubble(int a[]);

int main(void)
{
    int data[SIZE] = {26, 81, 7, 63, 5};

    printf("排序前...\n");
    show(data);

    bubble(data);

    printf("排序後...\n");
    show(data);

    return 0;
}

void show(int a[])
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubble(int a[])
{
    int i, j, temp;
    for (i = 0; i < SIZE; i++)
    {
        for (j = i + 1; j < SIZE; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}
