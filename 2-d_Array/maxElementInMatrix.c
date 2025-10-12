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

    int max = INT_MIN; // from limits.h
    int maxRow = -1, maxColumn = -1;

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

    // MAX ELEMENT of matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < mat1[i][j])
            {
                max = mat1[i][j];
                maxRow = i;
                maxColumn = j;
            }
        }
    }

    // Print the sum
    printf("\nThe max element is %d is at index [%d][%d]\n", max, maxRow, maxColumn);

    return 0;
}