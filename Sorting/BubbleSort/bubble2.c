#include <stdio.h>
#define n 5
int main()
{

    // TC: O(N^2) & SC: O(1)
    printf("\nThis piece of code for bubble sorted is optimized:\n");
    int arr[n] = {1, 3, 5, 2, 4};

    printf("\nThe array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // outer loop for paasses for n numbers, n-1 passes required
    for (int i = 0; i < n - 1; i++)
    {
        // for sorting
        // Since in inner loop since we know that largest
        // element will get sorted first so that is why we  
        // are going till n-1-i
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}