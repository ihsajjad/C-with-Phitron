#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    char s[a + b + 2];
    scanf("%s", s);

    bool flag = true;
    for (int i = a + 1; i < a + b + 1; i++)
        if (s[i] < '0' || s[i] > '9')
            flag = false;

    printf(s[a] == '-' && flag ? "Yes" : "No");
    return 0;
}