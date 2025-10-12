#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

     if (x % 2 == 0)
    {
        printf("This number %d is even", x);
    }
    else
    {
        printf("This number %d is odd", x);
    }

    return 0;
}