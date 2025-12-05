#include <stdio.h>
#define N 8
int main()
{

    int target = 8;
    int arr[N] = {1, 2, 3, 4, 5, 8, 9, 10};

    int i = 0, j = N - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == target)
        {
            printf("\nThe two numbers (%d and %d) whose sum is: %d\n", arr[i], arr[j], target);
            break;
        }
        else if (arr[i] + arr[j] > target)
            j--;
        else
            i++;
    }

    if (i >= j)
    {
        printf("\nNo pair found with the sum %d\n", target);
    }

    return 0;
}