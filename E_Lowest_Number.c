#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int idx = -1, num = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < num)
        {
            idx = i;
            num = arr[i];
        }
    }

    printf("%d %d", num, idx + 1);

    return 0;
}