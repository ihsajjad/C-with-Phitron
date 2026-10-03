#include <stdio.h>
#include <string.h>
#include <limits.h>

void print_num(int arr[], int n, int i)
{
    if (i >= n)
        return;

    print_num(arr, n, i + 1);
    if (i % 2 == 0)
        printf("%d ", arr[i]);
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    print_num(arr, n, 0);

    return 0;
}