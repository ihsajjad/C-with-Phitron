#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int stars = n;

    for (int i = 0; i < n; i++)
    {
        for (int j = stars; j > 0; j--)
            printf("*");

        printf("\n");

        stars--;
    }

    return 0;
}