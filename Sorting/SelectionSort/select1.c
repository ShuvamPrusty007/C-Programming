#include <stdio.h>
#include <limits.h>
#define n 5
int main()
{

    // TC: O(N^2) & SC: O(1)---> Always it is like this for all the cases

    printf("\nThis piece of code is for Selection Sort:\n");
    int arr[n] = {1, 3, 5, 2, 4};

    printf("\nThe array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // outer loop for paasses for n numbers, n-1 passes required
    for (int i = 0; i < n - 1; i++)
    {
        int minEle = INT_MAX;
        int minIdx = -1;
        // for sorting
        for (int j = i; j <= n - 1; j++)
        {
            // To find the index of the Minimum value to be
            // swapped with the first value of Unsorted array
            if (minEle > arr[j])
            {
                minEle = arr[j];
                minIdx = j;
            }
        }

        // Swapping the first element of the unsorted(minEle) array 
        // and sorted part of the array
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }

    printf("\nSorted array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}