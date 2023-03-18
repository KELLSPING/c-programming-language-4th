/* ch13-exam-11 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 15

int main()
{
#if SIZE < 10
    printf("SIZE<10");
#elif SIZE >= 10 && SIZE <= 20
    printf("WELCOME\n");
#endif

    printf("END\n");

    return 0;
}