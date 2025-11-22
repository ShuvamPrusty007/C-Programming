#include <stdio.h>
void sumParameterized(int n, int sum)
{
    if (n == 0)
    {
        printf("\nThe sum is: %d", sum);
        return;
    }

    sumParameterized(n - 1, sum + n);
    return;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    sumParameterized(n, 0);

    return 0;
}