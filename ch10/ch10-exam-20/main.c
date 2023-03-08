/* ch10-exam-20 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int length(char *);

int main()
{
    int i, total = 0;
    char *ptr[SIZE] = {"tom", "lily", "james lee"};

    for (i = 0; i < SIZE; i++)
    {
        total += length(ptr[i]);
    }

    printf("total=%d", total);

    return 0;
}

int length(char *ptr2)
{
    int counter=0;

    while (*ptr2 != '\0')
    {
        counter++;
        ptr2++;
    }
    

    return counter + 1;
}

/*
    長度須包含字串結數字元「\0」
*/