/* ch09-prog-07 */
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main(void){
    int score[MAX];
    int i=0;
    float sum=0.0f;

    printf("請輸入成績，要結束請輸入0:\n");
    do
    {
        if (i==MAX)
        {
            printf("array 空間已經使用完畢!!\n");
            break;
        }
        printf("請輸入成績:");
        scanf("%d", &score[i]);
    } while (score[i++]>0);
    
    for (i = 0; i < MAX; i++)
    {
        sum += score[i];
    }

    printf("平均成績 %.2f\n", sum/MAX);

    return 0;
}