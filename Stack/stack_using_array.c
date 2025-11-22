#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *)malloc(s.size * sizeof(int));

    struct stack *s = (struct stack *)malloc(sizeof(struct stack)); // Allocate memory for struct
    s->size = 6;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // Pushing elements
    for (int i = 0; i < s->size; i++)
    {
        s->top++;
        s->arr[s->top] = i + 10;
    }

    // check if stack is empty or not
    if (isEmpty(s))
    {
        printf("\nThe stack is empty.\n");
    }
    else
    {
        printf("\nThe stack is not empty.\n");
    }

    // check if stack is full  or not
    if (isFull(s))
    {
        printf("\nThe stack is full.\n");
    }
    else
    {
        printf("\nThe stack is not full.\n");
    }

    // Free memory to avoid leaks
    free(s->arr);
    free(s);

    return 0;
}