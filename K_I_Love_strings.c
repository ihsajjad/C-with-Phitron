#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char a[51], b[51];
        scanf("%s %s", a, b);

        int a_len = strlen(a), b_len = strlen(b);

        int i = 0;
        int len = a_len > b_len ? a_len : b_len;
        for (int i = 0; i < len; i++)
        {
            if (i < a_len)
                printf("%c", a[i]);
            if (i < b_len)
                printf("%c", b[i]);
        }
        printf("\n");
    }

    return 0;
}