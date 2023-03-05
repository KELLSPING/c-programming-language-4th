/* ch07-exam-03 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int inputNum, total=0;

    printf("input a odd number :");
    scanf("%d", &inputNum);

    for(int i=1; i<=inputNum; i+=2){
        total += i;
    }

    printf("1+3+...+%d=%d", inputNum, total);

    return 0;
}