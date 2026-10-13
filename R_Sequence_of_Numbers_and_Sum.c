#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        if (n <= 0 || m <= 0)
            return 0;

        int min = n < m ? n : m;
        int max = n < m ? m : n;

        int sum = 0;
        for (int i = min; i <= max; i++)
        {
            sum += i;
            printf("%d ", i);
        }
        printf("sum =%d\n", sum);
    }

    return 0;
}