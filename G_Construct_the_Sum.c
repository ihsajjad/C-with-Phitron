#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int n, s;
        scanf("%lld %lld", &n, &s);

        long long int max_sum = (n * (n + 1)) / 2;
        if (max_sum < s)
        {
            printf("-1\n");
            continue;
        }

        long long int sum = 0;
        for (int i = n; i >= 1; i--)
        {
            if (sum + i <= s)
            {
                sum += i;
                printf("%d ", i);
                if (sum == s)
                    break;
            }
            else
            {
                printf("%lld", s - sum);
                break;
            }
        }

        printf("\n");
    }

    return 0;
}