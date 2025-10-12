#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 1st side of the triangle: ");
    scanf("%d", &a);
    printf("Enter 2nd side of the triangle: ");
    scanf("%d", &b);
    printf("Enter 3rd side of the triangle: ");
    scanf("%d", &c);

    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        printf("vaild triangle");
    }
    else
    {
        printf("not valid triangle");
    }

    return 0;
}