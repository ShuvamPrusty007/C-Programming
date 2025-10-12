#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n;
    printf("Enter no. of integers:");
    scanf("%d", &n);

    // int arr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }

    //  for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    // without array

    int *ptr = (int *)malloc(n * sizeof(int));
    int *p = ptr;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &(*p));
        p++;
    }

    p = ptr;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *p);
        p++;
    }

    return 0;
}