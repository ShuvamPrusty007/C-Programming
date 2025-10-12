// #include <stdio.h>
// int min(int a, int b)
// {
//     if (a < b)
//         return a;
//     else
//         return b;
// }

// int gcd(int a, int b)
// {
//     int hcf = 1;
//     for (int i = 1; i <= min(a, b); i++)
//     {
//         if (a % i == 0 && b % i == 0)
//         {
//             hcf = i;
//         }
//     }

//     return hcf;
// }

// int main()
// {

//     int a;
//     printf("Enter value of a: ");
//     scanf("%d", &a);

//     int b;
//     printf("Enter value of b: ");
//     scanf("%d", &b);

//     int hcf = gcd(a, b);
//     printf("The hcf/gcd of a:%d and b:%d is: %d", a, b, hcf);

//     return 0;
// }

//-----------------------or-----------------------------

#include <stdio.h>
int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int gcd(int a, int b)
{
    int hcf = 1;
    for (int i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)

            hcf = i;
        break;
    }

    return hcf;
}

int main()
{

    int a;
    printf("Enter value of a: ");
    scanf("%d", &a);

    int b;
    printf("Enter value of b: ");
    scanf("%d", &b);

    int hcf = gcd(a, b);
    printf("The hcf/gcd of a:%d and b:%d is: %d", a, b, hcf);

    return 0;
}