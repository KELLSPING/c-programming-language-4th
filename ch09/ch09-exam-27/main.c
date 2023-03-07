/* ch09-exam-27 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void reverse(char[]);
int length(char[]);

int main()
{
    char str[SIZE];

    printf("Enter a string :");
    gets(str);

    reverse(str);

    return 0;
}

void reverse(char str[])
{
    int n = length(str);
    printf("len:%d\n", n);

    char temp[n + 1];

    int i = 0;
    
    while(str[i] != '\0')
    {
        temp[n - i - 1] = str[i];
        i++;
    }
    
    temp[n] = '\0';
    
    puts(temp);
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
