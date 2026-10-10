#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    float a, b;
    scanf("%f %f", &a, &b);
    // printf("%d", round(a / b));

    int fl = floor(a / b);
    int cl = ceil(a / b);
    int rn = round(a / b);

    printf("floor %f / %f = %.0lf\n", a, b, floor(a / b));
    // printf("ceil %f / %f = %f\n", a, b, cl);
    // printf("round %f / %f = %f\n", a, b, rn);
    return 0;
}