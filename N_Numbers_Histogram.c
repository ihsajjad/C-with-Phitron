#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    char c;
    int n;
    scanf("%c %d", &c, &n);

    for (int i = 0; i < n; i++)
    {
        int val;
        scanf("%d", &val);
        for (int j = 0; j < val; j++)
            printf("%c", c);

        printf("\n");
    }

    return 0;
}