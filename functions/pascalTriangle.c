// #include <stdio.h>

// int factorial(int x)
// {

//     int fact = 1;
//     for (int i = 2; i <= x; i++)
//     {
//         fact = fact * i;
//     }

//     return fact;
// }

// int combination(int n, int r)
// {

//     int combination = factorial(n) / (factorial(r) * factorial(n - r));
//     return combination;
// }

// int main()
// {

//     int n;
//     printf("Enter n value: ");
//     scanf("%d", &n);

//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             // int icj = combination(i,j);
//             printf("%d ", combination(i, j));
//         }
//         printf("\n");
//     }

//     return 0;
// }

// 0 1  2  3  4 5 --->r
// 1                   0--> ncr concept applied in "icj"
// 1 1                 1
// 1 2  1              2
// 1 3  3  1           3
// 1 4  6  4  1        4
// 1 5 10 10  5 1      5
//                     n




//      1            0   -----> space 5
//     1 1           1   -----> space 4
//    1 2 1          2   -----> space 3
//   1 3 3 1         3   -----> space 2
//  1 4 6 4 1        4   -----> space 1
// 1 5 10 10 5 1     5   -----> space 0


#include <stdio.h>

int factorial(int x)
{

    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int combination(int n, int r)
{

    int combination = factorial(n) / (factorial(r) * factorial(n - r));
    return combination;
}

int main()
{

    int n;
    printf("Enter n value: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        for (int space = 0; space < n - i; space++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            // int icj = combination(i,j);
            printf("%d ", combination(i, j));
        }
        printf("\n");
    }

    return 0;
}