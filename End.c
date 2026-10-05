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

    int i = 0, j = n - 1;
    bool toggle = true;
    while (i <= j)
    {
        if (toggle)
        {
            printf("%d ", arr[i]);
            i++;
            toggle = false;
        }
        else
        {
            printf("%d ", arr[j]);
            j--;
            toggle = true;
        }
    }

    return 0;
}