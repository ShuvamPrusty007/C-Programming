// #include <stdio.h>
// #include <stdbool.h>
// void BubbleSort(int *A, int n)
// {
//     int i, j, temp;
//     // outer loop for passes n-1
//     for (i = 0; i < n; i++)
//     {
//         bool flag = true; // assuming elemets are already sorted
//         // innner loop for pushing elemnts till end depending on the requirement
//         for (j = 0; j < n - 1 - i; j++)
//         {
//             if (A[j] > A[j + 1])
//             {
//                 temp = A[j];
//                 A[j] = A[j + 1];
//                 A[j + 1] = temp;
//                 flag = false;
//             }
//         }
//         if (flag == true)
//             break;
//     }
// }

// int main()
// {

//     int A[] = {3, 5, 37, 8, 1, 9};
//     BubbleSort(A, 6);
//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d ", A[i]);
//     }

//     return 0;
// }

//---------------Using callback----------------

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int compare(int a, int b)
{
    return abs(a) - abs(b);
}

void BubbleSort(int *A, int n, int (*comaparing)(int, int))
{
    int i, j, temp;

    for (i = 0; i < n; i++)
    {
        bool flag = true;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (compare(A[j], A[j + 1]) > 0)
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                flag = false;
            }
        }
        if (flag == true)
            break;
    }
}

int main()
{

    int A[] = {3, -5, -37, 8, 1, -9};
    BubbleSort(A, 6, compare);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}