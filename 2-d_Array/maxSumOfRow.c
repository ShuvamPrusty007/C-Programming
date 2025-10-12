#include <stdio.h>
#include <limits.h>

int main()
{

    int r;
    printf("Enter no. of rows: ");
    scanf("%d", &r);

    int c;
    printf("Enter no. of columns: ");
    scanf("%d", &c);

    int mat1[r][c];

    if (r <= 0 || c <= 0)
    {
        printf("Invalid matrix dimension");
        return 1;
    }

    printf("\nEnter values of matrix 1:\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    int maxSum = INT_MIN;
    int row = -1;

    // Max Sum of matrix
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += mat1[i][j];
        }
        if (maxSum < sum)
            {
                maxSum = sum;
                row = i;
            }
    }

    // Print the sum
    printf("\nRow %d has maximum sum %d", row, maxSum);

    return 0;
}