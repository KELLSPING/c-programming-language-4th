/* ch09-prog-20 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch='a';
    char str1[] = "a";
    char str2[] = "sweet home";

    printf("ch 佔了 %llu 個位元組\n", sizeof(ch));
    printf("str1 佔了 %llu 個位元組\n", sizeof(str1));
    printf("str2 佔了 %llu 個位元組\n", sizeof(str2));

    return 0;
}
