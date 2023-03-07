/* ch08-exam-28 */
#include <stdio.h>
#include <stdlib.h>

void counter(void);
int i=0;

int main(void)
{
    counter();
    counter();

    return 0;
}

void counter(void)
{
    printf("counter() 已被呼叫 %d 次了...\n", ++i);
}