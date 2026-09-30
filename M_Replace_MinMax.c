#include <stdio.h>
#include <limits.h>

int main()
{
    int n, min = INT_MAX, max = INT_MIN, min_idx, max_idx;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (min > arr[i])
            min = arr[i], min_idx = i;
        if (max < arr[i])
            max = arr[i], max_idx = i;
    }

    arr[min_idx] = max;
    arr[max_idx] = min;

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}