/* ch07-exam-27 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num = 5, curr = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j >= num)
            {
                curr += 1;
                printf("%d", curr);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        num--;
        curr = 0;
    }

    return 0;
}
