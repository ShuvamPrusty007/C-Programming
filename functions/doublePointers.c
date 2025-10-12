#include <stdio.h>
int main()
{

    int a = 5;
    int *x = &a;
    *x = 100;

    int **y = &x;

    printf("Value of A: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Address of a in x: %p\n", x);
    printf("Address of x: %d\n", &x);
    printf("Address of y: %d\n", &y);
    printf("Value of x: %d\n", *x);
    printf("Value of y: %d\n", **y);

    **y = 200;
    printf("Changed value of y: %d\n", **y);

    return 0;
}