#include <stdio.h>
void decreasingIncreasing(int n)
{
    if (n == 0)
        return;

    printf("\n%d", n);
    decreasingIncreasing(n - 1);
    printf("\n%d", n);

    return;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    decreasingIncreasing(n);
    printf("\n");

    return 0;
}