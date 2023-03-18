/* ch11-exam-02 */
#include <stdio.h>
#include <stdlib.h>

/* size = 4+4+8 bytes => 16 bytes */
typedef struct time
{
    int hour;
    int minutes;
    double second;
} TIME;

/* size = 4+4+4+16 bytes => 32 bytes */
typedef struct date
{
    int year;
    int month;
    int day;
    TIME time;
} DATE;

int main()
{
    /*
        mm/dd/yyyy hh:mm:ss.ss
    */
    DATE now = {2023, 3, 8, {19, 6, 0.73}};

    printf("%2d/%2d/%4d %2d:%2d:%2.2lf\n", now.month, now.day, now.year, now.time.hour, now.time.minutes, now.time.second);
    printf("sizeof(now)=%llu\n", sizeof(now));

    return 0;
}