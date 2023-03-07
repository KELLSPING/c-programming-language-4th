/* ch09-exam-06-a */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {3,5,0,3,2,4,1,6,8,5,4,3,2};

    printf("there are %llu elements in arr.", (sizeof(arr) / sizeof(arr[0])));

    return 0;
}