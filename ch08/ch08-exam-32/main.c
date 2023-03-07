/* ch08-exam-32 */
#include <stdio.h>
#include <stdlib.h>

#define f(x) ((x)*(x)*(x))

int main(void)
{
    printf("5*5*5=%d\n", f(5));
    printf("(2.4)*(2.4)*(2.4)=%f\n", f(2.4));

    return 0;
}
