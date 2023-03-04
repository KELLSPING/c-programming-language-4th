/* ch06-exam-18 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int inputHeight, inputWeight;

    printf("input a num:");
    scanf("%d %d", &inputHeight, &inputWeight);

    (inputHeight<180 && inputWeight>90) ? printf("體重過重"):printf("不會過重");

    return 0;
}