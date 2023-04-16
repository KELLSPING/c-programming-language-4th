/**
 *  * ch14-exam-09
 */
#include "./app.h"

int main()
{
    NODE *first = NULL;
    int arr[SIZE] = {12, 38, 64, 37};

    first = createList(first, arr, SIZE);
    printList(first);

    return 0;
}