#include <stdio.h>
#include <math.h>
#include <limits.h>
int main()
{

    float x = sqrt(10);
    float y = cbrt(10);
    printf("\n%f\n", x);
    printf("%f\n", y);

    int x1 = __INT_MAX__;
    int x2 = INT_MAX;
    printf("\n%d\n", x1);
    printf("%d\n", x2);

    long max = LONG_MAX;
    printf("\n%ld", max);

    return 0;
}