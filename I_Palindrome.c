#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", s);

    int sz = strlen(s);

    bool flag = true;
    for (int i = 0, j = sz - 1; i < j; i++, j--)
        if (s[i] != s[j])
            flag = false;

    printf(flag ? "YES" : "NO");

    return 0;
}