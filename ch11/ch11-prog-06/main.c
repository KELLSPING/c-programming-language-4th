/* ch11-prog-06 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct data
    {
        char name[10];
        int math;
    }student[10];

    printf("sizeof(student[3])=%llu\n", sizeof(student[3]));
    printf("sizeof(student)=%llu\n", sizeof(student));

    return 0;
}