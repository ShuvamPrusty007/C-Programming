#include <stdio.h>

int main()
{

    int r;
    printf("Enter no. of rows: ");
    scanf("%d", &r);

    int c;
    printf("Enter no. of columns: ");
    scanf("%d", &c);

    int l1;
    printf("Enter coordinate l1 (row): ");
    scanf("%d", &l1);

    int r1;
    printf("Enter coordinate r1 (col): ");
    scanf("%d", &r1);

    int l2;
    printf("Enter coordinate l2 (row): ");
    scanf("%d", &l2);

    int r2;
    printf("Enter coordinate r2 (col): ");
    scanf("%d", &r2);

    int mat[r][c];
    int sum = 0;

    if (r <= 0 || c <= 0)
    {
        printf("Invalid matrix dimension");
        return 1;
    }

    if (l1 < 0 || l2 >= r || r1 < 0 || r2 >= c || l1 > l2 || r1 > r2)
    {
        printf("Invalid coordinates\n");
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

    printf("The corrdinates are: (%d, %d) and (%d, %d)\n", l1, r1, l2, r2);
    printf("Find the sum between these coordinantes: \n");

    // MAX ELEMENT of matrix
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += mat[i][j];
        }
    }

    // Print the sum
    printf("The sum of matrix from the given coordinates are %d", sum);

    return 0;
}