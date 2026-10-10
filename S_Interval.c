#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    float f;
    scanf("%f", &f);

    if (f < 0 || f > 100)
        printf("Out of Intervals");
    else if (f >= 0 && f <= 25)
        printf("Interval [0,25]");
    else if (f > 25 && f <= 50)
        printf("Interval (25,50]");
    else if (f > 50 && f <= 75)
        printf("Interval (50,75]");
    else
        printf("Interval (75,100]");

    return 0;
}