#include "show_bin.h"

void show_binary(int num){
    int i, b[SIZE]={0};

    for (i = 0; i < SIZE; i++)
    {
        b[SIZE-i] = num % 2;
        num = num / 2;
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("%d", b[i]);
    }

    printf("\n");
}