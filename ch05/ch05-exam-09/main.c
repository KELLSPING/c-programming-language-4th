/* ch05-exam-09 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=5, b=3, num=0;

    /* a */
    num = (a++) + b;
    printf("num=%d, a=%d, b=%d\n", num, a, b);

    /* b */
    a=5; b=3; num=0;
    num = (++a) + b;
    printf("num=%d, a=%d, b=%d\n", num, a, b);

    /* c */
    a=5; b=3; num=0;
    num = (a++) + (b++);
    printf("num=%d, a=%d, b=%d\n", num, a, b);

    /* d */
    a=5; b=3; num=0;
    num = (++a) + (++b);
    printf("num=%d, a=%d, b=%d\n", num, a, b);

    /* c */
    a=5; b=3; num=0;
    a+=a+(b++);
    printf("num=%d, a=%d, b=%d\n", num, a, b);

    return 0;
}