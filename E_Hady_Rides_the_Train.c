#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int row = n / 4;
    long long int col;
    if (row % 2)
        col = 3 - (n % 4);
    else
        col = n % 4;

    printf("%lld %lld", row, col);

    return 0;
}