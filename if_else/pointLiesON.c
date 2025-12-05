#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the coordinates: ");
    // scanf("%d", x);
    // scanf("%d", y);

    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("The points lie on  origin");
    }
    else if (y == 0)
    {
        printf("The points lie on  x-axis");
    }
    else if (x == 0)
    {
        printf("The points lie on  y-axis");
    }
    else
    {
        printf("The points do not lie on  x and y axis");
    }

    return 0;
}