#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);

    if (c >= 97)
        printf("ALPHA\nIS SMALL");
    else if (c >= 65)
        printf("ALPHA\nIS CAPITAL");
    else
        printf("IS DIGIT");

    return 0;
}