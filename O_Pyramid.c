#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}