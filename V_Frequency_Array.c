#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n], frq[m + 1];

    for (int i = 0; i <= m; i++)
        frq[i] = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        frq[arr[i]]++;
    }

    for (int i = 1; i <= m; i++)
        printf("%d\n", frq[i]);

    return 0;
}