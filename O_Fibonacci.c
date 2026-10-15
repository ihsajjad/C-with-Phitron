#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    long long arr[50];
    arr[0] = 0, arr[1] = 1;

    for (int i = 2; i < 50; i++)
        arr[i] = arr[i - 1] + arr[i - 2];

    int n;
    scanf("%d", &n);

    printf("%lld", arr[n - 1]);

    return 0;
}