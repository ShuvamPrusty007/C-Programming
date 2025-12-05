// #include <stdio.h>

// int main()
// {

//     int r;
//     printf("Enter no. of rows: ");
//     scanf("%d", &r);

//     int c;
//     printf("Enter no. of columns: ");
//     scanf("%d", &c);

//     int mat1[r][c];
//     int mat2[r][c];
//     int result[r][c];

//     if (r <= 0 || c <= 0)
//     {
//         printf("Invalid matrix dimension");
//         return 1;
//     }

//     printf("\nEnter values of matrix 1:\n");

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &mat1[i][j]);
//         }
//     }

//     printf("\nEnter values of matrix 2:\n");

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &mat2[i][j]);
//         }
//     }

//     // Addtion of two matrix
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             result[i][j] = mat1[i][j] + mat2[i][j];
//         }
//     }

//     // Print the table
//     printf("\nThe result matrix is:\n");

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             printf("%d \t", result[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

//--------------------IN PLACE METHOD---------------------

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
    int mat2[r][c];

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

    printf("\nEnter values of matrix 2:\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Addtion of two matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mat1[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Print the table
    printf("\nThe result matrix is:\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d \t", mat1[i][j]);
        }
        printf("\n");
    }

    return 0;
}