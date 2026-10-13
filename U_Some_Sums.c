#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int sum_of_dgit = 0;
        int num = i;
        while (num)
        {
            sum_of_dgit += num % 10;
            num /= 10;
        }

        if (a <= sum_of_dgit && sum_of_dgit <= b)
        {
            sum += i;
        }
    }
    printf("%d", sum);

    return 0;
}