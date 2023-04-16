/**
 * * ch14-exam-02
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 3

int main()
{
    int *ptr, *i;
    ptr = (int *)malloc(SIZE * sizeof(int));
    i = (int *)malloc(sizeof(int));

    *ptr = 12;
    *(ptr + 1) = 35;
    *(ptr + 2) = 140;

    for ((*i) = 0; (*i) < SIZE; (*i)++)
    {
        printf("*ptr + %d = %d\n", *i, *(ptr + (*i)));
    }

    free(ptr);
    free(i);

    return 0;
}