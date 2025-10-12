#include <stdio.h>
int main()
{

    int n;
    printf("Enter n value: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        // for (int space = 0; space < n - i; space++)
        // {
        //     printf(" ");
        // }
        int firstValue = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", firstValue);
            firstValue = firstValue * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}

// 0 1  2  3  4 5 --->r
// 1                   0--> ncr concept applied in "icj"
// 1 1                 1
// 1 2  1              2
// 1 3  3  1           3
// 1 4  6  4  1        4
// 1 5 10 10  5 1      5
//