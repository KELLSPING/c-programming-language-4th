/* ch10-exam-08 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num = 16.4f;
    float *ptr = &num;

    printf("num addr:%p\n", &num);
    printf("ptr to value:%f, ptr to address:%p\n", *ptr, ptr);
    printf("ptr address:%p\n", &ptr);

    return 0;
}
