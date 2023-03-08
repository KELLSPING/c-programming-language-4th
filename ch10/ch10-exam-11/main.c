/* ch10-exam-11 */
#include <stdio.h>
#include <stdlib.h>

void add10(int *, int *);

int main()
{
    int a = 1, b = 2;
    int *ptrA, *ptrB;
    ptrA = &a;
    ptrB = &b;

    add10(ptrA, ptrB);

    printf("a:%d\n", a);
    printf("b:%d\n", b);

    return 0;
}

void add10(int *ptrA, int *ptrB)
{
    (*ptrA) += 10;
    (*ptrB) += 10;
}
