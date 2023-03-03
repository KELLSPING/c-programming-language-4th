/* ch04-exam-13 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    char inputStr[10];

    printf("input:");
    scanf("%s", inputStr);

    printf("\"%s\"\n", inputStr);
    printf("\\%20s\\\n", inputStr);
    printf("\\%-20s\\\n", inputStr);

    return 0;
}