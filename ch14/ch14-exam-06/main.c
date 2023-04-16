/**
 *  * ch14-exam-06
 */
#include "./app.h"

int main()
{
    STUDENT *ptr;
    int *num = (int *)malloc(sizeof(int));
    int *i = (int *)malloc(sizeof(int));
    int total=0;

    printf("number of students:");
    scanf("%d", num);

    ptr = (STUDENT *)malloc((*num) * sizeof(STUDENT));

    for ((*i) = 0; (*i) < (*num); (*i)++)
    {
        /* 吸收空格這個字元 */
        getchar();

        printf("name for student %d:", (*i) + 1);
        gets((ptr + (*i))->name);
        printf("score for student %d:", (*i) + 1);
        scanf("%d", &(ptr + (*i))->score);
    }

    for ((*i) = 0; (*i) < (*num); (*i)++)
    {
        printf("%s: score=%d\n", (ptr + (*i))->name, (ptr + (*i))->score);
        total += (ptr + (*i))->score;
    }

    printf("score avg=%d\n", total/(*num));

    free(ptr);
    free(i);
    free(num);

    return 0;
}