#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Insert at the end for demonstration
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if (*head == NULL) {
        *head = newNode;
        newNode->next = newNode;
        return;
    }
    struct Node* curr = *head;
    while (curr->next != *head)
        curr = curr->next;
    curr->next = newNode;
    newNode->next = *head;
}

// Delete from beginning
void deleteBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty, nothing to delete\n");
        return;
    }
    struct Node* temp = *head;
    if (temp->next == *head) { // Only one node
        *head = NULL;
        free(temp);
        return;
    }
    struct Node* curr = *head;
    while (curr->next != *head)
        curr = curr->next;
    curr->next = (*head)->next;
    *head = (*head)->next;
    free(temp);
}

// Display the list
void display(struct Node* head) {
    if (head == NULL) return;
    struct Node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    printf("Circular Linked List: ");
    display(head);

    deleteBeginning(&head);

    printf("After deleting the first node: ");
    display(head);

    return 0;
}
