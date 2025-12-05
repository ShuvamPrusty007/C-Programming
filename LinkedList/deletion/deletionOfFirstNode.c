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

struct Node *deletionOfFirstNode(struct Node *head)
{
    if (head == NULL)
    {
        printf("The List is empty.");
        return NULL;
    }

    struct Node *ptr = head;
    head = head->next;
    free(ptr);

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
    head = deletionOfFirstNode(head);
    printf("New Linked List: ");
    linkedListTraversal(head);

    return 0;
}