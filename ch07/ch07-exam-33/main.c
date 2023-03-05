/* ch07-exam-33 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int inputNum, maxPrime=0;

    printf("input a number:");
    scanf("%d", &inputNum);

    for (int i = 2; i < inputNum; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if(i%j == 0){
                break;
            }
            maxPrime = i;
        }
    }
    printf("maxPrime:%d", maxPrime);

    return 0;
}
