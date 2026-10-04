#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);

    int x;
    scanf("%d", &x);

    bool flag = false;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (arr[i][j] == x)
                flag = true;

    printf(flag ? "will not take number" : "will take number");

    return 0;
}