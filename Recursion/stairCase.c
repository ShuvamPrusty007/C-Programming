#include <stdio.h>
// using staircase either 1-step or 2-step or 3-step
int stairCase(int n)
{

    if (n == 1)
        return 1;

    if (n == 2)
        return 2;

    if (n == 3)
        return 4;

    return stairCase(n - 1) + stairCase(n - 2) + stairCase(n - 3);
}

int main()
{
    int n;
    printf("\nEnter the value of stairs: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("\nNumber must be greater than 0.\n");
        return 1;
    }

    printf("\nThe number of ways to reach to the top of stair case is: %d\n", stairCase(n));

    return 0;
}