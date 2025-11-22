#include <stdio.h>
#define n 10

//----------------Time complexity & Space Complexity----------------

// Method 1: TC: O(N^2) & SC: O(1) -----> BRUTE FORCE MIGHT BE WORST IN TERMS OF TC

int main(){

    int arr[n+1]  = {1,6,3,7,8,5,2,6,9,4,10};

    for(int i = 0;i<=n-1;i++){
        for(int j = i+1;j<=n;j++){
            if(arr[i] == arr[j]){
                printf("\nThe duplicate value is: %d\n", arr[i]);
                break;
            }
        }
    }

    return 0;
}

// Method 2: TC: O(N) & SC: O(N) -----> BEST IN TERMS OF TC

// int main(){

//     int arr[n+1]  = {1,6,3,7,8,5,2,6,9,4,10};
//     int duplicate[n+1] ={0};

//     for(int i = 0;i<=n;i++){
//         if (arr[i] >= n || arr[i] < 1) {
//             printf("Value %d out of bounds\n", arr[i]);
//             continue;
//         }

//         if(duplicate[arr[i]] != 0){
//             printf("\nThe duplicate number is: %d", arr[i]);
//             break;
//         }
//         duplicate[arr[i]] = 1;
//     }

//     return 0;
// }

// Method 3: TC: O(1) & SC: O(1)

// 🚫 Limitations
// This method won’t work if:
// - There are multiple duplicates
// - Numbers are missing
// - Numbers are not in the range 1 to n-1


// int main()
// {

//     int arr[n+1] = {1, 6, 3, 7, 8, 5, 2, 6, 9, 4, 10};
//     int sum1 = n * (n + 1) / 2;
//     int sum2 = 0;

//     for (int i = 0; i <= n; i++)
//     {
//         sum2 += arr[i];
//     }

//     int Duplicate = sum2 - sum1;

//     printf("\nThe Duplicate number is:%d\n", Duplicate);

//     return 0;
// }