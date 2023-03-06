/* ch08-exam-05 */
#include <stdio.h>
#include <stdlib.h>

int mod(int, int);

int main(void)
{
    printf("17%%5 = %d", mod(17, 5));

    return 0;
}

int mod(int x, int y){
    return x%y;
}
