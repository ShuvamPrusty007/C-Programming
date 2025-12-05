// #include <Stdio.h>
// #include<limits.h>
// int main()
// {

//     int n;
//     printf("Enter the size of array: ");
//     scanf("%d", &n);
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter number %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }

//     printf("\nThe array is: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     printf("\nThe max Value of array is: ");
//     int max = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > max)
//             max = arr[i];
//     }
//     printf("%d ", max);

//     // printf("\nThe second max Value of array is: ");
//     int smax = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > smax && arr[i] < max)
//             smax = arr[i];
//     }

//      if (smax == INT_MIN)
//         printf("\nThere is no second maximum value (all elements may be equal).");
//     else
//         printf("\nThe second max Value of array is: %d", smax);

//     return 0;
// }

#include <Stdio.h>
#include <limits.h>
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

    printf("\nThe max Value of array is: ");
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        else if (smax < arr[i] && max != arr[i])
            smax = arr[i];
    }
    printf("%d ", max);

    if (smax == INT_MIN)
        printf("\nThere is no second maximum value (all elements may be equal).");
    else
        printf("\nThe second max Value of array is: %d", smax);

    return 0;
}