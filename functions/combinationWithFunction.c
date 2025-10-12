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

int main()
{

    int n;
    printf("Enter n value: ");
    scanf("%d", &n);
    int r;
    printf("Enter r value: ");
    scanf("%d", &r);

    int combination = factorial(n) / (factorial(r) * factorial(n - r));
    printf("The combination is: %d", combination);

    return 0;
}