/**
 *  * ch14-exam-07
 */
#include "./app.h"

int main()
{
    int arr[4] = {12,56,37,63};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("length=%d\n", length);

    length = insertElement(arr, 10, 2, length);
    printf("length=%d\n", length);
    
    return 0;
}
