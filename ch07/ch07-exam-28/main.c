/* ch07-exam-28 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int n = 1;
    do
    {
        for (int i = 1; i <= 9; i++)
        {
            printf("%d * %d = %d\n", n, i, n * i);
        }
        n++;
    } while (n <= 9);

    return 0;
}
