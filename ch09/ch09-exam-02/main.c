/* ch09-exam-02 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
    int arr[SIZE]={2,3,1,7,9};
    for (int i = 0; i < SIZE; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }

    return 0;
}