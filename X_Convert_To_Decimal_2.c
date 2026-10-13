#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>

// That was hard. That was fun!

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int val;
        scanf("%d", &val);

        int power = 0, sum = 0;

        while (val)
        {
            if (val % 2)
            {
                sum += pow(2, power);
                power++;
            }
            val /= 2;
        }

        printf("%d\n", sum);
    }

    return 0;
}