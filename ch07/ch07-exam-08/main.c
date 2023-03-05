/* ch07-exam-08 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if ((i % 7 == 0) && (i % 3 == 0))
        {
            printf("%d ", i);
        }
    }

    return 0;
}