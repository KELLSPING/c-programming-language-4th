/* ch08-exam-19 */
#include <stdio.h>
#include <stdlib.h>

double rpower(double, int);

int main(void)
{
    printf("(2.0)^3 = %lf\n", rpower(2.0, 3));
    printf("(3.0)^3 = %lf\n", rpower(3.0, 3));
    printf("(5.0)^3 = %lf\n", rpower(5.0, 3));

    return 0;
}

double rpower(double b, int n){
    if (n==0)
    {
        return 1;
    }
    return b*rpower(b, n-1);
}
