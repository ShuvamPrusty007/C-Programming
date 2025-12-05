#include <stdio.h>
int main()
{

    float p, r, t, si;
    // p=100, r= 10, t=2;

    printf("Enter principal: ");
    scanf("%f", &p);
    printf("Enter rate: ");
    scanf("%f", &r);
    printf("Enter time: ");
    scanf("%f", &t);

    si = (p * r * t) / 100;
    printf("Simple Interest is: ");
    printf("%f", si);

    return 0;
}