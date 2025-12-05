#include <stdio.h>
int main()
{

    int a, b, n;
    printf("Enter the 1st number: ");
    scanf("%d", &a);

    printf("Enter the 2nd number: ");
    scanf("%d", &b);

    printf("Enter the nth term to find: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n - 2; i++)
    {
        sum = a + b;

        a = b;
        b = sum;
    }

    printf("The %dth term is: %d", n, sum);

    return 0;
}