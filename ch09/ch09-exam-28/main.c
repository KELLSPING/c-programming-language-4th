/* ch09-exam-28 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void toLower(char[]);
int length(char[]);

int main()
{
    char str[SIZE];

    printf("Enter a string :");
    gets(str);

    toLower(str);

    puts(str);

    return 0;
}

void toLower(char str[])
{
    int n = length(str);
    printf("len of str:%d\n", n);

    for (int i = 0; i <= n; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = (char)(str[i] + 32);
        }
    }
}

int length(char str[])
{
    int len = 0;
    while (*str != '\0')
    {
        len++;
        str++;
    }

    return len;
}
