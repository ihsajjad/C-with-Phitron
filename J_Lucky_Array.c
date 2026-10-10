#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n, min = INT_MAX;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < min)
            min = arr[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == min)
            cnt++;

    printf(cnt % 2 ? "Lucky" : "Unlucky");

    return 0;
}