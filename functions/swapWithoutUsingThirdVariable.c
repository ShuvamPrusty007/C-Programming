#include <stdio.h>
int main()
{

    int a;
    printf("a: ");
    scanf("%d", &a);

    int b;
    printf("b: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap a: %d and b: %d", a, b);

    return 0;
}