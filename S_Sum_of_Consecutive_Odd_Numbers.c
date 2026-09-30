#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        int sum = 0, min = x < y ? x : y, max = x > y ? x : y;
        for (int i = min + 1; i < max; i++)
        {
            if (i % 2)
                sum += i;
        }
        printf("%d\n", sum);
    }

    return 0;
}