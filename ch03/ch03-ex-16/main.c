/* ch03-ex-16 */
#include <stdio.h>
#include <stdint.h>

struct A
{
    int a;
    short b;
    int c;
    char d;
};

struct B
{
    int a;   // 4
    short b; // (4) + 2 = 6，下一成員爲 char 類型，不考慮對齊
    char c;  // (6) + 1 = 7，下一成員爲 int 類型，需對其爲 4 的倍數，7 + (1) = 8
    int d;   // (8) + 4 = 12，已是 4 的倍數
};

struct C
{
    uint8_t ch[3]; // 8 bits
    uint32_t sz[2]; // 32 bits
};

int main()
{
    printf("sizeof(unsigned int): %lld\n", sizeof(unsigned int));
    printf("sizeof(double): %lld\n", sizeof(double));
    printf("sizeof(unsigned short int): %lld\n", sizeof(unsigned short int));

    printf("sizeof(struct A): %lld\n", sizeof(struct A));
    printf("sizeof(struct B): %lld\n", sizeof(struct B));
    printf("sizeof(struct C): %lld\n", sizeof(struct C));

    return 0;
}