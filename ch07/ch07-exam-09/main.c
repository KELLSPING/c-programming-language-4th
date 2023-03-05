/* ch07-exam-09 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total=0;
    for (int i = 1; i <= 50; i++)
    {
        if(i%2==1){
            total += i*i;
        } else{
            total -= i*i;
        }
    }
    printf("total:%d", total);

    return 0;
}