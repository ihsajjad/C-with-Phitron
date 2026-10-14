#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int cnt = k, min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int val;
        scanf("%d", &val);
        cnt--;
        min = min < val ? min : val;
        if (!cnt || i == (n - 1))
        {
            printf("%d ", min);
            min = INT_MAX;
            cnt = k;
        }
    }

    return 0;
}