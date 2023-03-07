/* ch09-exam-09 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sale[2][4] = {
        {30, 35, 26, 32},
        {33, 34, 30, 29}};

    for (int i = 0; i < 4; i++)
    {
        printf("第 %d 季的總業績:%d\n", i, sale[0][i] + sale[1][i]);
    }

    return 0;
}