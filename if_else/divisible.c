#include <stdio.h>
int main()
{

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    // if (n % 5 == 0 && n % 3 == 0)
    // {
    //     printf("The number is divisible by 5 and 3");
    // }
    // else
    // {
    //     printf("Not");
    // }

    // OR

    if (n % 15 == 0)
    {
        printf("The number is divisible by 5 and 3");
    }
    else
    {
        printf("Not");
    }

    return 0;
}