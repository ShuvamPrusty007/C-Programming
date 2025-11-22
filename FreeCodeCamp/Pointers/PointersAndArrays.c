#include <stdio.h>
int main()
{

    int A[] = {1, 2, 3, 4, 5};
    printf("%d\n", A);
    printf("%d\n", &A[0]);

    int *p = A;
    // A++; ---> will give compliation error
    // p++; ----> will give result

    printf("\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Address of = %d\n", &A[i]);
        printf("Address of = %d\n", A + i);
        printf("Value of = %d\n", A[i]);
        printf("Value of = %d\n", *(A + i));
    }

    printf("\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Value of = %d\n", *(p + i));
    }
    printf("\n\n");

    return 0;
}