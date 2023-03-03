/* ch04-prog-21 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("請輸入一個字元:");
    ch = getchar();
    printf("輸入的字元是:");
    putchar(ch);
    putchar('\n');

    return 0;
}