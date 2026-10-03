#include <stdio.h>
#include <string.h>
#include <limits.h>

void print_num(int n)
{
    if (n == 0)
        return;

    printf(n == 1 ? "%d" : "%d ", n);
    print_num(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    print_num(n);
    return 0;
}