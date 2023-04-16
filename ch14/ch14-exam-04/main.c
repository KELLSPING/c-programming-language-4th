/**
 * * ch14-exam-04
 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int main()
{
    int i;
    double *ptr, sum = 0;

    for (i = 0; i < SIZE; i++)
    {
        
        ptr = (double *)malloc(sizeof(double));
        printf("input a double:");
        scanf("%lf", ptr);
        sum += *ptr;
        getchar(); // 清除 buffer
        free(ptr);
    }

    printf("Sum = %.2lf\nAverage = %.2lf\n", sum, sum / 3);

    return 0;
}