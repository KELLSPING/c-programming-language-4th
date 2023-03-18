/* ch13-exam-10 */
#include <stdio.h>
#include <stdlib.h>

#define STR "Hello C Language.\n"

int main()
{
    #ifndef STR
        printf("STR 沒有被定義");
        
    #else
        printf(STR);
    #endif

    return 0;
}