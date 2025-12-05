#include <stdio.h>
int main()
{
    // Pointers store variable address
    int a = 5;
    int b = 5;
    printf("%p\n", &a); //%p --- address print
    // printf("%p", &b);   //%p --- address print

    // declaration of  pointer
    int *x = &a;
    printf("%p\n", x); // address of a
    printf("%p\n", &x);// address of x
    printf("Before changing x value: %d\n", *x); // value of x
    //  int *x = &a;//OR
    // int* x;//OR
    // x = &a;
    *x = 25;

    printf("After changing x value: %d", *x); // value of x

    return 0;
}