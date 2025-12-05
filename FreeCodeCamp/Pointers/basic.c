#include <stdio.h>
// Pointers: variables that store address of other variables
int main()
{
    int a;
    int *p;
    p = &a; // address of a
    printf("\naddress of a: %p", &a);
    printf("\naddress of p: %p", p);
    printf("\nvalue of *p: %d", *p); // garbage value since not initialized "a"
    a = 5;
    printf("\nvalue of a: %d", a);
    printf("\nvalue of *p: %d", *p); // will print value of "a"
    *p = 8;                          // dereferencing
    printf("\nvalue of a: %d", a);
    printf("\nvalue of *p: %d", *p);

    char ch;
    char *p1;
    p1 = &ch;
    printf("\naddress of ch: %p", &ch);
    printf("\naddress of *p1: %p", p1);

    printf("\n\nPinter arithematic: \n");
    // Pointer arithemetic
    printf("\naddress of p: %p", p); // p is 2002
    printf("\nvalue of p: %d", *p);
    printf("\naddress of p+1: %p", p + 1); // p is 2006
    printf("\nvalue of p+1: %d", *(p + 1));

    return 0;
}