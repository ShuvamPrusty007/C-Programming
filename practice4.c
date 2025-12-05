#include <stdio.h>
#include <stdbool.h>
int search(int arr[], int n, int ele)
{
    int left = 0, right = n - 1, mid = 0;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (ele == arr[mid])
            return mid;

        if (ele < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return -1;
}

void sort(int arr[], int n)
{

    int counter = 0;
    bool flag = true;
    // outer loop n-1
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            counter++;
            if (arr[j + 1] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false;
            }
        }
        // printf("\n counter : %d\n", counter);
        if (flag == true)
            return;
    }
}

int main()
{

    int arr[10] = {2, 3, 47, 7, 8, 1, 34, 56, 45, 12};

    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    sort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // sort(arr1, 10);
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ", arr1[i]);
    // }

    int found = search(arr, 10, 12);
    printf("\nelement is at index: %d", found);

    return 0;
}