#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    printf(b * log(a) > d * log(c) ? "YES" : "NO");

    return 0;
}