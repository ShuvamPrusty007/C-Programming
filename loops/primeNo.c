#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int count = 0;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }

    if (n == 1)
    {
        printf("Neither prime nor composite");
    }
    else if (count == 0)
    {
        printf("Prime no.");
    }
    else
    {
        printf("Composite no.");
    }

    return 0;
}