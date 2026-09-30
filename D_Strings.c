#include <stdio.h>
#include <string.h>
int main()
{
    char s1[11], s2[11];
    scanf("%s %s", s1, s2);

    int sz1 = strlen(s1), sz2 = strlen(s2);
    printf("%d %d\n", sz1, sz2);
    printf("%s%s\n", s1, s2);

    char temp = s1[0];
    s1[0] = s2[0], s2[0] = temp;
    printf("%s %s", s1, s2);
    return 0;
}