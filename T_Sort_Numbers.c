#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int min = a < b && a < c ? a : b < c ? b
                                         : c;
    int max = a > b && a > c ? a : b > c ? b
                                         : c;
    int mid = a == min && b == max ? c : b == min && c == max ? a
                                     : c == min && a == max   ? b
                                     : a == min && c == max   ? b
                                     : b == min && a == max   ? c
                                                              : a;

    printf("%d\n%d\n%d\n\n", min, mid, max);

    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}