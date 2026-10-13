#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n == 1)
    {
        printf("0");
        return 0;
    }

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    for (int i = 0; i < n; i++)
        printf("%d ", fib[i]);

    return 0;
}