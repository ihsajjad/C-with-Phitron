#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int sum = (n * (n + 1)) / 2;
    printf("%lld", sum);
    return 0;
}