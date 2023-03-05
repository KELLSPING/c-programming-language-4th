/* ch07-exam-32 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int inputNum;

    printf("input a number:");
    scanf("%d", &inputNum);

    for (int i = 2; i <= inputNum/2; i++)
    {
        if (inputNum%i == 0)
        {
            printf("此數不是質數");
            break;
        }
    }
    printf("此數是質數");

    return 0;
}
