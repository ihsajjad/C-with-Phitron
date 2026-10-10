#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    long long int a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);

    if (!(a % k) && !(b % k))
        printf("Both");
    else if (!(a % k))
        printf("Memo");
    else if (!(b % k))
        printf("Momo");
    else
        printf("No One");
    return 0;
}