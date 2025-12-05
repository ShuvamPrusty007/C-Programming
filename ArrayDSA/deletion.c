#include <stdio.h>

void display(int arr[], int size)
{
    printf("\nThe array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int deleteAtIndex(int arr[], int size, int index)
{
    for (int i = index; i <size; i++)
    {
        arr[i] = arr[i+1];
    }

    return 1;
}

int main()
{

    int arr[100] = {12, 34, 54, 67, 89};

    int size = 5, index = 2;
    display(arr, size);
    deleteAtIndex(arr, size, index);
    size -= 1;
    display(arr, size);

    return 0;
}