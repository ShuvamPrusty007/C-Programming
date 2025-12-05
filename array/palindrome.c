// #include <Stdio.h>
// int main()
// {

//     int size;
//     printf("Enter a size: ");
//     scanf("%d", &size);

//     int arr[size], arr1[size];

//     for (int i = 0; i < size; i++)
//     {
//         printf("Enter number %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }

//     printf("\nThe array is: ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     // Reverse logic
//     for (int i = 0; i < size; i++)
//     {
//         arr1[i] = arr[size - 1 - i];
//     }

//     printf("\nThe New Reversed array is: ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr1[i]);
//     }

    // int isPalindrome = 1;
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] != arr1[i])
    //     {
    //         isPalindrome = 0;
    //         break;
    //     }
    // }

    // if (isPalindrome)
    //     printf("\nPalindrome Array");
    // else
    //     printf("\nNot Palindrome Array");

//     return 0;
// }


//------------ IN PLACE-----------------------

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


    int isPalindrome = 1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != arr[size - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("\nPalindromic Array");
    else
        printf("\nNot a Palindromic Array");

    return 0;
}