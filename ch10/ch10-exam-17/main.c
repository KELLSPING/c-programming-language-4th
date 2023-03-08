/* ch10-exam-17 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
    int A[SIZE] = {74, 48, 30, 17, 62};
    int i, *ptrMax, *ptrMin;
    ptrMax = A;
    ptrMin = A;

    for (i = 0; i < SIZE; i++)
    {
        printf("A[%d] addr:%p\n", i, A+i);
        if (*ptrMax < *(A + i))
        {
            ptrMax = (A + i);
        }
        if (*ptrMin > *(A + i))
        {
            ptrMin = (A + i);
        }
    }

    printf("ptrMax address:%p\n", ptrMax);
    printf("ptrMin address:%p\n", ptrMin);

    return 0;
}
