/* ch06-exam-17 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int inputNum;

    printf("input a num:");
    scanf("%d", &inputNum);

    inputNum > 90? printf("體重過重"):printf("不會過重");

    return 0;
}