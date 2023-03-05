/* ch07-exam-17 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num=1, total=0;
    while (num<=10)
    {
        printf("%d ", num*num);
        total += num*num;
        num++;
    }
    printf("\ntotal:%d", total);

    return 0;
}
