// LONG CUT WITH THE CUSTOM CODE

// #include <stdio.h>
// #include <string.h>
// #include <limits.h>

// int main()
// {
//     char a[21], b[21];
//     scanf("%s %s", &a, &b);

//     int i = 0;
//     while (true)
//     {
//         if (a[i] == '\0' && b[i] == '\0')
//         {
//             printf("%s", a);
//             break;
//         }
//         else if (a[i] < b[i] || a[i] == '\0')
//         {
//             printf("%s", a);
//             break;
//         }
//         else if (b[i] < a[i] || b[i] == '\0')
//         {
//             printf("%s", b);
//             break;
//         }
//         else
//             i++;
//     }

//     return 0;
// }

// SHORTCUT
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    char a[21], b[21];
    scanf("%s %s", &a, &b);

    int flag = strcmp(a, b);
    printf("%s", flag < 0 ? a : b);

    return 0;
}