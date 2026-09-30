#include <stdio.h>

int main()
{
    int n, num;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &num);
        if (num == 0)
            printf("0");
        else
            while (num > 0)
            {
                printf("%d ", num % 10);
                num /= 10;
            }
        printf("\n");
    }

    return 0;
}