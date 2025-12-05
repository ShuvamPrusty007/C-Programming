#include <stdio.h>
#include <string.h>
int gcd(int a, int b, int n)
{
    int idx = 1;
    int count = 0;
    for (int i = n/2; i >= 2; i--)
    {
        count++;
        if (a % i == 0 && b % i == 0)
        {
            idx = i;
            break;
        }
    }

    printf("count : %d\n", count);

    return idx;
}
int main()
{
    int a = 300, b = 72;

    int n = 0;

    if (a < b)
    {
        n = a;
    }
    else
    {
        n = b;
    }

    int GCD = gcd(a, b, n);
    printf("%d", GCD);

    return 0;
}