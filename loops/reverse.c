#include <stdio.h>
int main()
{

    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);

    int reverse = 0;

    while (n > 0)
    {
        reverse = reverse * 10 + n % 10;

        n = n / 10;
    }

    printf("REVERSE OF A NUMBER: %d", reverse);

    return 0;
}