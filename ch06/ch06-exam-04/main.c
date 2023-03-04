/* ch06-exam-04 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int inputNum;

    printf("input a num:");
    scanf("%d", &inputNum);

    if (inputNum<0)
    {
        inputNum = abs(inputNum);
    }
    printf("abs(inputNum):%d", inputNum);

    return 0;
}