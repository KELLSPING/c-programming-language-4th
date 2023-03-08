/* ch11-prog-13 */
#include <stdio.h>
#include <stdlib.h>

enum color
{
    red,
    green,
    blue
};
enum color shirt;

int main()
{
    printf("sizeof(shirt)=%llu\n", sizeof(shirt));
    printf("red=%d\n", red);
    printf("green=%d\n", green);
    printf("blue=%d\n", blue);

    shirt = green;
    if (shirt == green)
    {
        printf("選擇了綠色\n");
    }
    else
    {
        printf("選擇了非綠色\n");
    }

    return 0;
}