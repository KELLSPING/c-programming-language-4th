/* ch05-exam-16 */
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(){
    float r, area;

    printf("input r:");
    scanf("%f", &r);

    area = 4 / 3 * M_PI * r * r * r;

    printf("the area is %f", area);

    return 0;
}