#include <stdio.h>
int main()
{

    int a, b, n;
    printf("Enter the 1st number: ");
    scanf("%d", &a);

    printf("Enter the 2nd number: ");
    scanf("%d", &b);

    printf("Enter how many terms to generate: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of terms must be positive.\n");
        return 1;
    }

    if (n >= 1) printf("Term 1: %d\n", a);
    if (n >= 2) printf("Term 2: %d\n", b);

    int sum = 0;

    for (int i = 3; i <= n; i++)
    {
        sum = a + b;
        printf("Term %d: %d\n", i, sum);
        a = b;
        b = sum;
    }

    

    return 0;
}