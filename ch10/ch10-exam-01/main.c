/* ch10-exam-01 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 12;
    int *ptr = &a;

    printf("a value:%d, a address:%p\n", a, &a);
    printf("ptr to value:%d, ptr to address:%p\n", *ptr, ptr);
    printf("ptr address:%p\n", &ptr);

    return 0;
}
