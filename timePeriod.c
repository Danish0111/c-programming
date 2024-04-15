#include <stdio.h>
struct time
{
    int hours;
    int minutes;
    int seconds;
};

struct time timePeriod(struct time t1, struct time t2)
{
    struct time t;
    int sec1 = t1.hours*3600 + t1.minutes*60 + t1.seconds;
    int sec2 = t2.hours*3600 + t2.minutes*60 + t2.seconds;

    int diff = sec2 - sec1;
    t.hours = diff/3600;
    diff %= 3600;
    t.minutes = diff/60;
    t.seconds = diff%60;
    
    return t;
}
int main()
{
    struct time tm1, tm2, result;
    printf("\nenter initial time in (HH MM SS) : ");
    scanf("%d %d %d", &tm1.hours, &tm1.minutes, &tm1.seconds);

    printf("\nenter final time in (HH MM SS) : ");
    scanf("%d %d %d", &tm2.hours, &tm2.minutes, &tm2.seconds);

    result = timePeriod(tm1, tm2);
    printf("\ndifference b/w time period is : \n %d hours %d minutes %d seconds\n", result.hours, result.minutes, result.seconds);

    return 0;
}