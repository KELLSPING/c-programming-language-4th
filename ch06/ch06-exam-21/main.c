/* ch06-exam-21 */
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
        printf("您輸入a");
        break;

    case 'b':
        printf("您輸入b");
        break;

    default:
        printf("您輸入的不是a或b");
        break;
    }

    return 0;
}