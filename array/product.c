#include <Stdio.h>
int main()
{

    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nThe Prouduct array is: ");
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    printf("%d ", product);

    return 0;
}