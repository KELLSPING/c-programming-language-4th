/* ch09-exam-27 */
#include <stdio.h>
#include <stdlib.h>

int length(char[]);

int main()
{
    char arr1[] = {'a', 'e', 'i', 'o', 'u'};
    char arr2[10] = {'a', 'e', 'i', 'o', 'u'};
    char arr3[] = "helloworld";
    char *arr4 = "helloworld";
    
    printf("arr1 len:%d\n", length(arr1));
    printf("arr2 len:%d\n", length(arr2));
    printf("arr3 len:%d\n", length(arr3));
    printf("arr4 len:%d\n", length(arr4));

    return 0;
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
