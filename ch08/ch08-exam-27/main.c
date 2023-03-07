/* ch08-exam-27 */
#include <stdio.h>
#include <stdlib.h>

int fib_for(int);
int fib_recu(int);
int counter_for, counter_recu;

int main(void)
{
    for (int i = 1; i <= 30; i++)
    {
        counter_for = 0;
        counter_recu = 0;
        fib_for(i);
        printf("n = %2d, for 迴圈 %2d 次, ", i, counter_for);
        fib_recu(i);
        printf("遞迴 %d 次\n", counter_recu);
    }

    return 0;
}

int fib_for(int n)
{
    int i, total = 0, prev_1 = 1, prev_2 = 1;
    counter_for++;
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
    return counter_for;
}

int fib_recu(int n)
{
    counter_recu++;
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return (fib_recu(n - 1) + fib_recu(n - 2));
    }
}