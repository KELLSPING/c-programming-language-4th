/* ch14-prog-02 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    struct student
    {
        char name[10];
        int score;
    } *ptr;

    printf("number of students:");
    scanf("%d", &num);

    ptr = (struct student *)malloc(num * sizeof(struct student));

    for (i = 0; i < num; i++)
    {
        /* 吸收空格這個字元 */
        getchar();
        
        printf("name for student %d:", i + 1);
        gets( (ptr + i)->name);
        printf("score for student %d:", i + 1);
        scanf("%d", &(ptr + i)->score);
    }

    for (i = 0; i < num; i++)
    {
        printf("%s: score=%d\n", (ptr + i)->name, (ptr + i)->score);
    }

    free(ptr);

    return 0;
}