#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int ans = 0;
    while (true)
    {
        bool isStop = false;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2)
            {
                isStop = true;
                break;
            }
            else
                arr[i] = arr[i] / 2;
        }
        if (isStop)
            break;
        ans++;
    }

    printf("%d", ans);

    return 0;
}