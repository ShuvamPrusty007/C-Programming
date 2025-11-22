#include <stdio.h>
int fibonacci(int n)
{

    if (n == 1 || n == 2)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    printf("\nEnter the value for which the term to generate: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("\nNumber of terms must be greater than 0.\n");
        return 1;
    }

    printf("\nThe %dth term value is: %d", n, fibonacci(n));

    return 0;
}