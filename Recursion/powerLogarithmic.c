#include <stdio.h>

// example : 2 ^ 9 = (2 ^ 4) * (2 ^ 4) * 2
//      and  2^8 =   (2^4) * (2^4)

int logPower(int base, int power)
{
    if (power == 0)
        return 1;

    int x = logPower(base, power / 2);

    if (power % 2 == 0)
    {
        return x * x;
    }
    else
    {
        return x * x * base;
    }
}

int main()
{
    int base;
    printf("Enter base value: ");
    scanf("%d", &base);

    int power;
    printf("Enter power value: ");
    scanf("%d", &power);

    int exponent = logPower(base, power);
    printf("The result of base %d to the power of %d is: %d", base, power, exponent);

    return 0;
}