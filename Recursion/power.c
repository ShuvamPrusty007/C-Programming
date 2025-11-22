#include <stdio.h>
int powerOf(int base, int power)
{
    if (power == 0)
        return 1;

    return base * powerOf(base, power - 1);
}

int main()
{
    int base;
    printf("Enter base value: ");
    scanf("%d", &base);

    int power;
    printf("Enter power value: ");
    scanf("%d", &power);

    int exponent = powerOf(base, power);
    printf("The result of base %d to the power of %d is: %d", base, power, exponent);

    return 0;
}