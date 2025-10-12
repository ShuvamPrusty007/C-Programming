#include <stdio.h>
#define PI 3.14159265359
#define area(r) (PI * r * r)
int main()
{

    double x = 3.14159265359;
    printf("\n%.11f\n", x);
    printf("%.11f\n", PI);

    printf("%f", area(10));

    return 0;
}