/* ch09-exam-05 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[10] = {};

    for (int i = 0; i < 10; i++)
    {
        printf("arr[%d]=%c\n", i, arr[i]);
    }

    return 0;
}