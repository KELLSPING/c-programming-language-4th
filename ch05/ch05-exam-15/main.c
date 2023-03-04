/* ch05-exam-15 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    float height, width, area;

    printf("input height and width:");
    scanf("%f %f", &height, &width);

    area = height * width;

    printf("the area is %f", area);

    return 0;
}