#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    long long int n, k, a;
    scanf("%lld %lld %lld", &n, &k, &a);

    long long mul = n * k;

    if ((mul % a) != 0)
        printf("double");
    else
        printf(mul / a <= 2147483647 ? "int" : "long long");

    return 0;
}