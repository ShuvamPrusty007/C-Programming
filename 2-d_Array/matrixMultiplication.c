#include <stdio.h>

int main()
{

    int r1;
    printf("Enter no. of rows for 1st matrix: ");
    scanf("%d", &r1);

    int c1;
    printf("Enter no. of column for 1st matrix: ");
    scanf("%d", &c1);

    int r2;
    printf("Enter no. of rows for 2nd matrix: ");
    scanf("%d", &r2);

    int c2;
    printf("Enter no. of column for 2nd matrix: ");
    scanf("%d", &c2);

    int mat1[r1][c1];
    int mat2[r2][c2];

    if ( c1 != r2)//1st Matrix col = 2nd Marix row
    {
        printf("Matrix Multplication not possible");
        return 1;
    }

    printf("\nEnter values of matrix1:\n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter values of matrix2:\n");

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    int res[r1][c2];
    int cr = c1; // or cr = r2

    // Multiplication of Matrix
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            res [i][j] = 0;
            //i row of a and j column of b
            for(int k = 0;k<cr;k++){
                res[i][j] += mat1[i][k] * mat2[k][j];
            }

        }
    }

    // Print the Matrix
    printf("\nThe Result of matrix is: \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }


    return 0;
}