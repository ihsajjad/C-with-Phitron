#include <stdio.h>
#include <limits.h>

int main()
{
    int n, num, max = INT_MIN;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &num);
        if (num > max)
            max = num;
    }

    printf("%d", max);

    return 0;
}