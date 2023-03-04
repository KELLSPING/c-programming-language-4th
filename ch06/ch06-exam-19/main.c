/* ch06-exam-19 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a=4, b=6, larger;

    a>b ? (larger=a) : (larger=b);
    printf("%d 數值較大\n", larger);

    return 0;
}