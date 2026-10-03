#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    // printf("%d", round(a / b));

    int fl = floor(a / b);
    int cl = ceil(a / b);
    int rn = round(a / b);

    printf("floor %d / %d = %d\n", a, b, fl);
    printf("ceil %d / %d = %d\n", a, b, cl);
    printf("round %d / %d = %d\n", a, b, rn);
    return 0;
}