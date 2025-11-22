#include <stdio.h>
int sumOfElement(int *A, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += A[i];
    }

    int localSize = sizeof(A) / sizeof(A[0]);
    printf("\nSize of A in sumOfEle: %d bytes and Size of A[0] in sumOfEle: %d bytes\n", sizeof(A), sizeof(A[0]));
    printf("localSize: %d\n", localSize);

    return sum;
}

int main()
{
    int A[] = {1, 3, 5, 7, 8};
    int size = sizeof(A) / sizeof(A[0]);
    printf("Size of A in main: %d bytes and Size of A[0] in main: %d bytes\n", sizeof(A), sizeof(A[0]));
    int total = sumOfElement(A, size);
    printf("Sum of elemens are: %d", total);

    return 0;
}