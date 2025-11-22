#include <stdio.h>
#include <stdlib.h>

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *arr, int tsize, int usize)
{
    // (*arr).total_size = tsize;
    // (*arr).used_size = usize;
    // (*arr).ptr = (int *)malloc(tsize * sizeof(int));

    arr->total_size = tsize;
    arr->used_size = usize;
    arr->ptr = (int *)malloc(tsize * sizeof(int));
}

void setValue(struct myArray *arr)
{
    int n;
    for (int i = 0; i < arr->used_size; i++)
    {
        printf("Enter an element %d: ", i);
        scanf("%d", &n);
        (arr->ptr)[i] = n;
    }
}

int showValue(struct myArray *arr)
{

    printf("\nThe value of array are: ");
    for (int i = 0; i < arr->used_size; i++)
    {
        printf("%d ", (arr->ptr)[i]);
    }
    printf("\n");
}

int main()
{
    struct myArray marks;
    createArray(&marks, 10, 5);
    printf("\nArray has been created successfully !\n");

    setValue(&marks);

    showValue(&marks);

    return 0;
}