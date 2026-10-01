#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    char s1[101], s2[101];
    scanf("%s %s", s1, s2);

    int i = 0;
    while (true)
    {
        if (s1[i] == '\0' && s2[i] == '\0')
        {
            printf("Equal\n");
            break;
        }
        else if (s1[i] > s2[i] || s2[1] == '\0')
        {
            printf("A Large");
            break;
        }
        else if (s1[i] < s2[i] || s1[1] == '\0')
        {
            printf("B Large");
            break;
        }
        else
            i++;
    }

    return 0;
}