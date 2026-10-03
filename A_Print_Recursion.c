#include <stdio.h>
#include <string.h>
#include <limits.h>

void printstr(int n)
{
    if (n == 0)
        return;

    printf("I love Recursion\n");
    printstr(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    printstr(n);
    return 0;
}