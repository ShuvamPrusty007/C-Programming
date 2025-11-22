#include <stdio.h>
int main()
{
    // Pointer to Pointer
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;

    printf("value of x = %d\n", *p);       // 6
    printf("%d\n", *q);       // p's address
    printf("%d\n", *(*q));    // value at x
    printf("%d\n", *r);       // q's address
    printf("%d\n", *(*r));    // p's address
    printf("%d\n", *(*(*r))); // x's value
    ***r = 10;
    printf("x = %d\n", x);
    **q = 100;
    printf("x = %d\n", x);

    return 0;
}