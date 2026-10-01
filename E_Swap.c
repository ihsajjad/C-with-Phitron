#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int tmp = a;
    a = b;
    b = tmp;
    printf("%d %d", a, b);
    return 0;
}