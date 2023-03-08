/* ch10-exam-23-double-ptr */
#include <stdio.h>
#include <stdlib.h>

#define ROW 2
#define COLUMN 3

void plus(int **, int **, int **);

int main()
{
    int i, j;
    int A[ROW][COLUMN] = {{1, 2, 3}, {5, 6, 8}};
    int B[ROW][COLUMN] = {{3, 0, 2}, {3, 5, 7}};
    int ANS[ROW][COLUMN];

    int *a[ROW] = {A[0], A[1]};
    int *b[ROW] = {B[0], B[1]};
    int *ans[ROW] = {ANS[0], ANS[1]};

    plus(a, b, ans);

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COLUMN; j++)
        {
            printf("ANS[%d][%d]=%d\n", i, j, ANS[i][j]);
        }
    }

    return 0;
}

void plus(int **A, int **B, int **ANS)
{
    int i, j;
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COLUMN; j++)
        {
            *(*(ANS + i) + j) = *(*(A + i) + j) + *(*(B + i) + j);
        }
    }
}
