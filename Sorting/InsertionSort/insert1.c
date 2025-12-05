#include <stdio.h>
#include <limits.h>
#define n 5
int main()
{

    // TC: O(N^2) & SC: O(1)-----> FOR AVG AND WORST CASE
    // TC: O(N) & SC: O(1) ------> FOR BEST CASE ===> {1,2,3,4,5}

    printf("\nThis piece of code is for Insertion Sort:\n");
    int arr[n] = {3, 1, 4, 2, 0};

    printf("\nThe array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // outer loop for paasses for n numbers, n-1 passes required
    // Here 'i' value starts with '1' because we are comparing only
    // the first element of unsorted array with all the elements
    // of sorted array
    for (int i = 1; i <= n - 1; i++)
    {
        int j = i;
        // For sorting
        // Here we are comparing the first element of unsorted array
        // with all the elements of sorted array and here we have
        // taken while loop because we don't know till where we
        // need to check for the element to get sorted
        // Also here we have applied an extra condition 'j' value
        // should be greater than or equal to '1' because when we will
        // compare there will be one case where 'j-1' will be out of loop
        // so we dont have any value to compare which will be the case
        // where we will take 'j>=1', since it will be trying to search a
        // value in that index where it is out of array and no value is
        // there to compare.

        while (j >= 1 && arr[j] < arr[j - 1])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
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