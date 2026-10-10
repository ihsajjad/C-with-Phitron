#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    float f;
    scanf("%f", &f);

    int f_int = f;

    if (f > f_int)
        printf("float %d %.3f", f_int, f - f_int);
    else
        printf("int %d", f_int);
    return 0;
}