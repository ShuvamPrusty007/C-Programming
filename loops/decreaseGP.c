#include <stdio.h>
int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // 100 50 25 12.5 ... +ve number
    float a = 100;
    for (int i = 1; a > 0; i++)
    {
        printf("%f ", a);
        a = a / 2;
    }

    return 0;
}