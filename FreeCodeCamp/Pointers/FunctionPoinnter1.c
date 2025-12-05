#include <stdio.h>
int Add(int a, int b)
{
    return a + b;
}

int main()
{
    int c;
    int (*p)(int, int); // Function Pointner
    p = Add; //OR p = &Add; // Function adddress is stored
    // c = (*p)(2, 3);// de-referncing and executing the function
    // OR
    c = p(2, 3);
    printf("The Sum is: %d", c);

    return 0;
}