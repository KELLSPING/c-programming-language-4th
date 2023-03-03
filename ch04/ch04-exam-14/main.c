/* ch04-exam-14 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int inputInt;

    printf("input:");
    scanf("%d", &inputInt);

    printf("dec:%d\n", inputInt);
    printf("oct:%o\n", inputInt);
    printf("hex:%x\n", inputInt);

    return 0;
}