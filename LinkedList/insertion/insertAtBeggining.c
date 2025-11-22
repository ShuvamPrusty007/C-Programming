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

struct Node *insertAtBeggining(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return head;
    }

    ptr->data = data;
    ptr->next = head;

    return ptr;
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
    head = insertAtBeggining(head, 67);
    printf("New Linked List: ");
    linkedListTraversal(head);

    return 0;
}