#include <stdio.h>

int main()
{
    int val;
    while (scanf("%d", &val))
    {
        if (val == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
            printf("Wrong\n");
    }

    return 0;
}