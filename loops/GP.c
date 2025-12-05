#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // 1 2 4 8 32 .....
    //  a = 1, r = 2(1*2, 2*4,..)
    // a nth = a*r^n-1
    // without formula
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a * 2;
    }

    return 0;
}