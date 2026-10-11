#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a == 0 && b == 0)
        printf("NO");
    else
        printf(abs(a - b) > 1 ? "NO" : "YES");

    return 0;
}