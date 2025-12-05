#include <stdio.h>
int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // 100 97 94 93 90.... till +ve number
    int a = 100;
    for (int i = 1; a > 0; i++)
    {
        printf("%d ", a);
        a = a - 3;
    }

    return 0;
}