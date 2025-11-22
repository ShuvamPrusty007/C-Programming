#include <stdio.h>
#define n 9

int main()
{
    int arr[n] = {5, 0, 2, 0, 0, 4, 1, 3, 0};
    int result[n] = {0};
    int idx = 0;

    printf("\nThe array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            result[idx] = arr[i];
            idx++;
        }
    }

    printf("\nThe Result array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }
    
    printf("\n");

    return 0;
}