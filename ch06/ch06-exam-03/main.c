/* ch06-exam-03 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inputNum;

    printf("input a num:");
    scanf("%d", &inputNum);

    if (inputNum%2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }

    return 0;
}