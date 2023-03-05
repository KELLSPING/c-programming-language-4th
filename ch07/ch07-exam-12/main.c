/* ch07-exam-12 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int units, tens, hundreds, total;
    for (int i = 100; i <= 999; i++)
    {
        hundreds = i / 100;
        tens = i % 100 / 10;
        units = i % 100 % 10 / 1;
        total = hundreds * hundreds * hundreds + tens * tens * tens + units * units * units;
        if (total == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

/*
    個位數 units digit
    十位數 tens digit
    百位數 hundresd digit
*/