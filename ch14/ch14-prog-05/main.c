#include "./linklist.h"

#define SIZE 4

int main()
{
    NODE *first, *node;
    int arr[SIZE] = {14, 27, 32, 36};

    printf("hello\n");

    first = createList(arr, SIZE);
    printList(first);

    node = searchNode(first, 32);
    insertNode(node, 46);
    printList(first);

    first = deleteNode(first, node);
    printList(first);

    freeList(first);

    return 0;
}