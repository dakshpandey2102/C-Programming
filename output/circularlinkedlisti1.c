#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head_ref, int data) {
    // Allocate node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;

    if (*head_ref == NULL) {
        new_node->next = new_node;
        *head_ref = new_node;
        return;
    }

    // Find last node
    struct Node* last = *head_ref;
    while (last->next != *head_ref)
        last = last->next;

    new_node->next = *head_ref;
    last->next = new_node;
    *head_ref = new_node;
}

// Helper function to print the list
void printList(struct Node* head) {
    struct Node* temp = head;
    if (head != NULL) {
        do {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != head);
    }
    printf("\n");
}
