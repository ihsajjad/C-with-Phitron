#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000001];
    fgets(s, 1000001, stdin);

    long long int sum = 0;
    for (int i = 0; i < strlen(s) - 1; i++)
        sum += (s[i] - 48);

    printf("%lld", sum);
    return 0;
}