/* ch07-exam-10 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inputNum;
    float total=0;

    printf("input a number:");
    scanf("%d", &inputNum);

    for (int i = 1; i <= inputNum; i++)
    {
        total += (float) 1/i;
    }
    
    printf("total:%f", total);

    return 0;
}