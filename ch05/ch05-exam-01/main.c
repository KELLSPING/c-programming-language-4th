/* ch05-exam-01 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    /* a */
    int a1 = 8;
    printf("a1=%d\n", ++a1);
    printf("a1=%d\n", a1--);

    /* b */
    int a2=10, b2=20;
    a2 = a2%5;
    b2 = b2 / 6;
    printf("a2=%d\n", a2);
    printf("b2=%d\n", b2);

    /* c */
    int a3=20, b3=5;
    a3=20, b3=5;
    a3 = a3 % b3;
    b3 = b3 * 3;
    printf("a3=%d\n", a3);
    printf("b3=%d\n", b3);

    return 0;
}