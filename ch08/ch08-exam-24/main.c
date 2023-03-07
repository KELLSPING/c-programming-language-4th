/* ch08-exam-24 */
#include <stdio.h>
#include <stdlib.h>

void counter(void);

int main(void)
{
    counter();
    counter();

    return 0;
}

void counter(void)
{
    static int i=0;
    printf("counter() 已被呼叫 %d 次了...\n", ++i);
}