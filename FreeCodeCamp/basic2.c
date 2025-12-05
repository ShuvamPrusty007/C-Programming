#include <stdio.h>
int main()
{
    int a;
    int *p;
    p = &a;
    a = 1025;
    printf("\nsize of integer is %d bytes", sizeof(int));
    printf("\nAddress of a is: %d and Value of a is: %d", &a, a);
    printf("\nAddress of p is: %d and Value of p is: %d", p, *p);
    printf("\nAddress of p+1 is: %d and Value of p+1 is: %d", p + 1, *(p + 1));

    char *ch;
    ch = (char *)p; // typecasting
    printf("\n\nsize of character is %d bytes", sizeof(char));
    printf("\nAddress of ch is: %d and Value of ch is: %d", ch, *ch);
    printf("\nAddress of ch + 1 is: %d and Value of ch + 1 is: %d", ch + 1, *(ch + 1));
    // 1025 = 00000000 00000000 00000100 00000001---> 2^0 + 2^10 = 1+1024 = 1025

    // Void Pointers - Generic Pointer
    printf("\n\nVoid Pointer - Generic Pointer");
    void *p1;
    p1 = &p;
    printf("\nAddress of p1 is: %d", p1);

    return 0;
}