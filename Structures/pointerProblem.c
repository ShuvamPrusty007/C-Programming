#include <stdio.h>
typedef int *int_pointer;
int main()
{

    int x = 5, y = 6;
    // int* a = &x, b = &y;//wrong
    // int *a = &x, *b = &y;// works
    int_pointer a = &x, b = &y; // works

    printf("%p\n", a);
    printf("%p\n", b);

    return 0;
}