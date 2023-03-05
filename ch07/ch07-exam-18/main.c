/* ch07-exam-18 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int inputNum, total=0;
    do
    {
        printf("input a even number:");
        scanf("%d", &inputNum);
    } while (inputNum % 2 != 0);

    for (int i = 2; i <= inputNum; i+=2)    {
        total += i;
    }
    printf("total:%d", total);

    return 0;
}
