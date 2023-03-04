/* ch05-exam-02 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(){
    /* a */
    uint8_t bool1;
    bool1 = 'a' < 28;
    printf("bool1 =%d\n", bool1);

    /* b */
    uint8_t bool2;
    bool2 = ((4+3) == (8-1));
    printf("bool2 =%d\n", bool2);

    /* c */
    uint8_t bool3;
    bool3 = 8 > 2;
    printf("bool3 =%d\n", bool3);

    /* d */
    uint8_t bool4;
    bool4 = ('a' != 97);
    printf("bool4 =%d\n", bool4);

    return 0;
}