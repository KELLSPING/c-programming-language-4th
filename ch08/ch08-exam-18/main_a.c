/* ch08-exam-18-a */
#include <stdio.h>
#include <stdlib.h>

int fib(int);

int main(void)
{
    printf("fib(1)=%d\n", fib(1));
    printf("fib(2)=%d\n", fib(2));
    printf("fib(5)=%d\n", fib(5));
    printf("fib(8)=%d\n", fib(8));
    printf("fib(10)=%d\n", fib(10));

    return 0;
}

int fib(int n)
{
    int i, total = 0, prev_1 = 1, prev_2 = 1;
    for (i = 1; i <= n; i++)
    {
        if (i == 1 || i == 2)
        {
            total = 1;
        }
        else
        {
            prev_1 = prev_2;
            prev_2 = total;
            total = prev_1 + prev_2;
        }
    }
    return total;
}
