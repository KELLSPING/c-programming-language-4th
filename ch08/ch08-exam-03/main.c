/* ch08-exam-03 */
#include <stdio.h>
#include <stdlib.h>

int cub(int);

int main(void)
{
    printf("2*2*2 = %d", cub(2));

    return 0;
}

int cub(int x){
    return x*x*x;
}
