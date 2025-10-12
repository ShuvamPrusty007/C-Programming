#include <stdio.h>

int main()
{

    int r;
    printf("Enter no. of rows: ");
    scanf("%d", &r);

    int c;
    printf("Enter no. of columns: ");
    scanf("%d", &c);

    int mat1[r][c];
    
    int sum = 0;

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


    // Sum of matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum += mat1[i][j];
        }
    }

    // Print the sum
   printf("\nThe sum of all elements in the matrix is: %d\n", sum);


    

    return 0;
}