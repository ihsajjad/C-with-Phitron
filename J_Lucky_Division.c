#include <stdio.h>
#include <string.h>
#include <limits.h>

// That was amazing feeling when I saw It was accepted. aaaahhhhhhhhh

int main()
{
    int n;
    scanf("%d", &n);

    if (!(n % 4) || !(n % 7) || !(n % 47) || !(n % 74))
    {
        printf("YES");
        return 0;
    }

    bool flag = true;
    while (n)
    {
        if (n % 10 != 4 && n % 10 != 7)
        {
            flag = false;
            break;
        }
        n /= 10;
    }

    printf(flag ? "YES" : "NO");

    return 0;
}