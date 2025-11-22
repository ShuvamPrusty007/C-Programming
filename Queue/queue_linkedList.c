#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    int f;
    int r;
};

struct Node *f = NULL;
struct Node *r = NULL;

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int isEmpty(struct Node *f)
{
    return f == NULL;
}

int isFull(struct Node *n)
{
    return n == NULL;
}

void enqueue(int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (isFull(n))
    {
        printf("The Queue is full.");
    }
    else
    {
        n->data = val;
        n->next = NULL;

        if (isEmpty(f))
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int dequeue()
{
    int val = -1;
    struct Node *ptr = f;

    if (isEmpty(f))
    {
        printf("The Queue is empty.");
        return val;
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);

        return val;
    }
}

int main()
{

    printf("\nInitially Queue was: ");
    linkedListTraversal(f);

    printf("\nEnqueued Linked list is: ");
    enqueue(8);
    enqueue(6);
    enqueue(9);
    enqueue(7);

    linkedListTraversal(f);

    printf("\nDequeue element is: %d", dequeue());

    printf("\n\nNew Linked list is: ");
    linkedListTraversal(f);

    return 0;
}