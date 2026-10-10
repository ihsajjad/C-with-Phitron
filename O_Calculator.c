#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int a, b;
    char sign;
    scanf("%d %c %d", &a, &sign, &b);

    if (sign == '+')
        printf("%d", a + b);
    else if (sign == '-')
        printf("%d", a - b);
    else if (sign == '*')
        printf("%d", a * b);
    else
        printf("%d", a / b);

    return 0;
}