#include <stdio.h>
#include <string.h>
#include <limits.h>

void print_array(int a[], int n, int i)
{
    if (i == n)
        return;
    printf("%d ", a[i]);
    print_array(a, n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d ", &arr[i]);

    // for (int i = 0; i < n; i++)
    //     printf("%d ", arr[i]);

    print_array(arr, n, 0);

    return 0;
}