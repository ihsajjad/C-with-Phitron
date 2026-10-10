#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    char s[101], n1[101], n2[101];
    scanf("%s %s %s %s", s, n1, s, n2);

    if (!strcmp(n1, n2))
        printf("ARE Brothers");
    else
        printf("NOT");

    return 0;
}