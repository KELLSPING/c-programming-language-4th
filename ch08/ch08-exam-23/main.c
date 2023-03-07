/* ch08-exam-23 */
#include <stdio.h>
#include <stdlib.h>

int func(int);

int main(void)
{
    for (int i = 0; i <= 5; i++)
    {
        printf("func(%d)=%d\n", i, func(i));
    }

    return 0;
}

int func(int n)
{
    if (n==0)
    {
        return 3;
    }
    return 2*func(n-1)-5;
}
