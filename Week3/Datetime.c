#include <stdio.h>

int main()
{
    long int seconds; long int sec_cal;
    scanf("%ld", &seconds);

    sec_cal = seconds;
    long int minutes = sec_cal/60;
    sec_cal = sec_cal%60;
    long int hours = minutes/60;
    minutes = minutes%60;
    long int days = hours/24;
    hours = hours%24;

    printf("%ld s = %ld d %ld h %ld m %ld s", seconds, days, hours, minutes, sec_cal);
    return 0;
}