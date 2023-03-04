/* ch06-exam-02 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inputNum;

    printf("input a num:");
    scanf("%d", &inputNum);

    if (inputNum > 0)
    {
        printf(">0");
    }
    else if (inputNum < 0)
    {
        printf("<0");
    }
    else
    {
        printf("==0");
    }

    return 0;
}