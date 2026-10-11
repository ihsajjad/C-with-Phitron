#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    float x, y;
    scanf("%f %f", &x, &y);
    x = 100 - x;
    printf("%.2f", (y / x) * 100);

    return 0;
}