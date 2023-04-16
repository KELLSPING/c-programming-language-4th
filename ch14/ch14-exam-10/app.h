#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;

NODE *createList(NODE *first, int *arr, int len);
void printList(NODE *first);
NODE *insertNode(NODE *first, int targetNum, int insertNum);
