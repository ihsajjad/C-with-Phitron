#include <stdio.h>

int main()
{
    int n, x, idx = -1;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            idx = i;
            break;
        }
    }

    printf("%d", idx);

    return 0;
}