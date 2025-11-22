#include <stdio.h>
int sumOf(int n)
{
    if (n == 1 || n == 0)
        return n;

    return n + sumOf(n - 1);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = sumOf(n);
    printf("The factorial of %d is: %d", n, sum);

    return 0;
}