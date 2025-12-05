#include <stdio.h>

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

    // Wave of Matrix
    printf("\nThe traversal of matrix is: \n");
    for (int i = 0; i < r; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < c; j++)
            {
                printf("%d ", mat[i][j]);
            }
        }
        else
        {
            for (int j = c - 1; j >= 0; j--)
            {
                printf("%d ", mat[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}