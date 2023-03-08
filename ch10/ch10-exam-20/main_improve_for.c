/* ch10-exam-20-improve */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int length(char **);

int main()
{
    char *ptr[SIZE] = {"tom", "lily", "james lee"};

    int len = length(ptr);

    printf("len=%d", len);

    return 0;
}

int length(char **ptr)
{
    int counter = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; *(*(ptr + i) + j) != '\0'; j++)
        {
            printf("ptr addr=%p, value=%c\n", ptr + i + j, *(*(ptr + i) + j));
            counter++;
        }
        counter++;
    }

    return counter;
}

/*
    未包含字串結數字元「\0」，長度為16
    包含字串結數字元「\0」，長度為19
*/
