#include <stdio.h>

int main()
{
    int num, a, b;
    scanf("%d", &num);

    a = num / 10, b = num % 10;

    if (a == 0 || b == 0 || !(a % b) || !(b % a))
        printf("YES");
    else
        printf("NO");

    return 0;
}