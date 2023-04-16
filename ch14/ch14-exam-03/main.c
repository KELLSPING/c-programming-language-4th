/**
 * * ch14-exam-03
 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int main()
{
    int i;
    double *ptr = (double *)malloc(SIZE * sizeof(double));
    double avg, total = 0.0;

    for (i = 0; i < SIZE; i++)
    {
        printf("input a double:");
        scanf("%lf", ptr+i);
        total += *(ptr+i);
    }
    
    for (i = 0; i < SIZE; i++)
    {
        printf("%lf\n", *(ptr+i));
    }
    
    printf("total:%lf\n", total);

    avg = total / 3;
    printf("avg:%lf\n", avg);

    free(ptr);

    return 0;
}