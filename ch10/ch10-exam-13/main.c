/* ch10-exam-13 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[] = {14,23,32,62,19};
    int *p1, *p2;

    p1 = p2 = num;

    *p1++;
    printf("*p1=%d\n", *p1);

    (*p2)++;
    printf("*p2=%d\n", *p2);

    return 0;
}
