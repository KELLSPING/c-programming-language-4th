/* ch08-exam-20 */
#include <stdio.h>
#include <stdlib.h>

int sum(int);

int main(void)
{
    printf("sum(1)=%d\n", sum(1));
    printf("sum(2)=%d\n", sum(2));
    printf("sum(3)=%d\n", sum(3));
    printf("sum(4)=%d\n", sum(4));
    printf("sum(5)=%d\n", sum(5));

    return 0;
}

int sum(int n){
    if (n==1)
    {
        return 1;
    }
    return n + sum(n-1);
}
