/* ch08-exam-25 */
#include <stdio.h>
#include <stdlib.h>

void counter(void);
int fib(int);

int main(void)
{
    printf("fib(5)=%d\n", fib(5));

    return 0;
}

void counter(void)
{
    static int i = 0;
    printf("counter() 已被呼叫 %d 次了...\n", ++i);
}

int fib(int n)
{
    counter();
    if (n < 3)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
