#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int ans1 = a + b - c;
    int ans2 = a + b * c;
    int ans3 = a - b + c;
    int ans4 = a - b * c;
    int ans5 = a * b + c;
    int ans6 = a * b - c;

    if (ans1 == d || ans2 == d || ans3 == d || ans4 == d || ans5 == d || ans6 == d)
        printf("YES");
    else
        printf("NO");

    return 0;
}