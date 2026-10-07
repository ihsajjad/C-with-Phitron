#include <stdio.h>
#include <string.h>
#include <limits.h>

long long int rec(int n)
{
    if (n == 0)
        return 1;

    return rec(n - 1) * n;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%lld", rec(n));
    return 0;
}