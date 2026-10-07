#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int vow = 0;
    char s[201];
    fgets(s, 201, stdin);

    for (int i = 0; s[i] != '\0'; i++)
    {
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            vow++;
    }

    printf("%d", vow);

    return 0;
}