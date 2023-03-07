/* ch08-exam-06 */
#include <stdio.h>
#include <stdlib.h>

int power(int, int);

int main(void)
{
    printf("5*5*5 = %d", power(5, 3));

    return 0;
}

int power(int x, int n){
    int ans = 1;
    while (n!=0)
    {
        ans *= x;
        n--;
    }
    return ans;
}
