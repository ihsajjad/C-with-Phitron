#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    bool flag = true;

    for (int i = 2; i <= sqrt(n); i++)
        if (!(n % i))
            flag = false;

    printf(flag ? "YES" : "NO");

    return 0;
}