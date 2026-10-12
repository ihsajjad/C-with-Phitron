#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    if (a == 0 || c == 0)
        printf("0");
    else if (a <= b && a <= c)
        printf("%lld", a);
    else if (c <= a && c <= b)
        printf("%lld", c);
    else
    {
        long long int ans = b;
        a -= b, c -= b;
        ans += (a / 2) < c ? (a / 2) : c;
        printf("%lld", ans);
    }

    return 0;
}