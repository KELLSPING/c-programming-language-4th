/* ch10-exam-18 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr = "we are best friend.";
    int counter = 0;

    while (*ptr != '\0')
    {
        counter++;
        ptr++;
    }

    printf("counter:%d", counter);

    return 0;
}
