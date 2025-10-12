#include <stdio.h>

int main()
{

    int n;
    printf("Enter no. of rows and columns: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid matrix dimension");
        return 1;
    }

    int minR = 0, maxR = n - 1, minC = 0, maxC = n - 1;
    int totalElement = n * n;
    int count = 0;

    int mat[n][n];

    while (count < totalElement)
    {
        // enter minimum row
        for (int j = minC; j <= maxC && count < totalElement; j++)
        {
            mat[minR][j] = ++count;
        }
        minR++;

        // enter maximum column
        for (int i = minR; i <= maxR && count < totalElement; i++)
        {
            mat[i][maxC] = ++count;
        }
        maxC--;

        // enter maximum row
        for (int j = maxC; j >= minC && count < totalElement; j--)
        {
            mat[maxR][j] = ++count;
        }
        maxR--;

        // enter minimum column
        for (int i = maxR; i >= minR && count < totalElement; i--)
        {
            mat[i][minC] = ++count;
        }
        minC++;
    }

    // Spiral of Matrix
    printf("\nThe Spiral of matrix is: \n");
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