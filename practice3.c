#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Shuvam
{
    int age;
    char name[60];
};

int main()
{
    // int arr[5];
    // int *ptr = (int *)malloc(n * sizeof(int));

    struct Shuvam *p = (struct shuvam *)malloc(sizeof(struct Shuvam));
    

    int arr[5] = {1, 3, 54, 6, 7};
    int *ptr = arr;

    // int *ptr1 = (int *)calloc(n, sizeof(int));

    // memset(ptr, 0, n * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        // printf("%d ", *(ptr+i));
        printf("%d ", *ptr++);
        // printf("%d ", ptr);----> wrong
    }

    printf("\n%d", *ptr);

    ptr = arr;

    free(ptr);

    printf("\n%d", *ptr);
    // free(ptr1);

    return 0;
}