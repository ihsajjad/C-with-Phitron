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

    if (n != m)
    {
        printf("Not Primary Diagonal");
        return 0;
    }

    bool flag = true;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (i != j && arr[i][j] != 0)
                flag = false;

    printf(flag ? "Primary Diagonal" : "Not Primary Diagonal");

    return 0;
}