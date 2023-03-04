/* ch06-exam-01 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("input char:");
    scanf("%c", &ch);

    if (ch <= '9' && ch >= '0')
    {
        printf("此字元式數字");
    }
    else if (ch >= 'A' && ch <= 'z')
    {
        printf("此字元是英文字母");
    }

    return 0;
}


/*
    ascii table

    char    decimal
    0       48
    9       57
    A       65
    Z       90
    a       97
    z       122
*/