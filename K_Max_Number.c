#include <stdio.h>
#include <string.h>
#include <limits.h>

int max(int arr[], int n, int i)
{
    if (i >= n)
        return INT_MIN;

    int mx = max(arr, n, i + 1);

    return mx > arr[i] ? mx : arr[i];
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d", max(arr, n, 0));

    return 0;
}