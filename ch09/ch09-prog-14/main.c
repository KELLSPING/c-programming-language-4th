/* ch09-prog-14 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

void func(int arr[]);

int main(void){
    int A[SIZE]={20, 8, 13};

    printf("在 main() 裡，陣列 A 元素的位址\n");

    for(int i=0; i<SIZE; i++)
        printf("A[%d]=%2d, 位址為%p\n", i, A[i], &A[i]);

    func(A);

    return 0;
}

void func(int arr[])
{
    printf("\n在 func() 裡， array 元素的位址為\n");

    for(int i=0;i<SIZE;i++)
        printf("arr[%d]=%2d, 位址為%p\n", i, arr[i], &arr[i]);
}
