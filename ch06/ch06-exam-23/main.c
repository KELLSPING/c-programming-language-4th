/* ch06-exam-23 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int inputNum;

    printf("input a number:");
    scanf("%d", &inputNum);

    switch (inputNum)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("今天要上班");
        break;

    case 6:
    case 7:
        printf("今天休息");
        break;

    default:
        printf("輸入錯誤");
        break;
    }

    return 0;
}