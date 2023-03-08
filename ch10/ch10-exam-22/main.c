/* ch10-exam-22 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[2][20] = {"time is money", "have a good time"};

    puts(*(str));
    puts(*(str+1));

    return 0;
}

