#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long int mul = (a * b) % 100;
    mul = (mul * c) % 100;
    mul = (mul * d) % 100;
    if (mul <= 9)
        printf("0%lld", mul);
    else
        printf("%lld", mul);

    return 0;
}