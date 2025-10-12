#include <stdio.h>
int main()
{
    int a;
    printf("Enter the Dividend: ");
    scanf("%d", &a);
    int b;
    printf("Enter the Divisor: ");
    scanf("%d", &b);
    int quotient = a / b;

    int rem = a - b * quotient;
    printf("The remainder of %d divided by %d is: %d", a, b, rem);

    // int rem = a % b;

    return 0;
}

// Divisor ---> The number which divides
// Dividend ---> The number which gets divided
// quotient ---> The number through which Divisor divides , i.e, its multiple
// remainder --> The number which is left after division is done
// Divisor x quotient + remainder = Dividend
// Remainder = Dividend - Divisor x quotient

// R = A - B x Q