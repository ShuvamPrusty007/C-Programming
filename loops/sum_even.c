// #include <stdio.h>
// int main()
// {

//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     int sum = 0;

//     while (n > 0)
//     {
//         int r = n % 10;
//         if (r % 2 == 0)
//         {

//             sum += r;
//         }

//         n = n / 10;
//     }

//     printf("The sum is: %d", sum);

//     return 0;
// }

//----------------OR-------------

#include <stdio.h>
int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;

    while (n > 0)
    {
        int r = n % 10;
        n = n / 10;
        if (r % 2 != 0)
            continue;

        sum += r;
    }

    printf("The sum is: %d", sum);

    return 0;
}