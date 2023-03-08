/* ch10-exam-19 */
#include <stdio.h>
#include <stdlib.h>

int length(char *);

int main()
{
    char *ptr = "we are best friend.";

    int len = length(ptr);

    printf("len=%d", len);

    return 0;
}

int length(char *ptr)
{
    int counter = 0;
    while (*ptr != '\0')
    {
        counter++;
        ptr++;
    }
    return counter;
}
