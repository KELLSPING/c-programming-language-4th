/* ch08-exam-02 */
#include <stdio.h>
#include <stdlib.h>

void kitty(int);

int main(void)
{
    int k = 3;
    kitty(k);

    return 0;
}

void kitty(int k)
{
    for (int i = 0; i < k; i++)
    {
        printf("hello kitty\n");
    }
}
