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

    printf("\nThe unique numbers are: ");
    for (int i = 0; i < size; i++)
    {
        bool flag = false;
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }

        if (flag == false)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}


// ---- Example in C (for values between -100 and 100-----

// #include <stdio.h>

// #define OFFSET 100  // To handle negative numbers
// #define RANGE 201   // From -100 to 100

// int main()
// {
//     int size;
//     printf("Enter a size: ");
//     scanf("%d", &size);

//     int arr[size];
//     int freq[RANGE] = {0};  // Frequency array initialized to 0

//     for (int i = 0; i < size; i++)
//     {
//         printf("Enter number %d: ", i + 1);
//         scanf("%d", &arr[i]);
//         freq[arr[i] + OFFSET]++;  // Shift index to handle negatives
//     }

//     printf("\nThe array is: ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     printf("\nUnique numbers are: ");
//     for (int i = 0; i < size; i++)
//     {
//         if (freq[arr[i] + OFFSET] == 1)
//         {
//             printf("%d ", arr[i]);
//         }
//     }

//     printf("\n");
//     return 0;
// }



//---------- C++ Code to Find All Unique Numbers----------

// #include <iostream>
// #include <unordered_map>
// #include <vector>
// using namespace std;

// int main() {
//     int size;
//     cout << "Enter a size: ";
//     cin >> size;

//     vector<int> arr(size);
//     unordered_map<int, int> freq;

//     for (int i = 0; i < size; i++) {
//         cout << "Enter number " << i + 1 << ": ";
//         cin >> arr[i];
//         freq[arr[i]]++;  // Count frequency
//     }

//     cout << "\nThe array is: ";
//     for (int num : arr) {
//         cout << num << " ";
//     }

//     cout << "\nUnique numbers are: ";
//     for (int num : arr) {
//         if (freq[num] == 1) {
//             cout << num << " ";
//         }
//     }

//     cout << endl;
//     return 0;
// }




