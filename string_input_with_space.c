#include <stdio.h>

int main()
{
    int n = 50;
    char s[n];
    fgets(s, n, stdin);
    printf("%s", s);

    return 0;
}