#include <stdio.h>
// void increasing(int x, int n)
// {
//     if (x > n)
//         return;

//     printf("\n%d", x);
//     increasing(x+1, n);

//     return;
// }

void increasing(int n)
{
    if (n == 0)
        return;

    increasing(n - 1);
    printf("\n%d", n);

    return;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // increasing(1, n);
    increasing(n);
    printf("\n");

    return 0;
}