#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    float a, b;
    scanf("%f %f", &a, &b);

    int fl = floor(a / b);
    int cl = ceil(a / b);
    int rn = round(a / b);

    printf("floor %.0f / %.0f = %d\n", a, b, fl);
    printf("ceil %.0f / %.0f = %d\n", a, b, cl);
    printf("round %.0f / %.0f = %d\n", a, b, rn);
    return 0;
}