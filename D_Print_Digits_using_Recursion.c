#include <stdio.h>
#include <string.h>
#include <limits.h>

void print_digit(int n)
{
    if (n == 0)
        return;

    print_digit(n / 10);
    printf("%d ", n % 10);
}

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int val;
        scanf("%d", &val);

        if (val == 0)
        {
            printf("%d\n", 0);
            continue;
        }

        print_digit(val);
        printf("\n");
    }

    return 0;
}