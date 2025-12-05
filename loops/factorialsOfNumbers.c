// #include <stdio.h>

// int factorial(int n)
// {
    // int product = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     product = product * i;
    // }
//     return product;
// }

// int main()
// {

//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     printf("Factorials from 1 to %d:\n", n);

//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d! = %d\n", i, factorial(i));
//     }

    

//     return 0;
// }



//--------------- OR ------------------


#include <stdio.h>

int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorials from 1 to %d:\n", n);

    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        product = product * i;
        printf("%d! = %d\n", i, product);
    }
    

    return 0;
}


