/* ch13-exam-15 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, i;
    n = atoi(argv[1]);

    for (i = 1; i <= n; i++)
        printf("Hello kitty!\n");

    return 0;
}
