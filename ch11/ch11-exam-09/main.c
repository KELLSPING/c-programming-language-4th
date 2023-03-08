/* ch11-exam-09 */
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

struct data
{
    char name[10];
    int math;
};

int main()
{

    struct data student[MAX] = {{"aaa", 70}, {"bbb", 90}, {"ccc", 55}, {"ddd", 50}, {"eee", 80}};

    for (int i = 0; i < MAX; i++)
    {
        if (student[i].math < 60)
        {
            printf("%s %d\n", student[i].name, student[i].math);
        }
    }

    return 0;
}