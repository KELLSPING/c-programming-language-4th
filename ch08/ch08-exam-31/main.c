/* ch08-exam-31 */
#include <stdio.h>
#include <stdlib.h>

#define f(x) (4*(x)*(x) + 6*(x) -5)

int main(void)
{
    printf("f(1.0)=%f\n", f(1.0));
    printf("f(2.2)=%f\n", f(2.2));
    printf("f(3.14)=%f\n", f(3.14));

    return 0;
}
