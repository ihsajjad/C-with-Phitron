#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    printf("%c", c == 'z' ? 97 : ++c);
    return 0;
}