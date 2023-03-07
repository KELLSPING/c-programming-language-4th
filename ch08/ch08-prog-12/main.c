/* ch08-prog-12 */
#include <stdio.h>
#include <stdlib.h>

int fib(int);

int main(void)
{
    int inputNum;
    printf("input a number:");
    scanf("%d", &inputNum);

    for (int i = 1; i <= inputNum; i++)
    {
        printf("fib(%d)=%d\n", i, fib(i));
    }

    return 0;
}

int fib(int n)
{
    if (n < 3)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
