#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    if (c <= 90)
        c += 32;
    else
        c -= 32;
    printf("%c", c);

    return 0;
}