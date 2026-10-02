#include <stdio.h>
#include <string.h>
#include <limits.h>

void fun(int a[])
{
    a[1] = 300;
}

int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    // printf("%p- > %p\n", &a, &a[0]);
    // printf("%p\n", &a[1]);
    // printf("%p\n", &a[2]);
    // printf("%p\n", &a[3]);
    fun(a);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}