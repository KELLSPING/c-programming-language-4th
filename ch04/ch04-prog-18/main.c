/* ch04-prog-18 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    char ch;

    printf("請輸入一個整數:");
    scanf("%d", &num);
    printf("請輸入一個字元:");
    scanf("%c", &ch);
    printf("num=%d, ascii of ch=%d\n", num, ch);

    return 0;
}