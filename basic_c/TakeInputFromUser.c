
#include <stdio.h>
int main()
{

    float radius;
    printf("User Input: ");
    scanf("%f", &radius);
    float pi = 3.14159265;
    float area = pi * radius * radius;
    printf("The area of cirle is: %f", area);

    return 0;
}