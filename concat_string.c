#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    char s1[101], s2[101];
    scanf("%s %s", s1, s2);

    int len_s1 = strlen(s1);

    for (int i = 0; i <= strlen(s2); i++)
        s1[len_s1 + i] = s2[i];

    printf("%s", s1);

    return 0;
}