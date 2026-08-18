#include <stdio.h>
int main()
{
    int totalseconds, hours, minutes, seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &totalseconds);

    hours = totalseconds / 3600;
    totalseconds = totalseconds % 3600;

    minutes = totalseconds / 60;
    seconds = totalseconds % 60;

    printf("%.2d:%.2d:%.2d\n", hours, minutes, seconds);
    return 0;
}