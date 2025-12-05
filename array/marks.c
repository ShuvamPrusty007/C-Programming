#include <Stdio.h>
int main()
{

    int marks[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Student %d mark is : ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nThe students marks are : ");
    printf("{ ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", marks[i]);
    }
    printf("}\n");

    printf("\nHere are the students whose marks are below 35: ");
    for (int i = 0; i < 10; i++)
    {
        if (marks[i] < 35)
        {
            printf("\nThe Student Roll number %d and mark is %d", i + 1, marks[i]);

        }
    }

    return 0;
}