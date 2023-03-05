/* ch07-exam-14 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int roapLength = 3000, days = 0;

    while (roapLength >= 5)
    {
        roapLength /= 2;
        days++;
    }

    printf("days:%d", days);

    return 0;
}