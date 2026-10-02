#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int stars = 1, spaces = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = spaces; j > 0; j--)
            printf(" ");

        for (int j = 0; j < stars; j++)
            printf("*");

        printf("\n");
        stars += 2, spaces--;
    }

    return 0;
}