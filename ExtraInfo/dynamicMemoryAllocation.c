#include <stdio.h>
#include <stdlib.h>
int main()
{
    // To allocate memory in Heap
    //  malloc
    int *ptr = (int *)malloc(1000 * sizeof(int));
    if (ptr == NULL) {
        printf("Initial allocation failed.\n");
        return 1;
    }
    printf("\nAddress of ptr before reallocaton: %p\n", ptr); // 000002714f1f61c0
    //realloc safely
    int *temp = realloc(ptr, 2000 * sizeof(int));
    if (temp == NULL) {
        printf("Reallocation failed.\n");
        free(ptr);
        return 1;
    }
    ptr = temp;

    printf("Address of ptr after reallocation: %p\n", ptr); // 000002714f1f7170

    int *p = ptr;// preserves original pointer

    printf("\nGrabage value: %d\n", *p);
    p++;
    printf("Grabage value: %d\n", *p);
    p++;
    printf("Grabage value: %d\n", *p);

    // calloc
    int *ptr1 = (int *)calloc(1000, sizeof(int));
    int *p1 = ptr1; // preserves original pointer
    printf("\nDefault value: %d\n", *p1);
    p1++;
    printf("Default value: %d\n", *p1);
    p1++;
    printf("Default value: %d\n", *p1);

    // One differnece between malloc() and calloc() is that
    // calloc initializes all the allocated memory blocks
    // with value 0, and malloc - allocates memory but
    // does not initialize it — the values are garbage.

    //realloc(pointer, new size) is used to dynamically 
    //change the memory allocation of a peviously allocated
    //memory.
    //Note: The data stored remains intact. Just the allocated
    //memory is increased. Hence, it allows allocation
    //according to our needs without making us lose the data
    //stored in the initail 20 bytes. Hence, it is different
    //from malloc() and calloc().
    //But if the new size is larger and there's no space 
    // at the current location, it moves the block to a 
    // new address and copies the old data.

    // You should only call free() on the original pointer
    // returned by malloc/calloc — not on a modified one

    free(ptr);
    free(ptr1);
    // memory deallocated but ptr refers to a memory which
    // now does not belong to us, hence ptr (dangling pointer)
    // should be set to null

    ptr = NULL;
    ptr1 = NULL;

    return 0;
}