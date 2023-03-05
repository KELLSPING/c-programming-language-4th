/* ch07-exam-06 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int inputNum;

    printf("input a num:");
    scanf("%d", &inputNum);

    for (int i = inputNum; i > 0; i--)
    {
        if (inputNum % i == 0)
        {
            printf("%d ", inputNum/i);
        }
        
    }
    

    return 0;
}