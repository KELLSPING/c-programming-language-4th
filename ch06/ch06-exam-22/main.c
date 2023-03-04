/* ch06-exam-22 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char inputChar;

    printf("input a number:");
    inputChar = getchar();

    switch (inputChar)
    {
    case 'a':
    case 'A':
        printf("您輸入A");
        break;

    case 'b':
    case 'B':
        printf("您輸入B");
        break;

    default:
        printf("您輸入的不是A或B");
        break;
    }

    return 0;
}