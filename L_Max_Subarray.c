#include <stdio.h>
#include <string.h>
#include <limits.h>

// Although it took 2 hours to solve but I can proudly say I solve it without any help. I own this emotion.

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int a[n];

        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        int i = 0, len = 0;
        while (len < n)
        {
            int max = INT_MIN;

            for (int j = i; j <= i + len; j++)
                max = a[j] > max ? a[j] : max;

            printf("%d ", max);

            i++;
            if (i == n - len)
            {
                len++;
                i = 0;
            }
        }

        printf("\n");
    }

    return 0;
}