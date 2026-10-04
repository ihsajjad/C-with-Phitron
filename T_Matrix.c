#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    int primary_sum = 0, secondary_sum = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                primary_sum += arr[i][j];

            if (i + j == n - 1)
                secondary_sum += arr[i][j];
        }

    printf("%d", abs(primary_sum - secondary_sum));
    return 0;
}