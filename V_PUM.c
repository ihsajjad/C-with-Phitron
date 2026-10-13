#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt++;
        printf("%d %d %d PUM\n", cnt, cnt + 1, cnt + 2);
        cnt += 3;
    }

    return 0;
}