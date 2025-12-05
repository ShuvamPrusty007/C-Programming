#include <stdio.h>
#include <stdlib.h>
void printHello()
{
    printf("\nHey Shuvam just few more days and you will achieve the desired job you wanted. Your wish is coming true, belive in the universe.\n");
}
int *Add(int *a, int *b)
{
    int *c = (int *)malloc(sizeof(int)); // store in heap so address is not lost after this function execution is done
    *c = (*a) + (*b);
    return c;
}
int main()
{
    int a = 2, b = 2;
    int *ptr = Add(&a, &b);
    printHello();
    printf("Addition is: %d", *ptr);
    return 0;
}