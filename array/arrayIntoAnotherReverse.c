#include <Stdio.h>
int main()
{

    int size;
    printf("Enter a size: ");
    scanf("%d", &size);

    int arr[size], arr1[size];

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

    // Reverse logic
    for (int i = 0; i < size; i++)
    {
        arr1[i] = arr[size - 1 - i];
    }

    printf("\nThe New Reversed array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr1[i]);
    }

    return 0;
}