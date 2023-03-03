/* ch04-prog-22 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char ch;

    printf("請輸入一個字元:");
    ch = getche();
    printf("\n輸入的字元是:%c\n", ch);


    printf("請輸入一個字元:");
    ch = getch();
    printf("\n輸入的字元是:%c\n", ch);

    return 0;
}