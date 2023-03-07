/* ch09-prog-21 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char name[15];

    puts("what's your name?");
    gets(name);
    puts("hi!");
    puts(name);
    puts("how are you?");

    return 0;
}
