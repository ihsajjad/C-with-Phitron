#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int frq[26] = {0};

    char c;
    while (scanf("%c", &c) != EOF)
        frq[c - 'a']++;

    for (int i = 0; i < 26; i++)
    {
        if (frq[i] > 0)
            printf("%c : %d\n", i + 'a', frq[i]);
    }

    return 0;
}