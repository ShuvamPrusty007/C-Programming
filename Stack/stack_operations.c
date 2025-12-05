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

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("\nStack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("\nStack underflow! Cannot pop,stack is empty.\n");
        return -1;
    }
    else
    {
        int value = ptr->arr[ptr->top];
        ptr->top--;

        return value;
    }
}

int main()
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *)malloc(s.size * sizeof(int));

    struct stack *s = (struct stack *)malloc(sizeof(struct stack)); // Allocate memory for struct
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("\nStack has been created succcessfully\n");

    printf("\nBefore pushing, check if stack is empty or not: %d\n", isEmpty(s));
    printf("\nBefore pushing, check if stack is full or not: %d\n", isFull(s));

    push(s, 45);
    push(s, 43);
    push(s, 45);
    push(s, 15);
    push(s, 95);
    push(s, 12);
    push(s, 34);
    push(s, 67);
    push(s, 21);
    push(s, 89);// --- pushed 10 values
    push(s, 456);// Stack Overflow,since the size of styack is 10

    printf("\nAfter pushing, check if stack is  empty or not: %d\n", isEmpty(s));
    printf("\nAfter pushing, check if stack is  full or not: %d\n", isFull(s));

    printf("\nPopped %d from the stack\n", pop(s));

    // Free memory to avoid leaks
    free(s->arr);
    free(s);

    return 0;
}