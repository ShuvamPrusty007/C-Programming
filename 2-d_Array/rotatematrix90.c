#include <stdio.h>

int main()
{

    int n;
    printf("Enter no. of rows and columns: ");
    scanf("%d", &n);

    int mat[n][n];

    if (n <= 0)
    {
        printf("Invalid matrix dimension");
        return 1;
    }

    printf("\nEnter values of matrix:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    // Transpose of Matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // swap mat[i][j] and mat[j][i]
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    // Print the Matrix
    printf("\nThe transpose of matrix is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // Rotate Matrix by 90 degree
    for (int i = 0; i < n; i++)
    {
        int j = 0, k = n - 1;
        // swap mat[i][j] and mat[i][k]
        int temp = mat[i][j];
        mat[i][j] = mat[i][k];
        mat[i][k] = temp;

        j++;
        k--;
    }

    // Print the Matrix
    printf("\nAfter rotation of matrix by 90 degree is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}