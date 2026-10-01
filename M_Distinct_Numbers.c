#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int count_dis(int n, int arr[])
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int a = arr[i];
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            if (a == arr[j])
                flag = true;
        }
        if (!flag)
            cnt++;
    }

    return cnt;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d", count_dis(n, arr));
    return 0;
}