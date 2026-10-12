#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int min = a < b ? a : b;
    int max = a < b ? b : a;

    if (max % min == 0)
    {
        printf("%d", min);
        return 0;
    }

    int gcd = 1;

    for (int i = 1; i <= sqrt(min); i++)
    {
        int x = (min / i);
        if (!(min % i) && !(max % i))
            gcd = gcd > i ? gcd : i;

        if (!(min % x) && !(max % x))
            gcd = gcd > x ? gcd : x;
    }

    printf("%d", gcd);

    return 0;
}