/**
 * * ch14-exam-01
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 12;
    *ptr = pow(*ptr, 2);
    printf("ans:%d", *ptr);
    free(ptr);
    return 0;
}