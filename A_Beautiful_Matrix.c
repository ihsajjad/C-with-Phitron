#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    int arr[5][5];
    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);

            if (arr[i][j] == 1)
            {
                int move = abs(i - 3 + 1) + abs(j - 3 + 1);
                ans = move;
            }
        }
    }

    printf("%d", ans);

    return 0;
}