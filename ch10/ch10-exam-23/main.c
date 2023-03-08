/* ch10-exam-23 */
#include <stdio.h>
#include <stdlib.h>

#define ROW 2
#define COLUMN 3

void matrix_plus(int (*)[COLUMN], int (*)[COLUMN], int (*)[COLUMN]);

int main()
{
    int i, j;
    int A[ROW][COLUMN] = {{1, 2, 3}, {5, 6, 8}};
    int B[ROW][COLUMN] = {{3, 0, 2}, {3, 5, 7}};
    int ans[ROW][COLUMN];

    printf("matrix A+B=\n");

    matrix_plus(A, B, ans);

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COLUMN; j++)
        {
            
            printf("ans[%d][%d]=%d\n", i, j, ans[i][j]);
        }
    }

    return 0;
}

/*
    A 是一個指標，它指向一個陣列
*/
void matrix_plus(int (*A)[COLUMN], int (*B)[COLUMN], int (*ans)[COLUMN])
{
    int i, j;
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COLUMN; j++)
        {
            *(*(ans + i) + j) = *(*(A + i) + j) + *(*(B + i) + j);
        }
    }
}
