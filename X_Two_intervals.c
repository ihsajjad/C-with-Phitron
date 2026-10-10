#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a <= c && d <= b)
        printf("%d %d", c, d);
    else if (c <= a && b <= d)
        printf("%d %d", a, b);
    else if (a <= c && c <= b)
        printf("%d %d", b < c ? b : c, b > c ? b : c);
    else if (c <= a && a <= d)
        printf("%d %d", d < a ? d : a, d > a ? d : a);
    else
        printf("-1");

    return 0;
}