#include <stdio.h>
#include <string.h>
#include <limits.h>

void sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int tem = arr[i];
            if (arr[i] > arr[j])
            {
                arr[i] = arr[j];
                arr[j] = tem;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr_a[n], arr_b[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr_a[i]);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr_b[i]);

    sort(arr_a, n), sort(arr_b, n);

    bool flag = true;
    for (int i = 0; i < n; i++)
        if (arr_a[i] != arr_b[i])
            flag = false;

    printf(flag ? "yes" : "no");

    return 0;
}