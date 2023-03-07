/* ch09-exam-12 */
#include <stdio.h>
#include <stdlib.h>

#define ROW 2
#define COLUMN 5

int main()
{
    int min_row_index, min_col_index, i, j, temp = 0;
    int sale[ROW][COLUMN] = {
        {4, 9, 1, 0, -6},
        {-8, 5, 6, -1, 3}};

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COLUMN; j++)
        {
            if (sale[i][j] < temp)
            {
                temp = sale[i][j];
                min_row_index = i;
                min_col_index = j;
            }
        }
    }

    printf("index is [%d, %d], value is %d\n", min_row_index, min_col_index, sale[min_row_index][min_col_index]);

    return 0;
}