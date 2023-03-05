/* ch07-exam-25 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
