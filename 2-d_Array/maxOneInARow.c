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

    int mat[r][c];

    if (r <= 0 || c <= 0)
    {
        printf("Invalid matrix dimension");
        return 1;
    }

    printf("\nEnter values of matrix:\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int maxSum = INT_MIN;
    int row = -1;

    // Max Sum of matrix
    for (int i = 0; i < r; i++)
    {
        int count = 0;
        for (int j = 0; j < c; j++)
        {
            if (mat[i][j] == 1)
                count++;
        }
        if (maxSum < count)
        {
            maxSum = count;
            row = i;
        }
    }

    // Print the sum
    printf("\nRow %d has maximum 1's", row);

    return 0;
}