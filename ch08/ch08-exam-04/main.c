/* ch08-exam-04 */
#include <stdio.h>
#include <stdlib.h>

double square(double);

int main(void)
{
    printf("4.0*4.0 = %lf", square(4.0));

    return 0;
}

double square(double x){
    return x*x;
}
