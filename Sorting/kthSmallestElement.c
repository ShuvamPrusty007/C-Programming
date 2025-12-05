#include <stdio.h>
#include <limits.h>
#define n 5
int main()
{
    printf("\nTo Find the kth smallest element:\n");
    int arr[n] = {5, 1, 4, 2, 3};

    printf("\nThe array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nThe kth value to find is: ");
    int k;
    scanf("%d", &k);

    // outer loop for paasses for n numbers, n-1 passes required
    for (int i = 0; i <= k - 1; i++)
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

        // Swapping the minEle and first element of the unsorted
        // part of the array
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nThe value of kth element is: %d", arr[k - 1]);
    printf("\n");

    return 0;
}