#include <stdio.h>
#include <string.h>
#include <limits.h>

int rec(char s[], int i)
{
    char c = s[i];
    if (c == '\n')
        return 0;

    int sum = rec(s, i + 1);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return sum + 1;

    return sum;
}

int main()
{
    int vow = 0;
    char s[201];
    fgets(s, 201, stdin);

    printf("%d", rec(s, 0));

    return 0;
}