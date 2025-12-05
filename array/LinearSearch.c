#include <stdio.h>
#include <stdbool.h>

int main()
{

    int size;
    printf("Enter a size: ");
    scanf("%d", &size);

    int x;
    printf("Enter value of x, that is needed to be searched: ");
    scanf("%d", &x);

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

    bool check = false;
    for (int i = 0; i < size; i++)
    {
        if (x == arr[i])
        {
            check = true;
            break;
        }
    }

    if (check)
    {
        printf("%d is present in the array", x);
    }
    else
    {
        printf("\n%d is not present in the array", x);
    }

    return 0;
}