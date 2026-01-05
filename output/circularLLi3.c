#include <stdio.h>
#include <stdlib.h>

struct Node {
    
    int data;
    struct Node* next;
};

// Insert at any position (middle)
void insertAtPosition(struct Node** head, int data, int pos) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (pos == 1) { // Insert at beginning 
        if (*head == NULL) {
            newNode->next = newNode;
            *head = newNode;
            return;
        }
        struct Node* temp = *head;
        while (temp->next != *head)
            temp = temp->next;
        temp->next = newNode;
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node* curr = *head;
    for (int i = 1; i < pos - 1; i++) {
        curr = curr->next;
        if (curr == *head) {
            printf("Position out of bounds.\n");
            free(newNode);
            return;
        }
    }
    newNode->next = curr->next;
    curr->next = newNode;
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

    insertAtPosition(&head, 10, 1);
    insertAtPosition(&head, 20, 2);
    insertAtPosition(&head, 30, 3);
    insertAtPosition(&head, 15, 2); // Insertion in the middle

    printf("Circular Linked List: ");
    display(head);

    return 0;
}
