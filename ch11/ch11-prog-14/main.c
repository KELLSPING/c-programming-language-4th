/* ch11-prog-14 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

enum color
{
    red = 114,
    green = 103,
    blue = 98
};
enum color shirt;

int main()
{
    char key;

    do
    {
        printf("\n請輸入r,g或b:");
        key = getche();
    } while ((key != red) && (key != green) && (key != blue));
    printf("\n");

    shirt = key;

    switch (shirt)
    {
    case red:
        printf("選擇了紅色");
        break;
    case green:
        printf("選擇了綠色");
        break;
    case blue:
        printf("選擇了藍色");
        break;
    default:
        break;
    }

    return 0;
}