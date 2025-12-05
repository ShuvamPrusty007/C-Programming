#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL; // Global variable

void linkedListTraversal(struct Node *tp)
{
    while (tp != NULL)
    {
        printf("%d->", tp->data);
        tp = tp->next;
    }
    printf("NULL\n");
}

int isEmpty(struct Node *tp)
{
    // if (top == NULL)
    // {
    //     return 1;
    // }
    // else
    // {
    //     return 0;
    // }

    return tp == NULL;
}

int isFull(struct Node *tp)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
        return 1; // stack is full

    free(n);

    return 0; // still stack has space
}

struct Node *push(struct Node *tp, int val)
{
    if (isFull(tp))
    {
        printf("\nStack Overflow! Cannot push %d to the stack\n", val);
        return tp;
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = val;
        n->next = tp;

        return n; // new top
    }
}

int pop(struct Node **tp)
{
    if (isEmpty(*tp))
    {
        printf("\nStack Underflow! Cannot pop out from the stack\n");
        return -1;
    }
    else
    {
        struct Node *n = *tp;
        int popVal = n->data;

        *tp = (*tp)->next; // update real top

        free(n);

        return popVal; // value of top which is popped out
    }
}

int peek(struct Node *tp, int pos)
{
    struct Node *ptr = tp;
    for (int i = 0; (i < pos - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}

int main()
{

    // struct Node *top = NULL---------> making this global variable

    printf("\nBefore pushing, check if stack is empty or not: %d\n", isEmpty(top));
    printf("Before pushing, check if stack is full or not: %d\n", isFull(top));

    top = push(top, 87);
    top = push(top, 37);
    top = push(top, 85);
    top = push(top, 34);
    top = push(top, 78);
    top = push(top, 98);

    printf("\n");
    printf("Original Linked List: ");
    linkedListTraversal(top);

    printf("\n");

    for (int i = 1; i <= 6; i++)
    {
        printf("Vlaue at pos %d is: %d\n", i, peek(top, i));
    }

    int elementPoppedOut = pop(&top);
    printf("\nelementPoppedOut: %d\n", elementPoppedOut);

    printf("\nNew Linked List: ");
    linkedListTraversal(top);

    printf("\nAfter pushing, check if stack is  empty or not: %d\n", isEmpty(top));
    printf("After pushing, check if stack is  full or not: %d\n", isFull(top));

    // Free memory to avoid leaks
    while (top != NULL)
    {
        struct Node *temp = top;
        top = top->next;
        free(temp);
    }

    return 0;
}