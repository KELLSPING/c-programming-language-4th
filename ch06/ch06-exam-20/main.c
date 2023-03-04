/* ch06-exam-20 */
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
        printf("1:春天");
        break;

    case 2:
        printf("2:夏天");
        break;

    case 3:
        printf("3:秋天");
        break;

    case 4:
        printf("4:冬天");
        break;

    default:
        printf("輸入錯誤");
        break;
    }

    return 0;
}