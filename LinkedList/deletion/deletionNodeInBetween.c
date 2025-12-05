#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

struct Node *deletionOfNodeInBetween(struct Node *head, int index)
{

    if (head == NULL)
        return NULL;

    if (index == 0)
    {
        struct Node *p = head;
        head = head->next;
        free(p);

        return head;
    }

    struct Node *p = head;
    struct Node *q = head->next;

    int i = 0;
    while (i < index - 1 && q != NULL)
    {
        p = p->next;
        q = q->next;
        i++;
    }

    // If index is invalid (q is NULL), do nothing
    if (q == NULL)
        return head;

    // struct Node *q = p->next;
    p->next = q->next;
    free(q);

    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocated memory for nodes in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second node
    head->data = 7;
    head->next = second;

    // Link second and third node
    second->data = 8;
    second->next = third;

    // Link third and fourth node
    third->data = 68;
    third->next = fourth;

    // Terminate the list at fourth Node
    fourth->data = 99;
    fourth->next = NULL;

    printf("\n");
    printf("Original Linked List: ");
    linkedListTraversal(head);
    head = deletionOfNodeInBetween(head, 2);
    printf("New Linked List: ");
    linkedListTraversal(head);

    return 0;
}