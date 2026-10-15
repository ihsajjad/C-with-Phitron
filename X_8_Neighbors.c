#include <stdio.h>
#include <string.h>
#include <limits.h>

// Ahh, Don't laugh. I am tired. I am done with C. there is a better solution of it. It become totally garbeg.

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    char arr[n + 1][m + 1];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf(" %c", &arr[i][j]);

    int x, y;
    scanf("%d %d", &x, &y);

    if (x > 1 && x < n && y > 1 && y < m)
    {
        if (arr[x - 1][y - 1] == 'x' &&
            arr[x + 1][y + 1] == 'x' &&
            arr[x - 1][y + 1] == 'x' &&
            arr[x + 1][y - 1] == 'x' &&
            arr[x][y - 1] == 'x' &&
            arr[x][y + 1] == 'x' &&
            arr[x + 1][y] == 'x' &&
            arr[x - 1][y] == 'x')
            printf("yes");
        else
            printf("no");
    }
    else if (x == 1 && y == 1 &&
             arr[x + 1][y] == 'x' &&
             arr[x + 1][y + 1] == 'x' &&
             arr[x][y + 1] == 'x')
    {
        printf("yes");
    }
    else if (x == n && y == 1 &&
             arr[x - 1][y] == 'x' &&
             arr[x - 1][y - 1] == 'x' &&
             arr[x][y + 1] == 'x')
    {
        printf("yes");
    }
    else if (x == n && y == m &&
             arr[x][y - 1] == 'x' &&
             arr[x - 1][y - 1] == 'x' &&
             arr[x - 1][y] == 'x')
    {
        printf("yes");
    }
    else if (x == 1 && y == m &&
             arr[x][y - 1] == 'x' &&
             arr[x + 1][y - 1] == 'x' &&
             arr[x + 1][y] == 'x')
    {
        printf("yes");
    }
    else
        printf("no");

    return 0;
}