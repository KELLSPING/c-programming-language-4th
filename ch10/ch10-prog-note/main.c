/* ch10-prog-note */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[] = "hello";
    char str2[10] = "hello";
    char str3[] = {'h','e','l','l','o'};
    char str4[10] = {'h','e','l','l','o'};
    int str5[] = {1,1,1,1,1};
    int str6[10] = {1,1,1,1,1};
    char *ptr1 = "hello";

    printf("sizeof(str1):%llu\n", sizeof(str1));
    printf("sizeof(str2):%llu\n", sizeof(str2));
    printf("sizeof(str3):%llu\n", sizeof(str3));
    printf("sizeof(str4):%llu\n", sizeof(str4));
    printf("sizeof(str5):%llu\n", sizeof(str5));
    printf("sizeof(str6):%llu\n", sizeof(str6));
    printf("sizeof(ptr1):%llu\n", sizeof(ptr1));

    

    return 0;
}
