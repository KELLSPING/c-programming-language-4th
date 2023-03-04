/* ch05-exam-12 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int temp, ans;

    printf("input temp:");
    scanf("%d", &temp);

    ans = (temp-32)/(9/5);

    printf("the new temp is %d", ans);

    return 0;
}