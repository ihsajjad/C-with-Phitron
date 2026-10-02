#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int space1 = n - 1, space2 = 1, stars1 = 1, stars2 = n * 2 - 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = space1; j > 0; j--)
            printf(" ");

        for (int j = 1; j <= stars1; j++)
            printf("*");

        printf("\n");
        space1--, stars1 += 2;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < space2; j++)
            printf(" ");

        for (int j = stars2; j > 0; j--)
            printf("*");

        printf("\n");
        space2++, stars2 -= 2;
    }

    return 0;
}