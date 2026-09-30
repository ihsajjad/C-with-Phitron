#include <stdio.h>
#include <string.h>

int main()
{
    char a[1001], b[1001];
    scanf("%s %s", a, b);

    int a_len = strlen(a), b_len = strlen(b);

    printf("%d %d\n%s %s", a_len, b_len, a, b);
    return 0;
}