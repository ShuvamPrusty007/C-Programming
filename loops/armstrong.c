#include <stdio.h>

int power(int n)
{
    int num = 1;

    for (int i = 1; i <= 3; i++)
    {

        num = num * n;
    }

    return num;
}

void armstrong(int n)
{

    int result = 0;
    int temp = n;
    while (temp > 0)
    {
        int r = temp % 10;
        result += power(r);
        temp = temp / 10;
    }

    if (result == n)
    {
        printf("%d is an Armstrong number\n", n);
    }
    // else
    // {
    //     printf("%d Not Armstrong number\n", n);
    // }
}

int main()
{

    for (int i = 1; i <= 500; i++)
    {
        armstrong(i);
    }

    return 0;
}
