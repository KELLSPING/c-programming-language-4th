/* ch09-exam-25 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *inputStr = "HELLO WORLD";

    while (*inputStr != '\0')
    {
        if ((*inputStr >= 65) && (*inputStr <= 97))
        {
            printf("%c", (*inputStr) + 32);
        }
        else
        {
            printf("%c", (*inputStr));
        }
        inputStr++;
    }

    return 0;
}
