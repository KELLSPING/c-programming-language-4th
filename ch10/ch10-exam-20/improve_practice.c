#include <stdio.h>

#define SIZE 3

void Func3(int (*)[SIZE]);

int main()
{
    int array[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    Func3(array);
    return 0;
}

// Func3(array);
void Func3(int (*a)[SIZE])
{
    int i, j;
    for (i = 0; i < SIZE; ++i)
    {
        for (j = 0; j < SIZE; ++j)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}