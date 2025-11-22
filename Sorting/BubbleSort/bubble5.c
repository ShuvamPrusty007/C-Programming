#include <stdio.h>
#include <stdbool.h>
#define n 5
int main()
{

    // TC: O(N) & SC: O(1)
    // BEST CASE EXAMPLE
    printf("\nThis piece of code for bubble sorted is Most optimized, but here showing example of best case:\n");
    int arr[n] = {1, 2, 3, 4, 5}; // taking example for an already sorted array in ascending order

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
        // Also here we are applying a check before sorting
        // to see if the array is already sorted or not
        // so that we dont need to do sorting for every pass

        bool flag = true; // assuming array is already sorted
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false; // if we are doing swapping that means not sorted
            }
        }

        // if array is sorted then dont need to check anymore,
        //  just come out of the loop
        if (flag == true)
            break;
    }

    printf("\nSorted array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}