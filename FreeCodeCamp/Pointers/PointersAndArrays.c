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
        printf("Address of %d = %d\n", A[i], &A[i]);
        printf("Address of %d = %d\n", A[i], A + i);
        printf("Value of A[%d] = %d\ns", i, A[i]);
        printf("Value of A[%d] = %d\n", i, *(A + i));
    }

    printf("\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Value of A[%d]= %d\n", i, *(p + i));
    }
    printf("\n\n");

    return 0;
}