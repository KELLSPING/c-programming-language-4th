/* ch13-prog-03 */
#include <stdio.h>
#include <stdlib.h>
#include "./count.h"

int cnt;

int main()
{
    printf("請輸入 cnt 的出值:");
    scanf("%d", &cnt);

    count();
    count();

    cnt++;
    printf("cnt=%d\n", cnt);

    return 0;
}