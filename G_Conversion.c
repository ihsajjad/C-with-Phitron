#include <stdio.h>
#include <string.h>

int main()
{
    char s[100001];
    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++)
    {
        char c = s[i];
        if (c == ',')
            printf(" ");
        if (c >= 97)
            printf("%c", c - 32);
        else if (c >= 65)
            printf("%c", c + 32);
    }

    return 0;
}