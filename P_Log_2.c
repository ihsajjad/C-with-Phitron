#include <stdio.h>
#include <string.h>
#include <limits.h>

long long int rec(long long int n)
{
    if (n < 2)
        return 0;

    return rec(n / 2) + 1;
}
int main()
{
    long long int n;
    scanf("%lld", &n);

    printf("%lld", rec(n));
    return 0;
}