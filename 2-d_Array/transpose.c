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
    int Transpose[c][r];

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

    // Store transpose of Matrix
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            Transpose[i][j] = mat[j][i];
        }
    }

    // Print the Matrix
    printf("\nThe transpose of matrix is: \n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", Transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}