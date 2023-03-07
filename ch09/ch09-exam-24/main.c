/* ch09-exam-24 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char inputStr[20];
    int a_cntr=0, e_cntr=0, i_cntr=0, o_cntr=0, u_cntr=0;

    printf("input string:");
    gets(inputStr);

    int len = sizeof(inputStr) / sizeof(inputStr[0]);
    for (int i = 0; i < len; i++)
    {
        switch (inputStr[i])
        {
        case 'a':
            a_cntr++;
            continue;;
        case 'e':
            e_cntr++;
            continue;
        case 'i':
            i_cntr++;
            continue;
        case 'o':
            o_cntr++;
            continue;
        case 'u':
            u_cntr++;
            continue;
        default:
            break;
        }
    }

    printf("a_cntr:%d, e_cntr:%d, i_cntr:%d, o_cntr:%d, u_cntr:%d", a_cntr, e_cntr, i_cntr, o_cntr, u_cntr);

    return 0;
}
