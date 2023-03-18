/* ch13-prog-01 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1416

double area(double r);
double peri(double r);
void show(double r);

int main()
{
    printf("area(2.2)=%5.2f\n", area(2.2));
    printf("peri(1.4)=%5.2f\n", peri(1.4));
    return 0;
}

double area(double r)
{
    show(r);
    return (PI*pow(r, 2.0));
}

double peri(double r)
{
    show(r);
    return 2*PI*r;
}

void show(double r)
{
    printf("半徑為%5.2f, ",r);
}
