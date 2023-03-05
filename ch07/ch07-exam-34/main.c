/* ch07-exam-34 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num = 1;
    while (1)
    {
        if(num%3==1 && num%5==3 && num%7==2){
            printf("num:%d", num);
            break;
        }
        num++;
    }

    return 0;
}
