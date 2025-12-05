
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int compare(const void *a, const void *b)
{
    int A = *((int *)a);
    int B = *((int *)b);
    return abs(A) - abs(B);
}

int main()
{

    int A[] = {3, -5, -37, 8, 1, -9};
    qsort(A, 6, sizeof(int), compare);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}