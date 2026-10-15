#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        int i = 0, len = 1, cnt = 0;
        while (len < n)
        {
            bool flag = true;
            for (int j = i; j < i + len; j++)
                if ((j + 1) < n && arr[j] > arr[j + 1])
                    flag = false;

            if (flag)
                cnt++;

            i++;

            if (i == n - len)
                len++, i = 0;
        }

        printf("%d\n", cnt + n);
    }

    return 0;
}