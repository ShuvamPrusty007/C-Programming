#include <stdio.h>
int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // a nth = a + (n-1)d
    // a nth = 4 +(n-1)3 => a nth = 3n + 1
    // 4 + 7 + 10 + 13 + 16 ..... 3n-1
    for (int i = 4; i <= 3 * n + 1; i = i + 3)
    {
        printf("%d ", i);
    }

    return 0;
}