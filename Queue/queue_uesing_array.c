#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f; // front to delete elements
    int r; // rear to add elements
    int *arr;
};

int isEmpty(struct queue *q)
{
    return q->r == q->f;
}

int isFull(struct queue *q)
{
    // if (q->r == q->size - 1)
    // {
    //     return 1;
    // }

    // return 0;

    return q->r == q->size - 1;
}

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("\nThis queue is full.\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("\nThis queue is empty, cannot return element.\n");
        return a;
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }

    return a;
}

int main()
{

    // struct queue q;
    // q.size = 100;
    // q.f = q.r = -1;
    // q.arr = (int *)malloc(q.size * sizeof(int));

    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 100;
    q->f = q->r = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));

    // if (isEmpty(q))
    // {
    //     printf("\nQueue is empty.\n");
    // }

    // Enqueue few elements
    enqueue(q, 15);
    enqueue(q, 34);
    enqueue(q, 54);
    enqueue(q, 12);
    enqueue(q, 37);

    printf("\nDequeing element %d", dequeue(q));
    printf("\nDequeing element %d", dequeue(q));
    printf("\nDequeing element %d", dequeue(q));
    printf("\nDequeing element %d", dequeue(q));
    printf("\nDequeing element %d", dequeue(q));

    if (isEmpty(q))
    {
        printf("\n\nQueue is empty.\n");
    }

    if (isFull(q))
    {
        printf("\nQueue is full.\n");
    }

    return 0;
}