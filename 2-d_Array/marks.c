#include <stdio.h>

int main()
{

    int r;
    printf("Enter no. of rows: ");
    scanf("%d", &r);

    int c;
    printf("Enter no. of cloumns: ");
    scanf("%d", &c);

    char student_names[r][50];
    char subject_names[c][50];

    int marks[r][c];

    // Input subject names
    printf("\nEnter names of subjects:\n");
    for (int j = 0; j < c; j++)
    {
        printf("Subject %d: ", j + 1);
        scanf("%s", subject_names[j]);
    }

    printf("\nEnter all the details of Students: \n");
    for (int i = 0; i < r; i++)
    {
        printf("\nEnter name of Student %d: ", i + 1);
        scanf("%s", student_names[i]);

        for (int j = 0; j < c; j++)
        {
            printf("Enter marks for %s in %s: ", student_names[i], subject_names[j]);
            scanf("%d", &marks[i][j]);
        }
    }

    // Print the table
    printf("\n%-15s", "Students");
    for (int j = 0; j < c; j++)
    {
        printf("%-10s", subject_names[j]);
    }
    printf("\n");

    for (int i = 0; i < r; i++)
    {
        printf("%-15s", student_names[i]);
        for (int j = 0; j < c; j++)
        {
            printf("%-10d", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}