/* ch03-ex-16 */
#include <stdio.h>

int main(){
    printf("sizeof(576): %llu\n", sizeof(576));
    printf("sizeof(784000000): %llu\n", sizeof(784000000));
    printf("sizeof(6.78f): %llu\n", sizeof(6.78f));
    printf("sizeof(718.26): %llu\n", sizeof(718.26));
    printf("sizeof(6.42e127): %llu\n", sizeof(6.42e127));
    printf("sizeof(char): %llu\n", sizeof(char));
    printf("sizeof(int): %llu\n", sizeof(int));
    int a = 10;
    printf("sizeof(a): %llu\n", sizeof(a));

    return 0;
}