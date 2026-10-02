#include <stdio.h>
#include <string.h>
#include <limits.h>

int find_min(int n, int arr[])
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
        min = arr[i] < min ? arr[i] : min;

    return min;
}

int find_max(int n, int arr[])
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
        max = arr[i] > max ? arr[i] : max;

    return max;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d %d", find_min(n, arr), find_max(n, arr));

    return 0;
}