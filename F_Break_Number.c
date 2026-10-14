#include <stdio.h>
#include <string.h>
#include <limits.h>

int div_2(long long int n)
{
    int cnt = 0;
    while (!(n % 2))
        cnt++, n /= 2;

    return cnt;
}

int main()
{
    int n;
    scanf("%d", &n);
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        long long int val;
        scanf("%lld", &val);
        int div_by_2 = div_2(val);
        max = div_by_2 > max ? div_by_2 : max;
    }

    printf("%lld", max);

    return 0;
}