#include <stdio.h>

int main()
{
    int n, odd = 0, even = 0, pos = 0, neg = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int val;
        scanf("%d", &val);
        if (val % 2)
            odd++;
        else
            even++;

        if (val < 0)
            neg++;
        else if (val > 0)
            pos++;
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, pos, neg);

    return 0;
}