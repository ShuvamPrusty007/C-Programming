#include <Stdio.h>
void reverse(int arr[], int size)
{
    int i = 0, j = size-1;

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp; 
        i++;
        j--;
    }

    return;
}

int main()
{

    int size;
    printf("Enter a size: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    reverse(arr, size);

    printf("\nThe New array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}