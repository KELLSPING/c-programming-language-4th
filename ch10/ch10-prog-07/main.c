/* ch10-prog-07 */
#include <stdio.h>
#include <stdlib.h>

void address(int *);

int main()
{
    int a = 12;
    int *ptr = &a;

    address(&a);
    address(ptr);

    return 0;
}

void address(int *p1)
{
    printf("於位址 %p 內，儲存的變數內容為 %d \n", p1, *p1);
}