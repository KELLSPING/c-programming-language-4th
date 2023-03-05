/* ch07-exam-05 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int total=0;

    for(int i=1; i<=100; i++){
        // printf("i=%d, ", i);
        if((i%3==0) && (i%8==0)){
            total += i;
            // printf("total=%d\n", total);
        }
    }
    printf("total=%d\n", total);

    return 0;
}