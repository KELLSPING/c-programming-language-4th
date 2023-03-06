/* ch08-exam-07 */
#include <stdio.h>
#include <stdlib.h>

int prime(int);
int prime_100s(int);

int main(void)
{
    // printf("20 以內的質數個數:%d", prime(20));
    printf("第 1 個質數是:%d\n", prime_100s(1));
    printf("第 2 個質數是:%d\n", prime_100s(2));
    printf("第 5 個質數是:%d\n", prime_100s(5));
    printf("第 100 個質數是:%d\n", prime_100s(100));

    return 0;
}

int prime_100s(int n)
{
    int counter = 2, i;
    n--;    // 扣掉第一個質數 2
    while (1)   // 無窮迴圈，往上計數，即 counter++ 
    {
        for (i = 2; i <= counter; i++)
        {
            if (counter % i == 0)   // 如果餘數為 0，代表整除
            {
                break;
            }
            if (i == (counter - 1)) // 如果計算到倒數第一個數字，都沒有跳出 for 迴圈，代表此數字為質數
            {
                n--;
                break;
            }
        }
        if (n == 0)
        {
            break;
        }
        else
        {
            counter++;
        }
    }
    return counter;
}

/* 計算從 1~正整數 的範圍內有幾個質數 */
int prime(int n)
{
    int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            else if (j == (i - 1))
            {
                ans++;
            }
        }
    }
    return ans;
}
