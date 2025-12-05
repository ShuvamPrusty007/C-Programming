#include <stdio.h>

int main()
{
    printf("Float Data Type Examples:");
    float x = 5;
    float y = 2;
    float z = x / y;
    printf("\n%f", z);

    float f = 5 / 2; // first it is interger then just stored in float so it gives o/p as integer only
    printf("\n%f", f);

    // if anyone of he value is decimal value then it willgive answer in decimal value
    float a = 5.0 / 2;
    float b = 5 / 2.0;
    printf("\n%f", a);
    printf("\n%f", b);
}