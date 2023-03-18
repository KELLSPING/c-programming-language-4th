/* ch13-prog-04 */
#include <stdio.h>
#include <stdlib.h>

#define STR "Hello C Language.\n"

int main()
{
    #ifdef STR
        printf(STR);
    #else
        printf("STR 沒有被定義");
    #endif

    return 0;
}