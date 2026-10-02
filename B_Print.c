#include <stdio.h>
#include <string.h>
#include <limits.h>

void print_num(int n)
{
    for (int i = 1; i <= n; i++)
        printf(i == n ? "%d" : "%d ", i);
}

int main()
{
    int n;
    scanf("%d", &n);
    print_num(n);
    return 0;
}