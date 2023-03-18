/* ch13-prog-05 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 15

int main()
{
    #ifdef SIZE
        #if SIZE>20
            char str[SIZE] = "Hello C Language.";
        #else
            char *str = "Size too small.";
        #endif
    #else
    char *str = "size not defined.";
    #endif

    printf("%s\n", str);

    return 0;
}