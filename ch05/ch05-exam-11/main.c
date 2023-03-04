/* ch05-exam-11 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int temp, ans;

    printf("input temp:");
    scanf("%d", &temp);

    ans = (9/5)*temp+32;

    printf("the new temp is %d", ans);

    return 0;
}