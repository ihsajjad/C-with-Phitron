#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // Print Min
    printf("%d ", a < b && a < c ? a : b < c ? b
                                             : c);
    // Print Max
    printf("%d", a > b && a > c ? a : b > c ? b
                                            : c);
    return 0;
}