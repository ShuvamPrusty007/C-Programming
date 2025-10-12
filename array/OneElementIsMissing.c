#include <stdio.h>
#include <stdbool.h>

int main()
{

    int size;
    printf("Enter a size: ");
    scanf("%d", &size);

    int arr[size-1];

    for (int i = 0; i < size - 1; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe array is: ");
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    int sum1 = size * (size + 1) / 2;

    int sum2 = 0;
    for (int i = 0; i < size - 1; i++)
    {
        sum2 += arr[i];
    }

    int element = sum1 - sum2;

    printf("\nThe number that is missing is: %d", element);

    return 0;
}