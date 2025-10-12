#include <stdio.h>

int main()
{

    int r;
    printf("Enter no. of rows: ");
    scanf("%d", &r);
    int c;
    printf("Enter no. of columns: ");
    scanf("%d", &c);

    if (r <= 0 || c <= 0)
    {
        printf("Invalid matrix dimension");
        return 1;
    }

    int minR = 0, maxR = r - 1, minC = 0, maxC = c - 1;
    int totalElement = r * c;
    int count = 0;

    int mat[r][c];

    printf("\nEnter values of matrix:\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    // Spiral of Matrix
    printf("\nThe Spiral of matrix is: \n");

    while (count < totalElement)
    {
        // print minimum row
        for (int j = minC; j <= maxC && count < totalElement; j++)
        {
            printf("%d ", mat[minR][j]);
            count++;
        }
        minR++;
        // if (count >= totalElement)
        //     break;

        // print maximum column
        for (int i = minR; i <= maxR && count < totalElement; i++)
        {
            printf("%d ", mat[i][maxC]);
            count++;
        }
        maxC--;
        // if (count >= totalElement)
        //     break;

        // print maximum row
        for (int j = maxC; j >= minC && count < totalElement; j--)
        {
            printf("%d ", mat[maxR][j]);
            count++;
        }
        maxR--;
        // if (count >= totalElement)
        //     break;

        // print minimum column
        for (int i = maxR; i >= minR && count < totalElement; i--)
        {
            printf("%d ", mat[i][minC]);
            count++;
        }
        minC++;
        // if (count >= totalElement)
        //     break;
    }

    return 0;
}