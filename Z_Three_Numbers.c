#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int k, s;
    scanf("%d %d", &k, &s);

    int cnt = 0;
    for (int x = 0; x <= k; x++)
    {
        for (int y = 0; y <= k; y++)
        {
            int z = s - x - y;
            if (0 <= z && z <= k)
                cnt++;
        }
    }

    printf("%d", cnt);
    return 0;
}