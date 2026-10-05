#include <stdio.h>
#include <string.h>
#include <limits.h>

long long int calc_sum(int arr[], int i, long long int sum)
{
    if (i < 0)
        return 0;

    return calc_sum(arr, i - 1, sum) + arr[i];
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    long long int sum = calc_sum(arr, n - 1, 0);
    printf("%lld", sum);

    return 0;
}