#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    bool is_exist = false;

    for (int i = a; i <= b; i++)
    {
        bool flag = true;

        int n = i;
        while (n)
        {
            if (n % 10 != 4 && n % 10 != 7)
                flag = false;

            n /= 10;
        }

        if (flag)
        {
            printf("%d ", i);
            is_exist = true;
        }
    }

    if (!is_exist)
        printf("-1");

    return 0;
}