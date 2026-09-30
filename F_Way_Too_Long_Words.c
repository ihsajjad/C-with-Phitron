#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[101];
        scanf("%s", s);

        int sz = strlen(s);
        if (sz > 10)
            printf("%c%d%c\n", s[0], sz - 2, s[sz - 1]);
        else
            printf("%s\n", s);
    }

    return 0;
}