/* ch11-exam-01 */
#include <stdio.h>
#include <stdlib.h>

struct data
{
    int num;
    char ch;
    double dist;
}aaa;

int main()
{
    printf("sizeof(aaa)=%llu\n", sizeof(aaa));

    return 0;
}