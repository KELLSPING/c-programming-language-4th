/* ch12-prog-01 */
#include <stdio.h>
#include <stdlib.h>

#include <direct.h>
#define MAXPATH 1024

int main()
{
    FILE *fptr;
    char ch;
    int count = 0;
    fptr = fopen("../welcome.txt", "r");

    /* 查看當前的路徑 */
    char buffer[MAXPATH];
    _getcwd(buffer, MAXPATH);
    printf("%s\n", buffer);

    /* 檢查是否開啟檔案成功 */
    if (fptr != NULL)
    {
        printf("successed\n");
        while ((ch = getc(fptr)) != EOF)
        {
            printf("%c", ch);
            count++;
        }
        fclose(fptr);
        printf("\n總共有 %d 個字元\n", count);
    }
    else
    {
        printf("failed");
    }

    return 0;
}