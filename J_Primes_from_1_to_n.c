#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        bool is_prime = true;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (!(i % j))
                is_prime = false;
        }

        if (is_prime)
            printf("%d ", i);
    }

    return 0;
}