// #include <stdio.h>
// int main()
// {

//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     // 1 - 2 + 3 - 4 + 5 .....n ---> series

//     int sum =0;
//     for (int i = 1; i <= n; i++) // N TIMES LOOP RUNS SO O(N)
//     {
//         if (i % 2 == 0) sum -= i;
//         if (i % 2 != 0) sum += i;
//     }

//     printf("SUM is: %d", sum);

//     return 0;
// }

//------------------ OR -----------------

#include <stdio.h>
int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // 1 - 2 + 3 - 4 + 5 .....n ---> series

    int sum = 0;

    if (n % 2 == 0)
    {
        sum = -n / 2;
    }
    else
    {
        sum = -n / 2 + n;
    }

    printf("SUM is: %d", sum);

    return 0;
}