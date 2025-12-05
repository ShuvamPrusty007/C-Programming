#include <Stdio.h>
void reverse(int arr[], int start, int end)
{
    int i = start, j = end;

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

    int k;
    printf("Enter value of k: ");
    scanf("%d", &k);

    int arr[size];

    k = k % size;

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

    reverse(arr, 0, size - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, size - 1);

    printf("\nThe New array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}