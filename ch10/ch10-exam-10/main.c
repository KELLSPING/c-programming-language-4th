/* ch10-exam-10 */
#include <stdio.h>
#include <stdlib.h>

void count(int *);

int main()
{
    int num = 0;
    int *ptr = &num;

    count(ptr);
    count(ptr);
    count(ptr);

    printf("num:%d", num);

    return 0;
}

void count(int *ptr)
{
    (*ptr)++;
}
