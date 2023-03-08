/* ch11-exam-04 */
#include <stdio.h>
#include <stdlib.h>

struct time
{
    int hour;
    int minutes;
    double second;
};

int main()
{
    /* hh : mm : ss.ss */
    struct time start = {12, 32, 25.49}, end = {15, 40, 17.53}, elapse;

    printf("start => %2d:%2d:%2.2lf\n", start.hour, start.minutes, start.second);
    printf("end => %2d:%2d:%2.2lf\n", end.hour, end.minutes, end.second);

    elapse.hour = end.hour - start.hour;
    elapse.minutes = end.minutes - start.minutes;
    elapse.second = end.second - start.second;
    if (elapse.minutes < 0)
    {
        elapse.hour--;
        elapse.minutes = elapse.minutes + 60;
    }
    if (elapse.second < 0)
    {
        elapse.minutes--;
        elapse.second = elapse.second + 60;
    }

    printf("elapse => %2d:%2d:%2.2lf\n", elapse.hour, elapse.minutes, elapse.second);

    return 0;
}