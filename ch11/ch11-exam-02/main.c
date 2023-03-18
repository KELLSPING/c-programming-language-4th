/* ch11-exam-02 */
#include <stdio.h>
#include <stdlib.h>

struct date
{
    int year;
    int month;
    int day;
};

int main()
{
    struct date holiday = {2004, 4, 26}, holiday2;
    holiday2 = (struct date){2005, 5, 18};

    printf("holiday:%02d/%02d/%04d\n", holiday.month, holiday.day, holiday.year);

    return 0;
}