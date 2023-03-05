/* ch07-exam-11 */
#include <stdio.h>
#include <stdlib.h>

int main()
{

    for (int i = 1; i <= 1000; i++)
    {
        int total = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                total += j;
            }
        }
        if (total == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}