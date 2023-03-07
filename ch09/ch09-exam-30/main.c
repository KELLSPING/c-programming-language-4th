/* ch09-exam-30 */
#include <stdio.h>
#include <stdlib.h>

#define MAX 2
#define LENGHT 7

int length(char[]);
void string_copy(char arr1[MAX][LENGHT], char arr2[MAX][LENGHT]);

int main()
{
    char arr1[MAX][LENGHT] = {"ASDFG", "ZXCVB"};
    char arr2[MAX][LENGHT];

    string_copy(arr1, arr2);

    return 0;
}

void string_copy(char arr1[MAX][LENGHT], char arr2[MAX][LENGHT])
{

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < LENGHT; j++)
        {
            arr2[i][j] = arr1[i][j];
            printf("arr2[%d][%d]=%c\n", i, j, arr2[i][j]);
        }
    }
}
