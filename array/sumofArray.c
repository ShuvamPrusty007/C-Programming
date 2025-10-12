#include<Stdio.h>
int main(){

    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe array is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nThe Sum array is: ");
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("%d ", sum);
    

    return 0;
}