#include <stdio.h>

// int main()
// {

//     int size;
//     printf("Enter a size: ");
//     scanf("%d", &size);

//     int arr[size];
//     int duplicate[size];

//     for (int i = 0; i < size; i++)
//     {
//         duplicate[i] = 0;
//         printf("Enter number %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }

//     printf("\nThe array is: ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     for (int i = 0; i < size; i++)
//     {
//         if (duplicate[i])
//             continue;

//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] == arr[j] && !duplicate[j])
//             {
//                 printf("\nThe duplicate element is: %d", arr[i]);
//                 duplicate[i] = 1;
//                 duplicate[j] = 1;
//                 break;
//             }
//         }
//     }

//     return 0;
// }

//----------------- for 1st duplicate num-----------

#include <stdio.h>
#include <stdbool.h>

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

    int duplicate = 0;

    for (int i = 0; i < size && !duplicate; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("\nThe duplicate element is: %d", arr[i]);
                duplicate = 1;
                break;
            }
        }
    }

    return 0;
}