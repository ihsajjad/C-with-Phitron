#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int a, b, c;
    char s, q;
    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);

    if (s == '+')
        printf(a + b == c ? "Yes" : "%d", a + b);
    else if (s == '-')
        printf(a - b == c ? "Yes" : "%d", a - b);
    else if (s == '*')
        printf(a * b == c ? "Yes" : "%d", a * b);

    return 0;
}