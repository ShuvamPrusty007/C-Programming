#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;

    do
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);

    printf("%d(just for understanding showing showing this last node)\n", ptr->data);
}

struct Node *insertAtFirstNode(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return head;
    }
    ptr->data = data;

    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    // At this ppoint p points to the last node of Circular Linkied List

    p->next = ptr;
    ptr->next = head;
    head = ptr;

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
    head->data = 4;
    head->next = second;

    // Link second and third node
    second->data = 3;
    second->next = third;

    // Link third and fourth node
    third->data = 6;
    third->next = fourth;

    // Terminate the list at fourth Node
    fourth->data = 1;
    fourth->next = head;

    printf("\n");
    printf("Original Circular Linked List: ");
    linkedListTraversal(head);
    head = insertAtFirstNode(head, 67);
    printf("Original Circular Linked List: ");
    linkedListTraversal(head);

    return 0;
}