#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int dgt;

    while (x > 0)
    {
        dgt = x % 10;
        x /= 10;
    }

    if (dgt % 2 == 0)
        printf("EVEN");
    else
        printf("ODD");

    return 0;
}