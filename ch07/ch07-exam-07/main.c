/* ch07-exam-07 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 6 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}