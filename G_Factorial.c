#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long int arr[21], mul = 1;

    arr[0] = 1;

    for (int i = 1; i <= 20; i++)
    {
        mul *= i;
        arr[i] = mul;
    }

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);

        printf("%lld\n", arr[num]);
    }

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {

//         long long int mul = 1;
//         int num;
//         scanf("%d", &num);

//         for (int j = 1; j <= num; j++)
//             mul *= j;

//         printf("%lld\n", mul);
//     }

//     return 0;
// }