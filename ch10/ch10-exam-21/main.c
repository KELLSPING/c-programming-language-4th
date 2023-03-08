/* ch10-exam-21 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 3
void display(char *ptr, int n);

int main()
{
    char *ptr = "hello world";
    int n = 4;

    display(ptr, n);

    return 0;
}

void display(char *ptr, int n)
{
    for (int i = 0; *(ptr + i) != '\0'; i++)
    {
        if (i >= n)
        {
            printf("%c", *(ptr + i));
        }
    }
}
