#include <stdio.h>
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
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

    swap(&a, &b); // Pass by value
    // means here we are passing refferences of a and b
    // so we are passing address so it will affect here
    // So value will change
    // and a&b will be actual parameters

    printf("After swap a: %d and b: %d", a, b);

    return 0;
}