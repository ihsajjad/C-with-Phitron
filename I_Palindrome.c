// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[1001];
//     scanf("%s", s);

//     int sz = strlen(s);

//     bool flag = true;
//     for (int i = 0, j = sz - 1; i < j; i++, j--)
//         if (s[i] != s[j])
//             flag = false;

//     printf(flag ? "YES" : "NO");

//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    char s[10001];
    scanf("%s", s);

    int len = strlen(s);

    bool flag = true;
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
            flag = false;

        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }

    bool non_zero = false;
    for (int i = 0; i < len; i++)
    {
        if (s[i] != '0')
            non_zero = true;

        if (non_zero)
            printf("%c", s[i]);
    }

    printf(flag ? "\nYES" : "\nNO");
    return 0;
}