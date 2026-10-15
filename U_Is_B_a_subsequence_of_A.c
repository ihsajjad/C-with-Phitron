#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n], b[m];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    bool flag;

    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            if (j == m - 1)
            {
                flag = true;
                break;
            }
            else
                i++, j++;
        }
        else
        {
            if (i == n - 1 || j == m - 1)
            {
                flag = false;
            }
            i++;
        }
    }
    printf(flag ? "YES" : "NO");

    return 0;
}