#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Insert at the end
void insertAtEnd(struct Node** head, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    if (*head == NULL) {
        new_node->next = new_node;
        *head = new_node;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != *head)
        temp = temp->next;
    temp->next = new_node;
    new_node->next = *head;
}

// Display the circular linked list
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

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    printf("Circular Linked List: ");
    display(head);

    return 0;
}
