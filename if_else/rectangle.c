#include <stdio.h>
int main()
{

    int l, b, area, perimeter;

    printf("The length entered by user: ");
    scanf("%d", &l);

    printf("The breadth entered by user: ");
    scanf("%d", &b);

    area = l * b;
    perimeter = 2 * (l + b);

    if (area > perimeter)
    {
        printf("The area is greater");
    }
    else if (area < perimeter)
    {
        printf("The perimeter is greater");
    }
    else
    {
        printf("Neither area nor perimeter is greater");
    }

    return 0;
}