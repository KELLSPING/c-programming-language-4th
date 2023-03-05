/* ch07-exam-15 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char ch;
    ch = getch();

    while (ch != 3)
    {
        ch = getch();
        printf("ascii of ch=%d\n", ch);
    }
    printf("您已按了ctrl+c...\n");

    return 0;
}

/*
    ascii
            dec     char    description
    ctrl+c  3       ETX     end of text
    ctrl+q  17      DCI     device control 1

    因 vscode 中，按不出 ctrl+q ，故將題目更改為 ctrl+c
*/