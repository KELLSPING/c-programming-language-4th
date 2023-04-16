/**
 *  * ch14-exam-10
 */
#include "./app.h"

int main()
{
    NODE *first = NULL, node;
    int arr[SIZE] = {12, 38, 64, 37};
    int insertNum = 92;

    first = createList(first, arr, SIZE);
    printList(first);
    first = insertNode(first, arr[2], insertNum);
    printList(first);

    return 0;
}