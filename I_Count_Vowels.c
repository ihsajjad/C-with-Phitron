#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int vow = 0;
    char c;

    while (scanf("%c", &c) != EOF)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            vow++;
    }

    printf("%d", vow);

    return 0;
}