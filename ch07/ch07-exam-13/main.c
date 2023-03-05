/* ch07-exam-13 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inputNum, total=0;
    printf("input a even number:");
    scanf("%d", &inputNum);

    while (inputNum % 2 != 0)
    {
        printf("input a even number:");
        scanf("%d", &inputNum);
    }

    for (int i = 2; i <= inputNum; i+=2)
    {
        total += i;
    }
    
    printf("total:%d", total);

    return 0;
}