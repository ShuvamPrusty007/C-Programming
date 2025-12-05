#include <stdio.h>
#include <stdlib.h>

struct circularQueue
{
    int size;
    int f; // front to delete elements
    int r; // rear to add elements
    int *arr;
};

int isEmpty(struct circularQueue *q)
{
    return q->r == q->f;
}

int isFull(struct circularQueue *q)
{
    return (q->r + 1) % q->size == q->f;
}

void enqueue(struct circularQueue *q, int val)
{
    if (isFull(q))
    {
        printf("\nThis queue is full.\n");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
    }
}

int dequeue(struct circularQueue *q)
{
    if (isEmpty(q))
    {
        printf("\nThis queue is empty, cannot return element.\n");
        return -1;
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        return q->arr[q->f];
    }
}

int main()
{

    // struct queue q;
    // q.size = 100;
    // q.f = q.r = -1;
    // q.arr = (int *)malloc(q.size * sizeof(int));

    struct circularQueue *q = (struct circularQueue *)malloc(sizeof(struct circularQueue));
    q->size = 4;
    q->f = q->r = 0;
    q->arr = (int *)malloc(q->size * sizeof(int));

    // Enqueue few elements
    enqueue(q, 15);
    enqueue(q, 34);
    enqueue(q, 54);
    // enqueue(q, 12);
    // enqueue(q, 37);

    printf("\nDequeing element %d", dequeue(q));
    printf("\nDequeing element %d", dequeue(q));
    printf("\nDequeing element %d", dequeue(q));
    // printf("\nDequeing element %d", dequeue(q));
    // printf("\nDequeing element %d", dequeue(q));

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