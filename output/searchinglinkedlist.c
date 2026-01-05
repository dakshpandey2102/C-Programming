#include <stdio.h>
#include <stdlib.h>  // needed for malloc()

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head, *newnode, *temp;
    head = NULL;
    int choice = 1;

    // Linked list creation
    while (choice) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL)
            head = temp = newnode;
        else {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue (0 = No, 1 = Yes)? ");
        scanf("%d", &choice);
    }

    // Display list
    temp = head;
    printf("\nLinked List Elements: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Search element
    int searchValue, found = 0;
    printf("\nEnter element to search: ");
    scanf("%d", &searchValue);

    temp = head;
    while (temp != NULL) {
        if (temp->data == searchValue) {
            found = 1;
            break;
        }
        temp = temp->next;
    }

    if (found)
        printf("Element %d found in the linked list.\n", searchValue);
    else
        printf(" Element %d not found in the linked list.\n", searchValue);

    return 0;
}
