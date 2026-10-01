#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1, stars = 1;

    for (int i = 1; i <= n; i++) // To print the lines
    {

        for (int j = space; j > 0; j--) // To print the spaces
            printf(" ");

        for (int j = 1; j <= stars; j++) // To print the stars
            printf("*");

        printf("\n");
        space--, stars += 2;
    }

    return 0;
}