/* ch09-exam-22 */
#include <stdio.h>
#include <stdlib.h>

#define ROW 2
#define COLUMN 4

void add(int[][COLUMN], int[][COLUMN], int[][COLUMN]);

int main()
{
    int a[][COLUMN] = {{1, 3, 5, 7}, {9, 11, 13, 15}};
    int b[][COLUMN] = {{2, 4, 6, 8}, {10, 12, 14, 16}};
    int c[][COLUMN] = {{}, {}};
    add(a, b, c);

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            printf("c[%d][%d]:%d\n", i, j, c[i][j]);
        }
    }

    return 0;
}

void add(int a[][COLUMN], int b[][COLUMN], int c[][COLUMN])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}
