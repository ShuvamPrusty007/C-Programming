#include <stdio.h>
int main()
{

    int a;
    printf("a: ");
    scanf("%d", &a);

    int b;
    printf("b: ");
    scanf("%d", &b);

    int temp = a;
    a = b;
    b = temp;

    printf("After swap a: %d and b: %d", a, b);

    return 0;
}