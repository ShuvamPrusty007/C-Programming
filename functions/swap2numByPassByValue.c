#include <stdio.h>
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    return;
}
int main()
{

    int a;
    printf("a: ");
    scanf("%d", &a);

    int b;
    printf("b: ");
    scanf("%d", &b);

    swap(a, b); // Pass by value
    // means here we are passing values of a and b
    // not there address so it wont affect here
    // So value wont change
    // like a&b are formal parameters
    // not actual parameters

    printf("After swap a: %d and b: %d", a, b);

    return 0;
}