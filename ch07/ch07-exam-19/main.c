/* ch07-exam-19 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int n = 0, total;
    do
    {
        n++;
        total = 0;
        for (int i = 1; i <= n; i++)
        {
            total += i;
        }

    } while (total < 1000);

    printf("n:%d", n);

    return 0;
}
