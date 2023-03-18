/* ch13-prog-08 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;

    printf("argc 的值為 %d\n", argc);

    for (i = 0; i < argc; i++)
    {
        printf("argv[%d]=%s\n", i, argv[i]);
    }

    return 0;
}