#include <stdio.h>
int main()
{

    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    int temp = n;
    int rev = 0;

    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    int sum = n + rev;

    printf("the su of given number + reverse: %d", sum);

    return 0;
}